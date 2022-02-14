
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct tag {struct object* tagged; } ;
struct repository {int dummy; } ;
struct TYPE_2__ {size_t nr; int * oid; } ;
struct remote_island {TYPE_1__ oids; } ;
struct object {scalar_t__ type; int oid; int flags; } ;
struct island_bitmap {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct island_bitmap* FUNC_0 (struct object*) ;
 int FUNC_1 (struct island_bitmap*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct object* FUNC_2 (struct repository*,int *) ;

__attribute__((used)) static void FUNC_3(struct repository *VAR_5,
     struct remote_island *VAR_6,
     int VAR_7)
{
 uint32_t VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->oids.nr; ++VAR_8) {
  struct island_bitmap *VAR_9;
  struct object *VAR_10 = FUNC_2(VAR_5, &VAR_6->oids.oid[VAR_8]);

  if (!VAR_10)
   continue;

  VAR_9 = FUNC_0(VAR_10);
  FUNC_1(VAR_9, VAR_3);

  if (VAR_7 && VAR_10->type == VAR_1)
   VAR_10->flags |= VAR_0;


  while (VAR_10 && VAR_10->type == VAR_2) {
   VAR_10 = ((struct tag *)VAR_10)->tagged;
   if (VAR_10) {
    FUNC_2(VAR_5, &VAR_10->oid);
    VAR_9 = FUNC_0(VAR_10);
    FUNC_1(VAR_9, VAR_3);
   }
  }
 }

 if (VAR_7)
  VAR_4 = VAR_3;

 VAR_3++;
}

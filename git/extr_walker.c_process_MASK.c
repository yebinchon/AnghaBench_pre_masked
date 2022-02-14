
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct walker {int (* prefetch ) (struct walker*,int ) ;} ;
struct TYPE_5__ {int hash; } ;
struct object {int flags; TYPE_3__ oid; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct object*,TYPE_1__**) ;
 TYPE_1__** VAR_3 ;
 int FUNC_2 (struct walker*,int ) ;

__attribute__((used)) static int FUNC_3(struct walker *VAR_4, struct object *VAR_5)
{
 if (VAR_5->flags & VAR_1)
  return 0;
 VAR_5->flags |= VAR_1;

 if (FUNC_0(&VAR_5->oid)) {

  VAR_5->flags |= VAR_2;
 }
 else {
  if (VAR_5->flags & VAR_0)
   return 0;
  VAR_4->prefetch(VAR_4, VAR_5->oid.hash);
 }

 FUNC_1(VAR_5, VAR_3);
 VAR_3 = &(*VAR_3)->next;
 return 0;
}

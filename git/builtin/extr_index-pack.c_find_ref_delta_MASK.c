
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_delta_entry {size_t obj_no; int oid; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (struct object_id const*,int *,int,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct ref_delta_entry* VAR_2 ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_3, enum object_type VAR_4)
{
 int VAR_5 = 0, VAR_6 = VAR_0;

 while (VAR_5 < VAR_6) {
  int VAR_7 = VAR_5 + (VAR_6 - VAR_5) / 2;
  struct ref_delta_entry *VAR_8 = &VAR_2[VAR_7];
  int VAR_9;

  VAR_9 = FUNC_0(VAR_3, &VAR_8->oid,
           VAR_4, VAR_1[VAR_8->obj_no].type);
  if (!VAR_9)
   return VAR_7;
  if (VAR_9 < 0) {
   VAR_6 = VAR_7;
   continue;
  }
  VAR_5 = VAR_7+1;
 }
 return -VAR_5-1;
}

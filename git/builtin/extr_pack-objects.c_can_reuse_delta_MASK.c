
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {struct object_id oid; } ;
struct object_entry {TYPE_1__ idx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct object_id*) ;
 int FUNC_1 (struct object_id*,struct object_id*) ;
 int FUNC_2 (struct object_id*,unsigned char const*) ;
 struct object_entry* FUNC_3 (int *,struct object_id*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(const unsigned char *VAR_4,
      struct object_entry *VAR_5,
      struct object_entry **VAR_6)
{
 struct object_entry *VAR_7;
 struct object_id VAR_8;

 if (!VAR_4)
  return 0;

 FUNC_2(&VAR_8, VAR_4);





 VAR_7 = FUNC_3(&VAR_2, &VAR_8);
 if (VAR_7) {
  if (!FUNC_1(&VAR_5->idx.oid, &VAR_7->idx.oid))
   return 0;
  *VAR_6 = VAR_7;
  return 1;
 }






 if (VAR_1 && FUNC_0(VAR_0, &VAR_8)) {
  if (VAR_3) {
   if (!FUNC_1(&VAR_5->idx.oid, &VAR_8))
    return 0;
  }
  *VAR_6 = ((void*)0);
  return 1;
 }

 return 0;
}

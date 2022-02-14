
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_3__ {unsigned long size; int ptr; } ;
typedef TYPE_1__ mmfile_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct object_id const*) ;
 scalar_t__ FUNC_2 (struct object_id const*,int *) ;
 int FUNC_3 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_4 (char*) ;

void FUNC_5(mmfile_t *VAR_2, const struct object_id *VAR_3)
{
 unsigned long VAR_4;
 enum object_type VAR_5;

 if (FUNC_2(VAR_3, &VAR_1)) {
  VAR_2->ptr = FUNC_4("");
  VAR_2->size = 0;
  return;
 }

 VAR_2->ptr = FUNC_3(VAR_3, &VAR_5, &VAR_4);
 if (!VAR_2->ptr || VAR_5 != VAR_0)
  FUNC_0("unable to read blob object %s", FUNC_1(VAR_3));
 VAR_2->size = VAR_4;
}

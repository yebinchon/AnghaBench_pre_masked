
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 struct object_id* FUNC_3 (int *,struct object_id const*) ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int VAR_1 ;
 char* FUNC_5 (struct object_id const*,int*,unsigned long*) ;

__attribute__((used)) static char *FUNC_6(const struct object_id *VAR_2)
{
 const struct object_id *VAR_3;
 char *VAR_4 = ((void*)0);
 unsigned long VAR_5;
 enum object_type VAR_6;

 FUNC_4(((void*)0), VAR_1, ((void*)0), 0);
 if (!(VAR_3 = FUNC_3(((void*)0), VAR_2)))
  return ((void*)0);
 if (!(VAR_4 = FUNC_5(VAR_3, &VAR_6, &VAR_5)))
  FUNC_1("Empty notes tree. %s", VAR_1);
 else if (!VAR_5 || VAR_6 != VAR_0) {
  FUNC_1("Note contains unusable content. "
   "Is something else using this notes tree? %s", VAR_1);
  FUNC_0(VAR_4);
 }
 FUNC_2(((void*)0));
 return VAR_4;
}

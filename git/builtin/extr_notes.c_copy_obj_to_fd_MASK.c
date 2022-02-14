
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_2 (int,char*,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_0, const struct object_id *VAR_1)
{
 unsigned long VAR_2;
 enum object_type VAR_3;
 char *VAR_4 = FUNC_1(VAR_1, &VAR_3, &VAR_2);
 if (VAR_4) {
  if (VAR_2)
   FUNC_2(VAR_0, VAR_4, VAR_2);
  FUNC_0(VAR_4);
 }
}

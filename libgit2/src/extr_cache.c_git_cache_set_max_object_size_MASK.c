
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t git_object_t ;


 size_t FUNC_0 (size_t*) ;
 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(git_object_t VAR_2, size_t VAR_3)
{
 if (VAR_2 < 0 || (size_t)VAR_2 >= FUNC_0(VAR_1)) {
  FUNC_1(VAR_0, "type out of range");
  return -1;
 }

 VAR_1[VAR_2] = VAR_3;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32_t ;
typedef int collpri_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static collpri_t *
FUNC_0(int32_t VAR_3)
{
 if ((VAR_3 < 0) || (VAR_3 > VAR_1)) {
  VAR_0;
  return (((void*)0));
 }
 return (&VAR_2[VAR_3]);
}

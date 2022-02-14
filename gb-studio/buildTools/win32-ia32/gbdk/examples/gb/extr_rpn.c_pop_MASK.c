
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int * VAR_1 ;

WORD FUNC_1()
{
  if(VAR_0 > 0)
    return VAR_1[--VAR_0];
  else
    FUNC_0("Stack empty");
  return 0;
}

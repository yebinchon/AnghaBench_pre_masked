
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileHandle_t ;
typedef int FILE ;


 int * FUNC_0 (int ) ;
 long FUNC_1 (int *) ;

long FUNC_2(fileHandle_t VAR_0)
{
 FILE *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if(VAR_1 == ((void*)0))
  return -1;
 else
  return FUNC_1(VAR_1);
}

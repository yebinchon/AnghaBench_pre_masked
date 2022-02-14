
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2(const char *VAR_2)
{
 FILE *VAR_3;

 VAR_3 = FUNC_0(VAR_2, "rb");

 if(VAR_3)
 {
  FUNC_1(VAR_3);
  return VAR_1;
 }

 return VAR_0;
}

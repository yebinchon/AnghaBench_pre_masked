
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token_t ;
typedef int source_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(source_t *VAR_2, token_t *VAR_3)
{
 if (!FUNC_0(VAR_2, VAR_3))
 {
  FUNC_1(VAR_2, "couldn't read expected token");
  return VAR_0;
 }
 else
 {
  return VAR_1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int source_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,long*,int *,int) ;
 int FUNC_1 (int *,int*,int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(source_t *VAR_4)
{
 signed long int VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(VAR_4, &VAR_6, &VAR_7);
 if (!VAR_6 || VAR_6 == VAR_1)
 {
  FUNC_3(VAR_4, "misplaced #elif");
  return VAR_2;
 }
 if (!FUNC_0(VAR_4, &VAR_5, ((void*)0), VAR_3)) return VAR_2;
 VAR_7 = (VAR_5 == 0);
 FUNC_2(VAR_4, VAR_0, VAR_7);
 return VAR_3;
}

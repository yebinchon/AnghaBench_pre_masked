
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiBox ;


 int * FUNC_0 (int ,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

uiBox *FUNC_4(void)
{
 uiBox *VAR_2;
 uiBox *VAR_3;

 VAR_2 = FUNC_1();

 VAR_3 = FUNC_0(VAR_0, "wrap");
 FUNC_2(VAR_2, FUNC_3(VAR_3), 1);
 VAR_3 = FUNC_0(VAR_1, "no wrap");
 FUNC_2(VAR_2, FUNC_3(VAR_3), 1);

 return VAR_2;
}

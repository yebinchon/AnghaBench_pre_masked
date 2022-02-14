
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiMultilineEntry ;
typedef int uiGroup ;
typedef int uiButton ;
typedef int uiBox ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (char*) ;
 int * FUNC_8 () ;

uiBox *FUNC_9(void)
{
 uiBox *VAR_1;
 uiGroup *VAR_2;
 uiBox *VAR_3;
 uiMultilineEntry *VAR_4;
 uiButton *VAR_5;

 VAR_1 = FUNC_1();

 VAR_2 = FUNC_0("Font Families");
 FUNC_3(VAR_1, FUNC_5(VAR_2), 1);

 VAR_3 = FUNC_2();
 FUNC_6(VAR_2, FUNC_5(VAR_3));

 VAR_4 = FUNC_8();
 FUNC_3(VAR_3, FUNC_5(VAR_4), 1);

 VAR_5 = FUNC_7("List Font Families");
 FUNC_4(VAR_5, VAR_0, VAR_4);
 FUNC_3(VAR_3, FUNC_5(VAR_5), 0);

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiWindow ;
typedef int uiButton ;
typedef int uiBox ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 (char*,int,int,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(uiButton *VAR_0, void *VAR_1)
{
 uiWindow *VAR_2;
 uiBox *VAR_3;

 VAR_2 = FUNC_8("Another Window", 100, 100, VAR_1 != ((void*)0));
 if (VAR_1 != ((void*)0)) {
  VAR_3 = FUNC_7();
  FUNC_1(VAR_3, FUNC_3(FUNC_6()), 0);
  FUNC_1(VAR_3, FUNC_3(FUNC_5("Button")), 0);
  FUNC_2(VAR_3, 1);
  FUNC_9(VAR_2, FUNC_3(VAR_3));
 } else
  FUNC_9(VAR_2, FUNC_3(FUNC_0()));
 FUNC_10(VAR_2, 1);
 FUNC_4(FUNC_3(VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDrawFontFamilies ;
typedef int uiButton ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(uiButton *VAR_0, void *VAR_1)
{
 uiDrawFontFamilies *VAR_2;
 char *VAR_3;
 int VAR_4, VAR_5;

 FUNC_7(FUNC_5(VAR_1), "");
 VAR_2 = FUNC_3();
 VAR_5 = FUNC_1(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2, VAR_4);
  FUNC_6(FUNC_5(VAR_1), VAR_3);
  FUNC_6(FUNC_5(VAR_1), "\n");
  FUNC_4(VAR_3);
 }
 FUNC_2(VAR_2);
}

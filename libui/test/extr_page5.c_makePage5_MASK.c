
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiWindow ;
typedef int uiLabel ;
typedef int uiButton ;
typedef int uiBox ;


 int FUNC_0 (char*,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (char*) ;
 int * FUNC_8 () ;

uiBox *FUNC_9(uiWindow *VAR_7)
{
 uiBox *VAR_8;
 uiBox *VAR_9;
 uiButton *VAR_10;
 uiLabel *VAR_11;

 VAR_4 = VAR_7;

 VAR_8 = FUNC_2();
 VAR_9 = FUNC_1(); VAR_10 = FUNC_7("Open File"); VAR_11 = FUNC_0(""); FUNC_4(VAR_10, VAR_3, VAR_11); FUNC_3(VAR_9, FUNC_5(VAR_10), 0); FUNC_3(VAR_9, FUNC_5(VAR_11), 0); FUNC_3(VAR_8, FUNC_5(VAR_9), 0);;
 VAR_9 = FUNC_1(); VAR_10 = FUNC_7("Save File"); VAR_11 = FUNC_0(""); FUNC_4(VAR_10, VAR_5, VAR_11); FUNC_3(VAR_9, FUNC_5(VAR_10), 0); FUNC_3(VAR_9, FUNC_5(VAR_11), 0); FUNC_3(VAR_8, FUNC_5(VAR_9), 0);;

 VAR_6 = FUNC_8();
 FUNC_6(VAR_6, "Title");
 VAR_0 = FUNC_8();
 FUNC_6(VAR_0, "Description");

 VAR_9 = FUNC_1();
 VAR_10 = FUNC_7("Message Box");
 FUNC_4(VAR_10, VAR_1, ((void*)0));
 FUNC_3(VAR_9, FUNC_5(VAR_10), 0);
 FUNC_3(VAR_9, FUNC_5(VAR_6), 0);
 FUNC_3(VAR_8, FUNC_5(VAR_9), 0);

 VAR_9 = FUNC_1();
 VAR_10 = FUNC_7("Error Box");
 FUNC_4(VAR_10, VAR_2, ((void*)0));
 FUNC_3(VAR_9, FUNC_5(VAR_10), 0);
 FUNC_3(VAR_9, FUNC_5(VAR_0), 0);
 FUNC_3(VAR_8, FUNC_5(VAR_9), 0);

 return VAR_8;
}

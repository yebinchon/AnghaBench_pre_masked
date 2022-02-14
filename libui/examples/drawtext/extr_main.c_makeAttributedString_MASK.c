
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiOpenTypeFeatures ;
typedef int uiAttribute ;


 int FUNC_0 (char*,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (double,double,double,double) ;
 int * FUNC_5 (double,double,double,double) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 () ;
 int * FUNC_10 (int) ;
 int * FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (int ,double,double,double,double) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int *,char,char,char,char,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_16(void)
{
 uiAttribute *VAR_9, *VAR_10;
 uiOpenTypeFeatures *VAR_11;

 VAR_0 = FUNC_3(
  "Drawing strings with libui is done with the uiAttributedString and uiDrawTextLayout objects.\n"
  "uiAttributedString lets you have a variety of attributes: ");

 VAR_9 = FUNC_6("Courier New");
 FUNC_0("font family", VAR_9, ((void*)0));
 FUNC_1(VAR_0, ", ");

 VAR_9 = FUNC_10(18);
 FUNC_0("font size", VAR_9, ((void*)0));
 FUNC_1(VAR_0, ", ");

 VAR_9 = FUNC_14(VAR_3);
 FUNC_0("font weight", VAR_9, ((void*)0));
 FUNC_1(VAR_0, ", ");

 VAR_9 = FUNC_8(VAR_1);
 FUNC_0("font italicness", VAR_9, ((void*)0));
 FUNC_1(VAR_0, ", ");

 VAR_9 = FUNC_11(VAR_2);
 FUNC_0("font stretch", VAR_9, ((void*)0));
 FUNC_1(VAR_0, ", ");

 VAR_9 = FUNC_5(0.75, 0.25, 0.5, 0.75);
 FUNC_0("text color", VAR_9, ((void*)0));
 FUNC_1(VAR_0, ", ");

 VAR_9 = FUNC_4(0.5, 0.5, 0.25, 0.5);
 FUNC_0("text background color", VAR_9, ((void*)0));
 FUNC_1(VAR_0, ", ");


 VAR_9 = FUNC_12(VAR_7);
 FUNC_0("underline style", VAR_9, ((void*)0));
 FUNC_1(VAR_0, ", ");

 FUNC_1(VAR_0, "and ");
 VAR_9 = FUNC_12(VAR_6);
 VAR_10 = FUNC_13(VAR_4, 1.0, 0.0, 0.5, 1.0);
 FUNC_0("underline color", VAR_9, VAR_10);
 FUNC_1(VAR_0, ". ");

 FUNC_1(VAR_0, "Furthermore, there are attributes allowing for ");
 VAR_9 = FUNC_12(VAR_8);
 VAR_10 = FUNC_13(VAR_5, 0, 0, 0, 0);
 FUNC_0("special underlines for indicating spelling errors", VAR_9, VAR_10);
 FUNC_1(VAR_0, " (and other types of errors) ");

 FUNC_1(VAR_0, "and control over OpenType features such as ligatures (for instance, ");
 VAR_11 = FUNC_9();
 FUNC_15(VAR_11, 'l', 'i', 'g', 'a', 0);
 VAR_9 = FUNC_7(VAR_11);
 FUNC_0("afford", VAR_9, ((void*)0));
 FUNC_1(VAR_0, " vs. ");
 FUNC_15(VAR_11, 'l', 'i', 'g', 'a', 1);
 VAR_9 = FUNC_7(VAR_11);
 FUNC_0("afford", VAR_9, ((void*)0));
 FUNC_2(VAR_11);
 FUNC_1(VAR_0, ").\n");

 FUNC_1(VAR_0, "Use the controls opposite to the text to control properties of the text.");
}

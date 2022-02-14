
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct example {char* name; int key; int mouse; int draw; int panel; } ;
struct TYPE_2__ {int Align; int * DefaultFont; int String; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct example VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_15 ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int VAR_16 ;

struct example *FUNC_12(void)
{
 VAR_10 = FUNC_9();
 VAR_16 = FUNC_11();

 FUNC_1(VAR_10, FUNC_4(VAR_16), 1);
 VAR_1 = FUNC_10("Caret information is shown here");
 FUNC_1(VAR_16, FUNC_4(VAR_1), 0);
 VAR_12 = FUNC_0(VAR_16, "Show Line Bounds (for debugging metrics)");
 VAR_16 = FUNC_11();
 FUNC_1(VAR_10, FUNC_4(VAR_16), 0);
 VAR_6 = FUNC_8();
 FUNC_5(VAR_6, VAR_2, ((void*)0));

 FUNC_1(VAR_16, FUNC_4(VAR_6), 0);
 VAR_14 = FUNC_7();

 FUNC_2(VAR_14, "Left");
 FUNC_2(VAR_14, "Center");
 FUNC_2(VAR_14, "Right");
 FUNC_3(VAR_14, VAR_3, ((void*)0));
 FUNC_1(VAR_16, FUNC_4(VAR_14), 0);

 VAR_7.name = "Hit-Testing and Grapheme Boundaries";
 VAR_7.panel = FUNC_4(VAR_10);
 VAR_7.draw = VAR_5;
 VAR_7.mouse = VAR_9;
 VAR_7.key = VAR_8;

 VAR_0 = FUNC_6(VAR_13);
 VAR_11.String = VAR_0;
 VAR_11.DefaultFont = &VAR_4;
 VAR_11.Align = VAR_15;

 return &VAR_7;
}

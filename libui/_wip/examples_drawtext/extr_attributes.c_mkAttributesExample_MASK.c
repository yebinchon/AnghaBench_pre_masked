
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct example {char* name; int * key; int * mouse; int draw; int panel; } ;
struct TYPE_2__ {int Align; int * DefaultFont; int String; } ;


 struct example VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 () ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

struct example *FUNC_7(void)
{
 VAR_6 = FUNC_6();
 VAR_8 = FUNC_0("Show Line Bounds");
 VAR_5 = FUNC_5();
 FUNC_4(VAR_5, VAR_2, ((void*)0));

 FUNC_2(VAR_6, FUNC_3(VAR_5), 0);

 VAR_0.name = "Attributed Text";
 VAR_0.panel = FUNC_3(VAR_6);
 VAR_0.draw = VAR_4;
 VAR_0.mouse = ((void*)0);
 VAR_0.key = ((void*)0);

 FUNC_1();
 VAR_7.String = VAR_1;
 VAR_7.DefaultFont = &VAR_3;
 VAR_7.Align = VAR_9;

 return &VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct example {char* name; int * key; int * mouse; int draw; int panel; } ;
struct TYPE_2__ {int Align; int * DefaultFont; int String; } ;


 int VAR_0 ;
 struct example VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

struct example *FUNC_4(void)
{
 VAR_4 = FUNC_3();
 VAR_6 = FUNC_0("Show Layout Extents");
 VAR_7 = FUNC_0("Show Line Bounds");
 VAR_8 = FUNC_0("Show Line Guides");

 VAR_1.name = "Basic Paragraph of Text";
 VAR_1.panel = FUNC_1(VAR_4);
 VAR_1.draw = VAR_3;
 VAR_1.mouse = ((void*)0);
 VAR_1.key = ((void*)0);

 VAR_0 = FUNC_2(VAR_9);
 VAR_5.String = VAR_0;
 VAR_5.DefaultFont = &VAR_2;
 VAR_5.Align = VAR_10;

 return &VAR_1;
}

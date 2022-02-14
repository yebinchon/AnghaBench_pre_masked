
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uiInitOptions ;
struct TYPE_9__ {int panel; int name; } ;
struct TYPE_8__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_2__* FUNC_2 () ;
 TYPE_2__* FUNC_3 () ;
 TYPE_2__* FUNC_4 () ;
 TYPE_2__* FUNC_5 () ;
 int VAR_11 ;
 int FUNC_6 (int *,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int (*) (int *,int *),int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char const*) ;
 char* FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (char*,int,int,int) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int ,int *) ;
 int FUNC_24 (int ,int ) ;

int FUNC_25(void)
{
 uiInitOptions VAR_14;
 const char *VAR_15;
 int VAR_16;

 VAR_4.Draw = VAR_6;
 VAR_4.MouseEvent = VAR_9;
 VAR_4.MouseCrossed = VAR_8;
 VAR_4.DragBroken = VAR_5;
 VAR_4.KeyEvent = VAR_7;

 FUNC_1(&VAR_14, 0, sizeof (uiInitOptions));
 VAR_15 = FUNC_15(&VAR_14);
 if (VAR_15 != ((void*)0)) {
  FUNC_0(VAR_13, "error initializing ui: %s\n", VAR_15);
  FUNC_14(VAR_15);
  return 1;
 }

 FUNC_21(VAR_12, ((void*)0));

 VAR_10 = FUNC_20("libui Text-Drawing Example", 640, 480, 1);
 FUNC_23(VAR_10, VAR_11, ((void*)0));

 VAR_1 = FUNC_19();
 FUNC_24(VAR_10, FUNC_11(VAR_1));

 VAR_2 = FUNC_18();
 FUNC_7(VAR_1, FUNC_11(VAR_2), 0);

 VAR_0 = FUNC_17(&VAR_4);
 FUNC_7(VAR_1, FUNC_11(VAR_0), 1);

 VAR_16 = 0;
 VAR_3[VAR_16] = FUNC_3();
 FUNC_8(VAR_2, VAR_3[VAR_16]->name);
 FUNC_12(VAR_3[VAR_16]->panel);
 FUNC_7(VAR_1, VAR_3[VAR_16]->panel, 0);
 VAR_16++;
 VAR_3[VAR_16] = FUNC_5();
 FUNC_8(VAR_2, VAR_3[VAR_16]->name);
 FUNC_12(VAR_3[VAR_16]->panel);
 FUNC_7(VAR_1, VAR_3[VAR_16]->panel, 0);
 VAR_16++;
 VAR_3[VAR_16] = FUNC_2();
 FUNC_8(VAR_2, VAR_3[VAR_16]->name);
 FUNC_12(VAR_3[VAR_16]->panel);
 FUNC_7(VAR_1, VAR_3[VAR_16]->panel, 0);
 VAR_16++;
 VAR_3[VAR_16] = FUNC_4();
 FUNC_8(VAR_2, VAR_3[VAR_16]->name);
 FUNC_12(VAR_3[VAR_16]->panel);
 FUNC_7(VAR_1, VAR_3[VAR_16]->panel, 0);
 VAR_16++;

 FUNC_10(VAR_2, 0);
 FUNC_9(VAR_2, FUNC_6, ((void*)0));

 FUNC_6(((void*)0), ((void*)0));

 FUNC_13(FUNC_11(VAR_10));
 FUNC_16();



 FUNC_22();
 return 0;
}

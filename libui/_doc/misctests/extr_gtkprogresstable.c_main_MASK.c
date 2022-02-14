
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkTreeViewColumn ;
typedef int GtkTreeIter ;
typedef int GtkCellRenderer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int *,int ,int ,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int *) ;
 int * FUNC_20 () ;
 int FUNC_21 (int *,int *,int ) ;
 int FUNC_22 (int *,int *,int ,int *,int *) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (int *,char*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

int FUNC_30(void)
{
 GtkTreeIter VAR_21;
 GtkTreeViewColumn *VAR_22;
 GtkCellRenderer *VAR_23;

 FUNC_11(((void*)0), ((void*)0));

 VAR_9 = FUNC_29(VAR_4);
 FUNC_5(VAR_9, "delete-event", FUNC_4(VAR_11), ((void*)0));

 VAR_20 = FUNC_6(VAR_2, 12);
 FUNC_10(FUNC_0(VAR_20), 12);
 FUNC_9(FUNC_0(VAR_9), VAR_20);

 VAR_7 = FUNC_6(VAR_1, 6);
 FUNC_26(VAR_7, VAR_0);
 FUNC_9(FUNC_0(VAR_20), VAR_7);

 VAR_17 = FUNC_7("Start Progress Bar");
 FUNC_5(VAR_17, "clicked", FUNC_4(VAR_12), ((void*)0));
 FUNC_9(FUNC_0(VAR_7), VAR_17);

 VAR_18 = FUNC_7("Start Table Cell Renderer");
 FUNC_5(VAR_18, "clicked", FUNC_4(VAR_13), ((void*)0));
 FUNC_9(FUNC_0(VAR_7), VAR_18);

 VAR_15 = FUNC_16();
 FUNC_9(FUNC_0(VAR_20), VAR_15);

 VAR_16 = FUNC_17(((void*)0), ((void*)0));
 FUNC_18(FUNC_1(VAR_16), VAR_3);
 FUNC_27(VAR_16, VAR_6);
 FUNC_9(FUNC_0(VAR_20), VAR_16);

 VAR_10 = FUNC_13(1, VAR_5);
 FUNC_12(VAR_10, &VAR_21);
 FUNC_14(VAR_10, &VAR_21,
  0, 0,
  -1);

 VAR_19 = FUNC_25(FUNC_2(VAR_10));
 FUNC_9(FUNC_0(VAR_16), VAR_19);

 VAR_22 = FUNC_20();
 FUNC_23(VAR_22, VAR_6);
 FUNC_24(VAR_22, "Column");
 FUNC_19(FUNC_3(VAR_19), VAR_22);

 VAR_23 = FUNC_8();
 FUNC_21(VAR_22, VAR_23, VAR_6);
 FUNC_22(VAR_22, VAR_23, VAR_14, ((void*)0), ((void*)0));

 VAR_8 = FUNC_6(VAR_1, 6);
 FUNC_26(VAR_8, VAR_0);
 FUNC_9(FUNC_0(VAR_20), VAR_8);

 FUNC_9(FUNC_0(VAR_8), FUNC_7("These buttons"));
 FUNC_9(FUNC_0(VAR_8), FUNC_7("do nothing"));
 FUNC_9(FUNC_0(VAR_8), FUNC_7("when clicked"));

 FUNC_28(VAR_9);
 FUNC_15();
 return 0;
}

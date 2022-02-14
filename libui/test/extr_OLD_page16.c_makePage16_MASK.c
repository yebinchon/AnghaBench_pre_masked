
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiTableModel ;
typedef int uiTableColumn ;
typedef int uiTable ;
typedef int uiBox ;
struct TYPE_3__ {int SetCellValue; int CellValue; int NumRows; int ColumnType; int NumColumns; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 () ;
 int VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int *,int,int) ;
 int FUNC_16 (int *,int,int) ;
 int FUNC_17 (int *,int,int) ;
 int FUNC_18 (int *,int) ;

uiBox *FUNC_19(void)
{
 uiBox *VAR_9;
 uiTableModel *VAR_10;
 uiTable *VAR_11;
 uiTableColumn *VAR_12;

 VAR_1[0] = FUNC_6(16, 16);
 FUNC_0(VAR_1[0], "andlabs_16x16test_24june2016.png");
 FUNC_0(VAR_1[0], "andlabs_32x32test_24june2016.png");
 VAR_1[1] = FUNC_6(16, 16);
 FUNC_0(VAR_1[1], "tango-icon-theme-0.8.90_16x16_x-office-spreadsheet.png");
 FUNC_0(VAR_1[1], "tango-icon-theme-0.8.90_32x32_x-office-spreadsheet.png");

 FUNC_3(VAR_8, "Part");

 FUNC_1(VAR_0, 0, 15 * sizeof (int));

 VAR_9 = FUNC_2();

 VAR_2.NumColumns = VAR_5;
 VAR_2.ColumnType = VAR_4;
 VAR_2.NumRows = VAR_6;
 VAR_2.CellValue = VAR_3;
 VAR_2.SetCellValue = VAR_7;
 VAR_10 = FUNC_8(&VAR_2);

 VAR_11 = FUNC_7(VAR_10);
 FUNC_4(VAR_9, FUNC_5(VAR_11), 1);

 FUNC_10(VAR_11, "Column 1", 0);

 VAR_12 = FUNC_9(VAR_11, "Column 2");
 FUNC_13(VAR_12, 5, 0);
 FUNC_15(VAR_12, 1, 0);
 FUNC_15(VAR_12, 2, 1);
 FUNC_17(VAR_12, 1, 4);
 FUNC_16(VAR_12, 2, 1);

 FUNC_18(VAR_11, 3);

 VAR_12 = FUNC_9(VAR_11, "Buttons");
 FUNC_12(VAR_12, 7, 0);
 FUNC_11(VAR_12, 6, 1);

 VAR_12 = FUNC_9(VAR_11, "Progress Bar");
 FUNC_14(VAR_12, 8, 0);

 return VAR_9;
}

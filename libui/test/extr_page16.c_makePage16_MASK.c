
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int RowBackgroundColorModelColumn; int ColorModelColumn; int Model; } ;
typedef TYPE_1__ uiTableTextColumnOptionalParams ;
typedef TYPE_1__ uiTableParams ;
typedef int uiTable ;
typedef int uiBox ;
struct TYPE_10__ {int SetCellValue; int CellValue; int NumRows; int ColumnType; int NumColumns; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_2 () ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;
 int * FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,char*,int,int ) ;
 int FUNC_10 (int *,char*,int,int ) ;
 int FUNC_11 (int *,char*,int,int,int ,TYPE_1__*) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *,char*,int,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;

uiBox *FUNC_14(void)
{
 uiBox *VAR_12;
 uiTable *VAR_13;
 uiTableParams VAR_14;
 uiTableTextColumnOptionalParams VAR_15;

 VAR_1[0] = FUNC_6(16, 16);
 FUNC_0(VAR_1[0], "andlabs_16x16test_24june2016.png");
 FUNC_0(VAR_1[0], "andlabs_32x32test_24june2016.png");
 VAR_1[1] = FUNC_6(16, 16);
 FUNC_0(VAR_1[1], "tango-icon-theme-0.8.90_16x16_x-office-spreadsheet.png");
 FUNC_0(VAR_1[1], "tango-icon-theme-0.8.90_32x32_x-office-spreadsheet.png");

 FUNC_3(VAR_9, "Part");

 FUNC_1(VAR_0, 0, 15 * sizeof (int));

 VAR_12 = FUNC_2();

 VAR_3.NumColumns = VAR_6;
 VAR_3.ColumnType = VAR_5;
 VAR_3.NumRows = VAR_7;
 VAR_3.CellValue = VAR_4;
 VAR_3.SetCellValue = VAR_8;
 VAR_2 = FUNC_8(&VAR_3);

 FUNC_1(&VAR_14, 0, sizeof (uiTableParams));
 VAR_14.Model = VAR_2;
 VAR_14.RowBackgroundColorModelColumn = 3;
 VAR_13 = FUNC_7(&VAR_14);
 FUNC_4(VAR_12, FUNC_5(VAR_13), 1);

 FUNC_13(VAR_13, "Column 1",
  0, VAR_11, ((void*)0));

 FUNC_1(&VAR_15, 0, sizeof (uiTableTextColumnOptionalParams));
 VAR_15.ColorModelColumn = 4;
 FUNC_11(VAR_13, "Column 2",
  5,
  1, VAR_11, &VAR_15);
 FUNC_13(VAR_13, "Editable",
  2, VAR_10, ((void*)0));

 FUNC_10(VAR_13, "Checkboxes",
  7, VAR_10);
 FUNC_9(VAR_13, "Buttons",
  6, VAR_10);

 FUNC_12(VAR_13, "Progress Bar",
  8);

 return VAR_12;
}

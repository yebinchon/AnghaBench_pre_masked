
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uiTableModel ;
struct TYPE_5__ {char* Name; int Mutable; size_t ValueColumn; int Type; } ;
typedef TYPE_1__ uiTableColumnParams ;
typedef int uiTable ;
typedef int uiBox ;
typedef size_t intmax_t ;
struct TYPE_6__ {int SetCellValue; int CellValue; int NumRows; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int * FUNC_0 () ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int * FUNC_4 (size_t,int *,TYPE_3__*,int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;

uiBox *FUNC_7(void)
{
 uiBox *VAR_6;
 uiTable *VAR_7;
 uiTableModel *VAR_8;
 uiTableColumnParams VAR_9;
 intmax_t VAR_10;

 VAR_6 = FUNC_0();

 VAR_7 = FUNC_3();
 FUNC_1(VAR_6, FUNC_2(VAR_7), 1);

 VAR_5.NumRows = VAR_2;
 VAR_5.CellValue = VAR_1;
 VAR_5.SetCellValue = VAR_3;
 VAR_8 = FUNC_4(VAR_4, VAR_0, &VAR_5, ((void*)0));
 FUNC_6(VAR_7, VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9.Name = "Column";
  VAR_9.Type = VAR_0[VAR_10];
  VAR_9.Mutable = VAR_10 % 2 == 1;
  VAR_9.ValueColumn = VAR_10;
  FUNC_5(VAR_7, &VAR_9);
 }

 return VAR_6;
}

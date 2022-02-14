
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parts; int c; } ;
typedef TYPE_1__ uiTableColumn ;
struct tablePart {int * r; } ;
typedef int GtkCellRenderer ;


 int VAR_0 ;
 int FUNC_0 (int ,struct tablePart*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *,int ,struct tablePart*,int *) ;

__attribute__((used)) static void FUNC_3(uiTableColumn *VAR_1, struct tablePart *VAR_2, GtkCellRenderer *VAR_3, int VAR_4)
{
 VAR_2->r = VAR_3;
 FUNC_1(VAR_1->c, VAR_2->r, VAR_4 != 0);
 FUNC_2(VAR_1->c, VAR_2->r, VAR_0, VAR_2, ((void*)0));
 FUNC_0(VAR_1->parts, VAR_2);
}

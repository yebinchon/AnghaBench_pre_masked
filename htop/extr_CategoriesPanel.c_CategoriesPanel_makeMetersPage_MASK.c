
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * columns; } ;
struct TYPE_7__ {int scr; int pl; TYPE_5__* header; int settings; } ;
struct TYPE_6__ {struct TYPE_6__* leftNeighbor; struct TYPE_6__* rightNeighbor; } ;
typedef int Panel ;
typedef TYPE_1__ MetersPanel ;
typedef TYPE_2__ CategoriesPanel ;


 scalar_t__ FUNC_0 (int ,TYPE_5__*,int *,int *,int ,int ) ;
 TYPE_1__* FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int *,int) ;

void FUNC_3(CategoriesPanel* VAR_0) {
   MetersPanel* VAR_1 = FUNC_1(VAR_0->settings, "Left column", VAR_0->header->columns[0], VAR_0->scr);
   MetersPanel* VAR_2 = FUNC_1(VAR_0->settings, "Right column", VAR_0->header->columns[1], VAR_0->scr);
   VAR_1->rightNeighbor = VAR_2;
   VAR_2->leftNeighbor = VAR_1;
   Panel* VAR_3 = (Panel*) FUNC_0(VAR_0->settings, VAR_0->header, (Panel*) VAR_1, (Panel*) VAR_2, VAR_0->scr, VAR_0->pl);
   FUNC_2(VAR_0->scr, (Panel*) VAR_1, 20);
   FUNC_2(VAR_0->scr, (Panel*) VAR_2, 20);
   FUNC_2(VAR_0->scr, VAR_3, -1);
}

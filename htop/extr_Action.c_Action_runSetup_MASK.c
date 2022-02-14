
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int height; } ;
struct TYPE_10__ {scalar_t__ changed; } ;
typedef TYPE_1__ Settings ;
typedef int ScreenManager ;
typedef int ProcessList ;
typedef int Panel ;
typedef TYPE_2__ Header ;
typedef int CategoriesPanel ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,TYPE_1__*,TYPE_2__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ,int,int ,TYPE_2__ const*,TYPE_1__*,int) ;
 int FUNC_6 (int *,int **,int*) ;

__attribute__((used)) static void FUNC_7(Settings* VAR_1, const Header* VAR_2, ProcessList* VAR_3) {
   ScreenManager* VAR_4 = FUNC_5(0, VAR_2->height, 0, -1, VAR_0, VAR_2, VAR_1, 1);
   CategoriesPanel* VAR_5 = FUNC_1(VAR_4, VAR_1, (Header*) VAR_2, VAR_3);
   FUNC_3(VAR_4, (Panel*) VAR_5, 16);
   FUNC_0(VAR_5);
   Panel* VAR_6;
   int VAR_7;
   FUNC_6(VAR_4, &VAR_6, &VAR_7);
   FUNC_4(VAR_4);
   if (VAR_1->changed) {
      FUNC_2(VAR_2);
   }
}

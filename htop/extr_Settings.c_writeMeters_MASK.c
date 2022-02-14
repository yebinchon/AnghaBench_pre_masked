
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* columns; } ;
struct TYPE_4__ {int len; int * names; } ;
typedef TYPE_2__ Settings ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(Settings* VAR_0, FILE* VAR_1, int VAR_2) {
   const char* VAR_3 = "";
   for (int VAR_4 = 0; VAR_4 < VAR_0->columns[VAR_2].len; VAR_4++) {
      FUNC_0(VAR_1, "%s%s", VAR_3, VAR_0->columns[VAR_2].names[VAR_4]);
      VAR_3 = " ";
   }
   FUNC_0(VAR_1, "\n");
}

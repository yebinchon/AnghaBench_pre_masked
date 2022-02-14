
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jv ;
struct TYPE_4__ {scalar_t__ op; char* symbol; int nformals; struct TYPE_4__* next; } ;
typedef TYPE_1__ inst ;
struct TYPE_5__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,char*,int ) ;

jv FUNC_5(block VAR_2, int VAR_3) {
  jv VAR_4 = FUNC_2();
  for (inst *VAR_5 = VAR_2.first; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
    if (VAR_5->op == VAR_0 || VAR_5->op == VAR_1) {
      if (VAR_5->symbol != ((void*)0) && (!VAR_3 || VAR_5->symbol[0] != '_')) {
        VAR_4 = FUNC_3(VAR_4, FUNC_4("%s/%i", VAR_5->symbol, VAR_5->nformals), FUNC_1());
      }
    }
  }
  return FUNC_0(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct locfile {int dummy; } ;
typedef int jv ;
struct TYPE_8__ {int * bc; int nomem_handler_data; int nomem_handler; } ;
typedef TYPE_1__ jq_state ;
typedef int block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int **,struct locfile*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int,char*) ;
 int FUNC_11 (TYPE_1__*,struct locfile*,int *) ;
 int FUNC_12 (struct locfile*) ;
 struct locfile* FUNC_13 (TYPE_1__*,char*,char const*,int ) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (char const*) ;

int FUNC_16(jq_state *VAR_2, const char* VAR_3, jv VAR_4) {
  FUNC_9(VAR_2->nomem_handler, VAR_2->nomem_handler_data);
  FUNC_1(FUNC_8(VAR_4) == VAR_0 || FUNC_8(VAR_4) == VAR_1);
  struct locfile* VAR_5;
  VAR_5 = FUNC_13(VAR_2, "<top-level>", VAR_3, FUNC_15(VAR_3));
  block VAR_6;
  FUNC_6(VAR_2);
  if (VAR_2->bc) {
    FUNC_4(VAR_2->bc);
    VAR_2->bc = 0;
  }
  int VAR_7 = FUNC_11(VAR_2, VAR_5, &VAR_6);
  if (VAR_7 == 0) {
    VAR_7 = FUNC_3(VAR_2, &VAR_6);
    if (VAR_7 == 0) {
      VAR_7 = FUNC_2(VAR_6, &VAR_2->bc, VAR_5, VAR_4 = FUNC_0(VAR_4));
    }
  } else
    FUNC_7(VAR_4);
  if (VAR_7)
    FUNC_5(VAR_2, FUNC_10("jq: %d compile %s", VAR_7, VAR_7 > 1 ? "errors" : "error"));
  if (VAR_2->bc)
    VAR_2->bc = FUNC_14(VAR_2->bc);
  FUNC_12(VAR_5);
  return VAR_2->bc != ((void*)0);
}

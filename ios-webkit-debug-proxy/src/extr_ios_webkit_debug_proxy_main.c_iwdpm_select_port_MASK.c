
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* iwdpm_t ;
typedef TYPE_2__* iwdp_t ;
typedef int iwdp_status ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int * pc; int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char const*,int*,int*,int*) ;
 int FUNC_6 (int ) ;

iwdp_status FUNC_7(iwdp_t VAR_2, const char *VAR_3,
    int *VAR_4, int *VAR_5, int *VAR_6) {
  iwdpm_t VAR_7 = (iwdpm_t)VAR_2->state;
  int VAR_8 = 0;

  int VAR_9 = 0;
  if (!VAR_7->pc) {
    VAR_7->pc = FUNC_4();
    if (FUNC_1(VAR_7->pc, VAR_7->config, FUNC_6(VAR_7->config))) {
      FUNC_2(VAR_7->pc);
      FUNC_0(VAR_7->pc, VAR_7->config);
      VAR_9 = 1;
    }
  }
  VAR_8 = FUNC_5(VAR_7->pc, VAR_3, VAR_4, VAR_5,VAR_6);
  if (VAR_9) {
    FUNC_3(VAR_7->pc);
    VAR_7->pc = ((void*)0);
  }
  return (VAR_8 ? VAR_0 : VAR_1);
}

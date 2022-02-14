
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_result_enable {scalar_t__ type; int random_tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2 (struct lev_copyexec_result_enable *VAR_2) {
  if (FUNC_0 (VAR_2->type == VAR_0 ? "LEV_COPYEXEC_RESULT_ENABLE": "LEV_COPYEXEC_RESULT_DISABLE") ) {
    return;
  }
  FUNC_1 (VAR_1, "0x%x\n", VAR_2->random_tag);
}

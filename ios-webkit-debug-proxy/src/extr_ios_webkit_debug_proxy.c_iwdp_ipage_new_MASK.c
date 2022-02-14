
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwdp_ipage_struct {int dummy; } ;
typedef scalar_t__ iwdp_ipage_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

iwdp_ipage_t FUNC_2() {
  iwdp_ipage_t VAR_0 = (iwdp_ipage_t)FUNC_0(sizeof(struct iwdp_ipage_struct));
  if (VAR_0) {
    FUNC_1(VAR_0, 0, sizeof(struct iwdp_ipage_struct));
  }
  return VAR_0;
}

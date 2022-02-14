
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_struct {int dummy; } ;
typedef scalar_t__ cb_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

cb_t FUNC_2() {
  cb_t VAR_0 = (cb_t)FUNC_0(sizeof(struct cb_struct));
  if (VAR_0) {
    FUNC_1(VAR_0, 0, sizeof(struct cb_struct));
  }
  return VAR_0;
}

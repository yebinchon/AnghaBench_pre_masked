
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc_struct {int dummy; } ;
typedef scalar_t__ pc_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

pc_t FUNC_2() {
  pc_t VAR_0 = FUNC_0(sizeof(struct pc_struct));
  if (VAR_0) {
    FUNC_1(VAR_0, 0, sizeof(struct pc_struct));
  }
  return VAR_0;
}

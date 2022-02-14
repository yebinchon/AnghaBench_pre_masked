
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_adapter {scalar_t__ monitor_pin_cnt; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cec_adapter*,int ,int ) ;

void FUNC_2(struct cec_adapter *VAR_1)
{
 VAR_1->monitor_pin_cnt--;
 if (VAR_1->monitor_pin_cnt == 0)
  FUNC_0(FUNC_1(VAR_1, VAR_0, 0));
}

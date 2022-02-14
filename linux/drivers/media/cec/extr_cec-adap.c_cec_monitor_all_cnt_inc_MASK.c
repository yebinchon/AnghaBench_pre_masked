
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_adapter {scalar_t__ monitor_all_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct cec_adapter*,int ,int) ;

int FUNC_1(struct cec_adapter *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->monitor_all_cnt == 0)
  VAR_2 = FUNC_0(VAR_1, VAR_0, 1);
 if (VAR_2 == 0)
  VAR_1->monitor_all_cnt++;
 return VAR_2;
}

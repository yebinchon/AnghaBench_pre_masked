
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g760a_data {int fan_sta; int update_lock; int fan_div; int clk; int act_cnt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct g760a_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct g760a_data *VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5 = 0;

 FUNC_1(&VAR_4->update_lock);
 if (!(VAR_4->fan_sta & VAR_0))
  VAR_5 = FUNC_3(VAR_4->act_cnt, VAR_4->clk, VAR_4->fan_div);
 FUNC_2(&VAR_4->update_lock);

 return FUNC_4(VAR_3, "%d\n", VAR_5);
}

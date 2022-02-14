
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g762_data {int update_lock; int fan_cmd2; int fan_cmd1; int clk_freq; int set_cnt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct g762_data*) ;
 int FUNC_4 (struct g762_data*) ;
 struct g762_data* FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct g762_data *VAR_3 = FUNC_5(VAR_0);
 unsigned int VAR_4;

 if (FUNC_3(VAR_3))
  return FUNC_4(VAR_3);

 FUNC_6(&VAR_3->update_lock);
 VAR_4 = FUNC_8(VAR_3->set_cnt, VAR_3->clk_freq,
      FUNC_2(VAR_3->fan_cmd1),
      FUNC_0(VAR_3->fan_cmd1),
      FUNC_1(VAR_3->fan_cmd2));
 FUNC_7(&VAR_3->update_lock);

 return FUNC_9(VAR_2, "%u\n", VAR_4);
}

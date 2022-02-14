
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g762_data {int valid; int update_lock; int set_cnt; int client; int fan_cmd2; int fan_cmd1; int clk_freq; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct g762_data*) ;
 int FUNC_4 (struct g762_data*) ;
 int FUNC_5 (unsigned long,int ,int ,int ,int ) ;
 struct g762_data* FUNC_6 (struct device*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_1, unsigned long VAR_2)
{
 struct g762_data *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;

 if (FUNC_3(VAR_3))
  return FUNC_4(VAR_3);

 FUNC_8(&VAR_3->update_lock);
 VAR_3->set_cnt = FUNC_5(VAR_2, VAR_3->clk_freq,
         FUNC_2(VAR_3->fan_cmd1),
         FUNC_0(VAR_3->fan_cmd1),
         FUNC_1(VAR_3->fan_cmd2));
 VAR_4 = FUNC_7(VAR_3->client, VAR_0,
     VAR_3->set_cnt);
 VAR_3->valid = 0;
 FUNC_9(&VAR_3->update_lock);

 return VAR_4;
}

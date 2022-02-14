
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g762_data {int valid; int update_lock; int fan_cmd2; int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct g762_data*) ;
 int FUNC_1 (struct g762_data*) ;
 struct g762_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, unsigned long VAR_5)
{
 struct g762_data *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_4(&VAR_6->update_lock);
 switch (VAR_5) {
 case 0:
  VAR_6->fan_cmd2 &= ~VAR_2;
  VAR_6->fan_cmd2 &= ~VAR_3;
  break;
 case 1:
  VAR_6->fan_cmd2 |= VAR_2;
  VAR_6->fan_cmd2 &= ~VAR_3;
  break;
 case 2:
  VAR_6->fan_cmd2 &= ~VAR_2;
  VAR_6->fan_cmd2 |= VAR_3;
  break;
 case 3:
  VAR_6->fan_cmd2 |= VAR_2;
  VAR_6->fan_cmd2 |= VAR_3;
  break;
 default:
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_7 = FUNC_3(VAR_6->client, VAR_1,
     VAR_6->fan_cmd2);
 VAR_6->valid = 0;
 out:
 FUNC_5(&VAR_6->update_lock);

 return VAR_7;
}

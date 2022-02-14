
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g762_data {int valid; int update_lock; int fan_cmd1; int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct g762_data*) ;
 int FUNC_1 (struct g762_data*) ;
 struct g762_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, unsigned long VAR_4)
{
 struct g762_data *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_4(&VAR_5->update_lock);
 switch (VAR_4) {
 case 128:
  VAR_5->fan_cmd1 &= ~VAR_2;
  break;
 case 129:
  VAR_5->fan_cmd1 |= VAR_2;
  break;
 default:
  VAR_6 = -VAR_0;
  goto out;
 }
 VAR_6 = FUNC_3(VAR_5->client, VAR_1,
     VAR_5->fan_cmd1);
 VAR_5->valid = 0;
 out:
 FUNC_5(&VAR_5->update_lock);

 return VAR_6;
}

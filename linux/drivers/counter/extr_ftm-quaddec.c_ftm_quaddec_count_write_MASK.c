
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ftm_quaddec {TYPE_1__* pdev; } ;
struct counter_device {struct ftm_quaddec* priv; } ;
struct counter_count_write_value {int dummy; } ;
struct counter_count {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,struct counter_count_write_value*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ftm_quaddec* const) ;

__attribute__((used)) static int FUNC_3(struct counter_device *VAR_2,
       struct counter_count *VAR_3,
       struct counter_count_write_value *VAR_4)
{
 struct ftm_quaddec *const VAR_5 = VAR_2->priv;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(&VAR_6, VAR_0, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 != 0) {
  FUNC_1(&VAR_5->pdev->dev, "Can only accept '0' as new counter value\n");
  return -VAR_1;
 }

 FUNC_2(VAR_5);

 return 0;
}

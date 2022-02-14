
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct stk3310_data {int lock; TYPE_1__* client; int reg_flag_psint; int timestamp; int reg_flag_nf; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 struct stk3310_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned int*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 u64 VAR_9;

 struct iio_dev *VAR_10 = VAR_6;
 struct stk3310_data *VAR_11 = FUNC_2(VAR_10);


 FUNC_4(&VAR_11->lock);
 VAR_7 = FUNC_6(VAR_11->reg_flag_nf, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_11->client->dev, "register read failed\n");
  FUNC_5(&VAR_11->lock);
  return VAR_7;
 }
 VAR_9 = FUNC_0(VAR_3, 1,
         VAR_2,
         (VAR_8 ? VAR_0 :
         VAR_1));
 FUNC_3(VAR_10, VAR_9, VAR_11->timestamp);


 VAR_7 = FUNC_7(VAR_11->reg_flag_psint, 0);
 if (VAR_7 < 0)
  FUNC_1(&VAR_11->client->dev, "failed to reset interrupts\n");
 FUNC_5(&VAR_11->lock);

 return VAR_4;
}

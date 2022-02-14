
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vl6180_data {int lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int drdy_mask; int value_reg; scalar_t__ word; int start_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct vl6180_data *VAR_8, int VAR_9)
{
 struct i2c_client *VAR_10 = VAR_8->client;
 int VAR_11 = 20, VAR_12;
 u16 VAR_13;

 FUNC_1(&VAR_8->lock);

 VAR_12 = FUNC_5(VAR_10,
  VAR_7[VAR_9].start_reg, VAR_6);
 if (VAR_12 < 0)
  goto fail;

 while (VAR_11--) {
  VAR_12 = FUNC_3(VAR_10, VAR_5);
  if (VAR_12 < 0)
   goto fail;

  if (VAR_12 & VAR_7[VAR_9].drdy_mask)
   break;
  FUNC_0(20);
 }

 if (VAR_11 < 0) {
  VAR_12 = -VAR_0;
  goto fail;
 }


 VAR_12 = VAR_7[VAR_9].word ?
  FUNC_4(VAR_10, VAR_7[VAR_9].value_reg) :
  FUNC_3(VAR_10, VAR_7[VAR_9].value_reg);
 if (VAR_12 < 0)
  goto fail;
 VAR_13 = VAR_12;


 VAR_12 = FUNC_5(VAR_10, VAR_4,
  VAR_2 | VAR_1 | VAR_3);
 if (VAR_12 < 0)
  goto fail;

 VAR_12 = VAR_13;

fail:
 FUNC_2(&VAR_8->lock);

 return VAR_12;
}

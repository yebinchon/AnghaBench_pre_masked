
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int len; unsigned int* buf; int flags; int addr; } ;
struct i2c_adapter {int dev; } ;
struct at91_twi_dev {int use_alt_cmd; scalar_t__ buf_len; unsigned int* buf; int recv_len_abort; int dev; struct i2c_msg* msg; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ has_alt_cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct at91_twi_dev*) ;
 int FUNC_2 (struct at91_twi_dev*,int ,int) ;
 int FUNC_3 (int *,char*,int) ;
 struct at91_twi_dev* FUNC_4 (struct i2c_adapter*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_11, struct i2c_msg *VAR_12, int VAR_13)
{
 struct at91_twi_dev *VAR_14 = FUNC_4(VAR_11);
 int VAR_15;
 unsigned VAR_16 = 0;
 struct i2c_msg *VAR_17 = VAR_12;
 bool VAR_18;

 FUNC_3(&VAR_11->dev, "at91_xfer: processing %d messages:\n", VAR_13);

 VAR_15 = FUNC_5(VAR_14->dev);
 if (VAR_15 < 0)
  goto out;

 if (VAR_13 == 2) {
  int VAR_19 = 0;
  int VAR_20;


  VAR_17 = &VAR_12[1];
  for (VAR_20 = 0; VAR_20 < VAR_12->len; ++VAR_20) {
   const unsigned VAR_21 = VAR_12->buf[VAR_12->len - 1 - VAR_20];

   VAR_19 |= VAR_21 << (8 * VAR_20);
   VAR_16 += VAR_7;
  }
  FUNC_2(VAR_14, VAR_6, VAR_19);
 }

 VAR_14->use_alt_cmd = 0;
 VAR_18 = (VAR_17->flags & VAR_10);
 if (VAR_14->pdata->has_alt_cmd) {
  if (VAR_17->len > 0 &&
      VAR_17->len < VAR_0) {
   FUNC_2(VAR_14, VAR_5, VAR_2);
   FUNC_2(VAR_14, VAR_3,
           FUNC_0(VAR_17->len) |
           ((VAR_18) ? VAR_4 : 0));
   VAR_14->use_alt_cmd = 1;
  } else {
   FUNC_2(VAR_14, VAR_5, VAR_1);
  }
 }

 FUNC_2(VAR_14, VAR_8,
         (VAR_17->addr << 16) |
         VAR_16 |
         ((!VAR_14->use_alt_cmd && VAR_18) ? VAR_9 : 0));

 VAR_14->buf_len = VAR_17->len;
 VAR_14->buf = VAR_17->buf;
 VAR_14->msg = VAR_17;
 VAR_14->recv_len_abort = 0;

 VAR_15 = FUNC_1(VAR_14);

 VAR_15 = (VAR_15 < 0) ? VAR_15 : VAR_13;
out:
 FUNC_6(VAR_14->dev);
 FUNC_7(VAR_14->dev);

 return VAR_15;
}

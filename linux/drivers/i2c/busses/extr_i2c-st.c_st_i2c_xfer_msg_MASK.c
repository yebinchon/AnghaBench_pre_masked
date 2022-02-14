
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int timeout; } ;
struct st_i2c_client {int addr; int result; int stop; scalar_t__ xfered; int count; int buf; } ;
struct st_i2c_dev {scalar_t__ base; int dev; TYPE_1__ adap; int complete; struct st_i2c_client client; } ;
struct i2c_msg {int len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct i2c_msg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct st_i2c_dev*) ;
 int FUNC_6 (struct st_i2c_dev*) ;
 int FUNC_7 (struct st_i2c_dev*,int) ;
 unsigned long FUNC_8 (int *,int ) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct st_i2c_dev *VAR_20, struct i2c_msg *VAR_21,
       bool VAR_22, bool VAR_23)
{
 struct st_i2c_client *VAR_24 = &VAR_20->client;
 u32 VAR_25, VAR_26, VAR_27;
 unsigned long VAR_28;
 int VAR_29;

 VAR_24->addr = FUNC_1(VAR_21);
 VAR_24->buf = VAR_21->buf;
 VAR_24->count = VAR_21->len;
 VAR_24->xfered = 0;
 VAR_24->result = 0;
 VAR_24->stop = VAR_23;

 FUNC_2(&VAR_20->complete);

 VAR_25 = VAR_6 | VAR_9 | VAR_7 | VAR_8;
 FUNC_4(VAR_20->base + VAR_5, VAR_25);

 VAR_26 = VAR_15;
 if (VAR_24->addr & VAR_1)
  VAR_26 |= VAR_11;
 FUNC_4(VAR_20->base + VAR_10, VAR_26);


 FUNC_7(VAR_20, VAR_24->addr);


 if (!(VAR_24->addr & VAR_1))
  FUNC_6(VAR_20);

 VAR_27 = VAR_18 | VAR_19 | VAR_17;
 FUNC_9(VAR_27, VAR_20->base + VAR_16);

 if (VAR_22) {
  VAR_29 = FUNC_5(VAR_20);
  if (VAR_29)
   return VAR_29;

  FUNC_4(VAR_20->base + VAR_10, VAR_14);
 }

 VAR_28 = FUNC_8(&VAR_20->complete,
   VAR_20->adap.timeout);
 VAR_29 = VAR_24->result;

 if (!VAR_28) {
  FUNC_0(VAR_20->dev, "Write to slave 0x%x timed out\n",
    VAR_24->addr);
  VAR_29 = -VAR_0;
 }

 VAR_26 = VAR_13 | VAR_12;
 FUNC_3(VAR_20->base + VAR_10, VAR_26);

 FUNC_9(VAR_4 | VAR_3,
   VAR_20->base + VAR_2);

 return VAR_29;
}

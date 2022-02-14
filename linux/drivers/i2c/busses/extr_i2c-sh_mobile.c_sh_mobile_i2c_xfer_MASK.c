
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int send_stop; int stop_after_dma; int sr; scalar_t__ dma_direction; int dev; int msg; int dma_buf; int wait; } ;
struct i2c_msg {int flags; } ;
struct i2c_adapter {int timeout; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 struct sh_mobile_i2c_data* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct sh_mobile_i2c_data*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct sh_mobile_i2c_data*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sh_mobile_i2c_data*) ;
 int FUNC_8 (struct sh_mobile_i2c_data*) ;
 int FUNC_9 (struct sh_mobile_i2c_data*) ;
 int FUNC_10 (struct sh_mobile_i2c_data*,struct i2c_msg*,int) ;
 long FUNC_11 (int ,int,int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_adapter *VAR_8,
         struct i2c_msg *VAR_9,
         int VAR_10)
{
 struct sh_mobile_i2c_data *VAR_11 = FUNC_1(VAR_8);
 struct i2c_msg *VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 long VAR_15;


 FUNC_5(VAR_11->dev);


 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  bool VAR_16 = VAR_11->send_stop || !VAR_14;
  VAR_12 = &VAR_9[VAR_14];
  VAR_11->send_stop = VAR_14 == VAR_10 - 1 || VAR_12->flags & VAR_2;
  VAR_11->stop_after_dma = 0;

  FUNC_10(VAR_11, VAR_12, VAR_16);

  if (VAR_16)
   FUNC_2(VAR_11, VAR_6);


  VAR_15 = FUNC_11(VAR_11->wait,
           VAR_11->sr & (VAR_5 | VAR_7),
           VAR_8->timeout);


  FUNC_3(VAR_11->dma_buf, VAR_11->msg, VAR_11->stop_after_dma);

  if (!VAR_15) {
   FUNC_0(VAR_11->dev, "Transfer request timed out\n");
   if (VAR_11->dma_direction != VAR_0)
    FUNC_9(VAR_11);

   VAR_13 = -VAR_1;
   break;
  }

  if (VAR_11->send_stop)
   VAR_13 = FUNC_7(VAR_11);
  else
   VAR_13 = FUNC_8(VAR_11);
  if (VAR_13 < 0)
   break;
 }


 FUNC_4(VAR_11, VAR_3, VAR_4);


 FUNC_6(VAR_11->dev);

 return VAR_13 ?: VAR_10;
}

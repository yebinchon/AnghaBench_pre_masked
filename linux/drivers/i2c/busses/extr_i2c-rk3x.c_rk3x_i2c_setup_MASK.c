
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk3x_i2c {int addr; int busy; scalar_t__ error; scalar_t__ processed; int state; struct i2c_msg* msg; void* mode; int dev; } ;
struct i2c_msg {int addr; int len; int flags; int* buf; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct rk3x_i2c*,int,int ) ;
 int FUNC_3 (struct rk3x_i2c*) ;

__attribute__((used)) static int FUNC_4(struct rk3x_i2c *VAR_6, struct i2c_msg *VAR_7, int VAR_8)
{
 u32 VAR_9 = (VAR_7[0].addr & 0x7f) << 1;
 int VAR_10 = 0;
 if (VAR_8 >= 2 && VAR_7[0].len < 4 &&
     !(VAR_7[0].flags & VAR_0) && (VAR_7[1].flags & VAR_0)) {
  u32 VAR_11 = 0;
  int VAR_12;

  FUNC_1(VAR_6->dev, "Combined write/read from addr 0x%x\n",
   VAR_9 >> 1);


  for (VAR_12 = 0; VAR_12 < VAR_7[0].len; ++VAR_12) {
   VAR_11 |= VAR_7[0].buf[VAR_12] << (VAR_12 * 8);
   VAR_11 |= FUNC_0(VAR_12);
  }


  VAR_6->msg = &VAR_7[1];

  VAR_6->mode = VAR_1;

  FUNC_2(VAR_6, VAR_9 | FUNC_0(0), VAR_3);
  FUNC_2(VAR_6, VAR_11, VAR_4);

  VAR_10 = 2;
 } else {





  if (VAR_7[0].flags & VAR_0) {
   VAR_9 |= 1;





   VAR_6->mode = VAR_1;
   FUNC_2(VAR_6, VAR_9 | FUNC_0(0),
       VAR_3);
   FUNC_2(VAR_6, 0, VAR_4);
  } else {
   VAR_6->mode = VAR_2;
  }

  VAR_6->msg = &VAR_7[0];

  VAR_10 = 1;
 }

 VAR_6->addr = VAR_7[0].addr;
 VAR_6->busy = 1;
 VAR_6->state = VAR_5;
 VAR_6->processed = 0;
 VAR_6->error = 0;

 FUNC_3(VAR_6);

 return VAR_10;
}

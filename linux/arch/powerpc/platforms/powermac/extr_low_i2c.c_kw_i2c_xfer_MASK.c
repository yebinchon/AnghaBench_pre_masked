
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct pmac_i2c_host_kw {int speed; int* data; int len; scalar_t__ state; int result; int rw; int lock; int complete; TYPE_1__ timeout_timer; int polled; scalar_t__ irq; } ;
struct pmac_i2c_bus {int mode; int channel; int polled; struct pmac_i2c_host_kw* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct pmac_i2c_host_kw*,int) ;
 int FUNC_2 (struct pmac_i2c_host_kw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct pmac_i2c_bus *VAR_18, u8 VAR_19, int VAR_20,
         u32 VAR_21, u8 *VAR_22, int VAR_23)
{
 struct pmac_i2c_host_kw *VAR_24 = VAR_18->hostdata;
 u8 VAR_25 = VAR_24->speed;
 int VAR_26 = VAR_24->irq && !VAR_18->polled;


 switch(VAR_18->mode) {
 case 130:
  return -VAR_0;
 case 129:
  VAR_25 |= VAR_5;
  if (VAR_20 != 0)
   return -VAR_0;
  break;
 case 128:
  VAR_25 |= VAR_6;
  if (VAR_20 != 1)
   return -VAR_0;
  break;
 case 131:
  VAR_25 |= VAR_3;
  if (VAR_20 != 1)
   return -VAR_0;
  break;
 }


 FUNC_4(VAR_12, FUNC_3(VAR_12));
 FUNC_4(VAR_13, VAR_25 | (VAR_18->channel << 4));
 FUNC_4(VAR_14, 0);




 FUNC_4(VAR_9, VAR_19 & 0xff);


 if ((VAR_25 & VAR_4) == VAR_6
     || (VAR_25 & VAR_4) == VAR_3)
  FUNC_4(VAR_15, VAR_21);


 VAR_24->data = VAR_22;
 VAR_24->len = VAR_23;
 VAR_24->state = VAR_16;
 VAR_24->result = 0;
 VAR_24->rw = (VAR_19 & 1);
 VAR_24->polled = VAR_18->polled;




 if (VAR_26) {

  FUNC_5(&VAR_24->complete);

  FUNC_4(VAR_12, FUNC_3(VAR_12));

  VAR_24->timeout_timer.expires = VAR_8 + VAR_7;
  FUNC_0(&VAR_24->timeout_timer);

  FUNC_4(VAR_11, VAR_2);
 }


 FUNC_4(VAR_10, VAR_1);


 if (VAR_26)
  FUNC_8(&VAR_24->complete);
 else {
  while(VAR_24->state != VAR_17) {
   unsigned long VAR_27;

   u8 VAR_28 = FUNC_2(VAR_24);
   FUNC_6(&VAR_24->lock, VAR_27);
   FUNC_1(VAR_24, VAR_28);
   FUNC_7(&VAR_24->lock, VAR_27);
  }
 }


 FUNC_4(VAR_11, 0);

 return VAR_24->result;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct jz4780_i2c {int stop_hold; int is_write; unsigned char* wbuf; int wt_len; TYPE_1__ adap; int trans_waitq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned short VAR_12 ;
 int FUNC_0 (int *,char*) ;
 unsigned short FUNC_1 (struct jz4780_i2c*,int ) ;
 int FUNC_2 (struct jz4780_i2c*,unsigned short) ;
 int FUNC_3 (struct jz4780_i2c*,int ,unsigned short) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;
 long FUNC_8 (int *,int ) ;

__attribute__((used)) static inline int FUNC_9(struct jz4780_i2c *VAR_13,
     unsigned char *VAR_14, int VAR_15,
     int VAR_16, int VAR_17)
{
 int VAR_18 = 0;
 int VAR_19 = VAR_9 * (VAR_15 + 5);
 long VAR_20;
 unsigned short VAR_21;
 unsigned long VAR_22;

 FUNC_5(&VAR_13->lock, VAR_22);

 if (VAR_17 < (VAR_16 - 1))
  VAR_13->stop_hold = 1;
 else
  VAR_13->stop_hold = 0;

 VAR_13->is_write = 1;
 VAR_13->wbuf = VAR_14;
 VAR_13->wt_len = VAR_15;

 FUNC_3(VAR_13, VAR_11, VAR_12);

 FUNC_3(VAR_13, VAR_3, VAR_5
     | VAR_4);

 VAR_21 = FUNC_1(VAR_13, VAR_1);
 VAR_21 |= VAR_2;
 FUNC_3(VAR_13, VAR_1, VAR_21);

 FUNC_6(&VAR_13->lock, VAR_22);

 VAR_20 = FUNC_8(&VAR_13->trans_waitq,
           FUNC_4(VAR_19));
 if (VAR_20 && !VAR_13->stop_hold) {
  unsigned short VAR_23;
  int VAR_24;

  VAR_20 = VAR_9 * 100;
  for (; VAR_20 > 0; VAR_20--) {
   VAR_23 = FUNC_1(VAR_13, VAR_6);

   VAR_24 = (VAR_23 & VAR_7) ||
    !(VAR_23 & VAR_8);
   if (!VAR_24)
    break;
   FUNC_7(10);
  }
 }

 if (!VAR_20) {
  FUNC_0(&VAR_13->adap.dev, "write wait timeout\n");
  VAR_18 = -VAR_0;
 }

 VAR_21 = FUNC_1(VAR_13, VAR_10);
 if (VAR_21) {
  FUNC_2(VAR_13, VAR_21);
  VAR_18 = -VAR_0;
 }

 return VAR_18;
}

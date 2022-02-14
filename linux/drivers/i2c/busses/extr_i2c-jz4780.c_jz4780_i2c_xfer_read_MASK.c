
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct jz4780_i2c {unsigned char* rbuf; int rd_total_len; size_t cmd; int * data_buf; TYPE_1__ adap; int * cmd_buf; int trans_waitq; int lock; scalar_t__ rd_cmd_xfered; scalar_t__ rd_data_xfered; scalar_t__ is_write; scalar_t__ stop_hold; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 int FUNC_0 (int *,char*,size_t,int ) ;
 int FUNC_1 (int *,char*) ;
 unsigned short FUNC_2 (struct jz4780_i2c*,int ) ;
 int FUNC_3 (struct jz4780_i2c*,unsigned short) ;
 int FUNC_4 (struct jz4780_i2c*,int ,unsigned short) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 long FUNC_9 (int *,int ) ;

__attribute__((used)) static inline int FUNC_10(struct jz4780_i2c *VAR_15,
           unsigned char *VAR_16, int VAR_17, int VAR_18,
           int VAR_19)
{
 int VAR_20 = 0;
 long VAR_21;
 int VAR_22 = VAR_10 * (VAR_17 + 5);
 unsigned short VAR_23;
 unsigned long VAR_24;

 FUNC_5(VAR_16, 0, VAR_17);

 FUNC_7(&VAR_15->lock, VAR_24);

 VAR_15->stop_hold = 0;
 VAR_15->is_write = 0;
 VAR_15->rbuf = VAR_16;
 VAR_15->rd_total_len = VAR_17;
 VAR_15->rd_data_xfered = 0;
 VAR_15->rd_cmd_xfered = 0;

 if (VAR_17 <= VAR_3)
  FUNC_4(VAR_15, VAR_9, VAR_17 - 1);
 else
  FUNC_4(VAR_15, VAR_9, VAR_13);

 FUNC_4(VAR_15, VAR_12, VAR_14);

 FUNC_4(VAR_15, VAR_4,
     VAR_5 | VAR_8
     | VAR_7 | VAR_6);

 VAR_23 = FUNC_2(VAR_15, VAR_1);
 VAR_23 |= VAR_2;
 FUNC_4(VAR_15, VAR_1, VAR_23);

 FUNC_8(&VAR_15->lock, VAR_24);

 VAR_21 = FUNC_9(&VAR_15->trans_waitq,
           FUNC_6(VAR_22));

 if (!VAR_21) {
  FUNC_1(&VAR_15->adap.dev, "irq read timeout\n");
  FUNC_0(&VAR_15->adap.dev, "send cmd count:%d  %d\n",
   VAR_15->cmd, VAR_15->cmd_buf[VAR_15->cmd]);
  FUNC_0(&VAR_15->adap.dev, "receive data count:%d  %d\n",
   VAR_15->cmd, VAR_15->data_buf[VAR_15->cmd]);
  VAR_20 = -VAR_0;
 }

 VAR_23 = FUNC_2(VAR_15, VAR_11);
 if (VAR_23) {
  FUNC_3(VAR_15, VAR_23);
  VAR_20 = -VAR_0;
 }

 return VAR_20;
}

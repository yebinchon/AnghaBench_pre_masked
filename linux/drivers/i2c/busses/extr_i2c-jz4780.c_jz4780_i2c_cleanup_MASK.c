
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct jz4780_i2c {TYPE_1__ adap; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct jz4780_i2c*) ;
 unsigned short FUNC_2 (struct jz4780_i2c*,int ) ;
 int FUNC_3 (struct jz4780_i2c*,int ,unsigned short) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned short) ;

__attribute__((used)) static int FUNC_8(struct jz4780_i2c *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;
 unsigned short VAR_10;

 FUNC_4(&VAR_7->lock, VAR_9);


 VAR_10 = FUNC_2(VAR_7, VAR_1);
 VAR_10 &= ~VAR_2;
 FUNC_3(VAR_7, VAR_1, VAR_10);


 FUNC_3(VAR_7, VAR_5, 0);


 FUNC_2(VAR_7, VAR_3);
 FUNC_2(VAR_7, VAR_0);


 VAR_10 = FUNC_2(VAR_7, VAR_1);
 VAR_10 &= ~VAR_4;
 FUNC_3(VAR_7, VAR_1, VAR_10);
 FUNC_6(10);
 VAR_10 |= VAR_4;
 FUNC_3(VAR_7, VAR_1, VAR_10);

 FUNC_5(&VAR_7->lock, VAR_9);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  FUNC_0(&VAR_7->adap.dev,
   "unable to disable device during cleanup!\n");

 if (FUNC_7(FUNC_2(VAR_7, VAR_5)
       & FUNC_2(VAR_7, VAR_6)))
  FUNC_0(&VAR_7->adap.dev,
   "device has interrupts after a complete cleanup!\n");

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iio_dev {int dummy; } ;
struct adxrs450_state {int buf_lock; TYPE_1__* us; int tx; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int) ;
 struct adxrs450_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_2,
         u8 VAR_3,
         u16 VAR_4)
{
 struct adxrs450_state *VAR_5 = FUNC_3(VAR_2);
 u32 VAR_6;
 int VAR_7;

 FUNC_4(&VAR_5->buf_lock);
 VAR_6 = VAR_1 | (VAR_3 << 17) | (VAR_4 << 1);

 if (!(FUNC_2(VAR_6) & 1))
  VAR_6 |= VAR_0;

 VAR_5->tx = FUNC_0(VAR_6);
 VAR_7 = FUNC_6(VAR_5->us, &VAR_5->tx, sizeof(VAR_5->tx));
 if (VAR_7)
  FUNC_1(&VAR_5->us->dev, "problem while writing 16 bit register 0x%02x\n",
   VAR_3);
 FUNC_7(100, 1000);
 FUNC_5(&VAR_5->buf_lock);
 return VAR_7;
}

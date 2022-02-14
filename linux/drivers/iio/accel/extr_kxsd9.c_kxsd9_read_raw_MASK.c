
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kxsd9_state {int dev; int map; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
typedef int raw_val ;
typedef int __be16 ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct kxsd9_state* FUNC_1 (struct iio_dev*) ;
 int* VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_7,
     struct iio_chan_spec const *VAR_8,
     int *VAR_9, int *VAR_10, long VAR_11)
{
 int VAR_12 = -VAR_0;
 struct kxsd9_state *VAR_13 = FUNC_1(VAR_7);
 unsigned int VAR_14;
 __be16 VAR_15;
 u16 VAR_16;

 FUNC_2(VAR_13->dev);

 switch (VAR_11) {
 case 129:
  VAR_12 = FUNC_5(VAR_13->map, VAR_8->address, &VAR_15,
           sizeof(VAR_15));
  if (VAR_12)
   goto error_ret;
  VAR_16 = FUNC_0(VAR_15);

  VAR_16 >>= 4;
  *VAR_9 = VAR_16;
  VAR_12 = VAR_1;
  break;
 case 130:

  *VAR_9 = VAR_5;
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_12 = FUNC_6(VAR_13->map,
      VAR_4,
      &VAR_14);
  if (VAR_12 < 0)
   goto error_ret;
  *VAR_9 = 0;
  *VAR_10 = VAR_6[VAR_14 & VAR_3];
  VAR_12 = VAR_2;
  break;
 }

error_ret:
 FUNC_3(VAR_13->dev);
 FUNC_4(VAR_13->dev);

 return VAR_12;
}

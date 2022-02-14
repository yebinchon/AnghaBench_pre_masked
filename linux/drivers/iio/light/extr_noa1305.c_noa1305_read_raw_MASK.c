
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noa1305_priv {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;



 int VAR_1 ;
 struct noa1305_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct noa1305_priv*) ;
 int FUNC_2 (struct noa1305_priv*,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
    struct iio_chan_spec const *VAR_3,
    int *VAR_4, int *VAR_5, long VAR_6)
{
 int VAR_7 = -VAR_0;
 struct noa1305_priv *VAR_8 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 130:
  switch (VAR_3->type) {
  case 128:
   VAR_7 = FUNC_1(VAR_8);
   if (VAR_7 < 0)
    return VAR_7;
   *VAR_4 = VAR_7;
   return VAR_1;
  default:
   break;
  }
  break;
 case 129:
  switch (VAR_3->type) {
  case 128:
   return FUNC_2(VAR_8, VAR_4, VAR_5);
  default:
   break;
  }
  break;
 default:
  break;
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isl29501_private {int* shadow_coeffs; TYPE_1__* client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;
typedef enum isl29501_register_name { ____Placeholder_isl29501_register_name } isl29501_register_name ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;





 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct isl29501_private* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int,unsigned int,unsigned int) ;
 int FUNC_3 (struct isl29501_private*,int,int) ;
 int FUNC_4 (struct isl29501_private*,int,unsigned int) ;
 int FUNC_5 (struct isl29501_private*,int,int) ;
 int FUNC_6 (char const*,int,unsigned int*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct iio_dev *VAR_7,
      uintptr_t VAR_8,
      const struct iio_chan_spec *VAR_9,
      const char *VAR_10, size_t VAR_11)
{
 struct isl29501_private *VAR_12 = FUNC_1(VAR_7);
 enum isl29501_register_name VAR_13 = VAR_8;
 unsigned int VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;

 VAR_16 = FUNC_6(VAR_10, 10, &VAR_14);
 if (VAR_16)
  return VAR_16;

 switch (VAR_13) {
 case 128:
  if (VAR_14 > VAR_5)
   return -VAR_2;

  VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_14);
  if (VAR_16 < 0)
   return VAR_16;

  break;
 case 130:
 case 129:
 case 132:
 case 131:

  if (VAR_14 > (VAR_6 << VAR_3))
   return -VAR_2;


  VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_14);
  if (VAR_16 < 0)
   return VAR_16;





  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
   int VAR_18;
   int VAR_19;

   VAR_18 = VAR_12->shadow_coeffs[VAR_17];
   VAR_19 = FUNC_2(VAR_18,
         VAR_3,
         VAR_6 / 2);
   FUNC_0(&VAR_12->client->dev,
    "found exp of corr(%d) = %d\n", VAR_18, VAR_19);

   VAR_15 = FUNC_7(VAR_15, VAR_19);
  }






  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
   int VAR_20;
   int VAR_21;

   VAR_20 = VAR_12->shadow_coeffs[VAR_17];
   if (!VAR_20)
    continue;

   VAR_21 = VAR_20 >> VAR_15;

   VAR_16 = FUNC_5(VAR_12, VAR_17, VAR_21);
   if (VAR_16 < 0)
    return VAR_16;
  }

  VAR_16 = FUNC_3(VAR_12, VAR_4, VAR_15);
  if (VAR_16 < 0)
   return VAR_16;

  break;
 default:
  return -VAR_1;
 }

 return VAR_11;
}

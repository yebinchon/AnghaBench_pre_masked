
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si1133_data {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef int resp ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct si1133_data*,int ,int,int *) ;
 int FUNC_4 (struct si1133_data*,int ,int ) ;
 int FUNC_5 (struct si1133_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct si1133_data *VAR_0,
     struct iio_chan_spec const *VAR_1,
     int *VAR_2)
{
 int VAR_3;

 __be16 VAR_4;

 VAR_3 = FUNC_4(VAR_0, 0, VAR_1->channel);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_5(VAR_0, FUNC_0(0));
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_0, FUNC_1(0), sizeof(VAR_4),
          (u8 *)&VAR_4);
 if (VAR_3)
  return VAR_3;

 *VAR_2 = FUNC_2(VAR_4);

 return VAR_3;
}

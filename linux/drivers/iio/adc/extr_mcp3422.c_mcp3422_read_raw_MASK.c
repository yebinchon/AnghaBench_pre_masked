
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mcp3422 {int config; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 struct mcp3422* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct mcp3422*,struct iio_chan_spec const*,int*) ;
 int* VAR_3 ;
 int** VAR_4 ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
   struct iio_chan_spec const *VAR_6, int *VAR_7,
   int *VAR_8, long VAR_9)
{
 struct mcp3422 *VAR_10 = FUNC_2(VAR_5);
 int VAR_11;

 u8 VAR_12 = FUNC_1(VAR_10->config);
 u8 VAR_13 = FUNC_0(VAR_10->config);

 switch (VAR_9) {
 case 130:
  VAR_11 = FUNC_3(VAR_10, VAR_6, VAR_7);
  if (VAR_11 < 0)
   return -VAR_0;
  return VAR_1;

 case 128:

  *VAR_7 = 0;
  *VAR_8 = VAR_4[VAR_12][VAR_13];
  return VAR_2;

 case 129:
  *VAR_7 = VAR_3[FUNC_1(VAR_10->config)];
  return VAR_1;

 default:
  break;
 }

 return -VAR_0;
}

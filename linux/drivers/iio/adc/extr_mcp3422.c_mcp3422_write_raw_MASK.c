
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mcp3422 {size_t config; size_t* pga; int id; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;


 size_t VAR_1 ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_2 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct mcp3422* FUNC_5 (struct iio_dev*) ;
 int** VAR_8 ;
 int FUNC_6 (struct mcp3422*,size_t) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_9,
   struct iio_chan_spec const *VAR_10, int VAR_11,
   int VAR_12, long VAR_13)
{
 struct mcp3422 *VAR_14 = FUNC_5(VAR_9);
 u8 VAR_15;
 u8 VAR_16 = VAR_14->config;
 u8 VAR_17 = VAR_10->channel;
 u8 VAR_18 = FUNC_3(VAR_16);
 u8 VAR_19;

 switch (VAR_13) {
 case 128:
  if (VAR_11 != 0)
   return -VAR_0;

  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_8[0]); VAR_19++) {
   if (VAR_12 == VAR_8[VAR_18][VAR_19]) {
    VAR_14->pga[VAR_17] = VAR_19;

    VAR_16 &= ~VAR_1;
    VAR_16 |= FUNC_1(VAR_17);
    VAR_16 &= ~VAR_2;
    VAR_16 |= FUNC_2(VAR_14->pga[VAR_17]);

    return FUNC_6(VAR_14, VAR_16);
   }
  }
  return -VAR_0;

 case 129:
  switch (VAR_11) {
  case 240:
   VAR_15 = VAR_4;
   break;
  case 60:
   VAR_15 = VAR_6;
   break;
  case 15:
   VAR_15 = VAR_3;
   break;
  case 3:
   if (VAR_14->id > 4)
    return -VAR_0;
   VAR_15 = VAR_5;
   break;
  default:
   return -VAR_0;
  }

  VAR_16 &= ~VAR_1;
  VAR_16 |= FUNC_1(VAR_17);
  VAR_16 &= ~VAR_7;
  VAR_16 |= FUNC_4(VAR_15);

  return FUNC_6(VAR_14, VAR_16);

 default:
  break;
 }

 return -VAR_0;
}

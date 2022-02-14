
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;
struct hts221_hw {int odr; TYPE_1__* sensors; } ;
struct hts221_avg {int* avg_avl; } ;
struct TYPE_2__ {size_t cur_avg_idx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;







 int VAR_3 ;
 struct hts221_avg* VAR_4 ;
 int FUNC_0 (struct hts221_hw*,int ,int*,int*) ;
 int FUNC_1 (struct hts221_hw*,int ,int*,int*) ;
 int FUNC_2 (struct hts221_hw*,int ,int*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct hts221_hw* FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7, int *VAR_8, long VAR_9)
{
 struct hts221_hw *VAR_10 = FUNC_5(VAR_5);
 int VAR_11;

 VAR_11 = FUNC_3(VAR_5);
 if (VAR_11)
  return VAR_11;

 switch (VAR_9) {
 case 132:
  VAR_11 = FUNC_2(VAR_10, VAR_6->address, VAR_7);
  break;
 case 130:
  VAR_11 = FUNC_1(VAR_10, VAR_6->type, VAR_7, VAR_8);
  break;
 case 134:
  VAR_11 = FUNC_0(VAR_10, VAR_6->type, VAR_7, VAR_8);
  break;
 case 131:
  *VAR_7 = VAR_10->odr;
  VAR_11 = VAR_3;
  break;
 case 133: {
  u8 VAR_12;
  const struct hts221_avg *VAR_13;

  switch (VAR_6->type) {
  case 129:
   VAR_13 = &VAR_4[VAR_1];
   VAR_12 = VAR_10->sensors[VAR_1].cur_avg_idx;
   *VAR_7 = VAR_13->avg_avl[VAR_12];
   VAR_11 = VAR_3;
   break;
  case 128:
   VAR_13 = &VAR_4[VAR_2];
   VAR_12 = VAR_10->sensors[VAR_2].cur_avg_idx;
   *VAR_7 = VAR_13->avg_avl[VAR_12];
   VAR_11 = VAR_3;
   break;
  default:
   VAR_11 = -VAR_0;
   break;
  }
  break;
 }
 default:
  VAR_11 = -VAR_0;
  break;
 }

 FUNC_4(VAR_5);

 return VAR_11;
}

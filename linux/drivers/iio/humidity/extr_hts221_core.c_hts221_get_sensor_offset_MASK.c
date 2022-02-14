
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hts221_hw {TYPE_1__* sensors; } ;
typedef int s64 ;
typedef long long s32 ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
struct TYPE_2__ {long long b_gen; long long slope; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (long long,long long) ;
 int FUNC_1 (int,long long,long long*) ;

__attribute__((used)) static int FUNC_2(struct hts221_hw *VAR_4,
        enum iio_chan_type VAR_5,
        int *VAR_6, int *VAR_7)
{
 s64 VAR_8;
 s32 VAR_9, VAR_10, VAR_11;

 switch (VAR_5) {
 case 129:
  VAR_11 = VAR_4->sensors[VAR_1].b_gen;
  VAR_10 = VAR_4->sensors[VAR_1].slope;
  break;
 case 128:
  VAR_11 = VAR_4->sensors[VAR_2].b_gen;
  VAR_10 = VAR_4->sensors[VAR_2].slope;
  break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_11 * 1000000000LL, VAR_10);
 VAR_8 = FUNC_1(VAR_8, 1000000000LL, &VAR_9);

 *VAR_6 = VAR_8;
 *VAR_7 = VAR_9;

 return VAR_3;
}

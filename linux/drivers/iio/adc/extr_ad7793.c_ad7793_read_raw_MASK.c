
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_3__ {int realbits; } ;
struct iio_chan_spec {int const type; TYPE_1__ scan_type; int differential; } ;
struct ad7793_state {int conf; int** scale_avail; int mode; TYPE_2__* chip_info; } ;
struct TYPE_4__ {int* sample_freq_avail; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_2 (unsigned long long,int) ;
 struct ad7793_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6,
      int *VAR_7,
      long VAR_8)
{
 struct ad7793_state *VAR_9 = FUNC_3(VAR_4);
 int VAR_10;
 unsigned long long VAR_11;
 bool VAR_12 = !!(VAR_9->conf & VAR_0);

 switch (VAR_8) {
 case 132:
  VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;

  return VAR_2;

 case 130:
  switch (VAR_5->type) {
  case 128:
   if (VAR_5->differential) {
    *VAR_6 = VAR_9->
     scale_avail[(VAR_9->conf >> 8) & 0x7][0];
    *VAR_7 = VAR_9->
     scale_avail[(VAR_9->conf >> 8) & 0x7][1];
    return VAR_3;
   }

   VAR_11 = (1170ULL * 1000000000ULL * 6ULL);
   break;
  case 129:

    VAR_11 = 1444444444444444ULL;
   break;
  default:
   return -VAR_1;
  }

  VAR_11 >>= (VAR_5->scan_type.realbits - (VAR_12 ? 0 : 1));
  *VAR_6 = 0;
  *VAR_7 = VAR_11;
  return VAR_3;
 case 133:
  if (!VAR_12)
   *VAR_6 = -(1 << (VAR_5->scan_type.realbits - 1));
  else
   *VAR_6 = 0;


  if (VAR_5->type == 129) {
   unsigned long long VAR_13;
   unsigned int VAR_14;

   VAR_14 = VAR_5->scan_type.realbits - (VAR_12 ? 0 : 1);
   VAR_13 = 273ULL << VAR_14;
   FUNC_2(VAR_13, 1444);
   *VAR_6 -= VAR_13;
  }
  return VAR_2;
 case 131:
  *VAR_6 = VAR_9->chip_info
          ->sample_freq_avail[FUNC_0(VAR_9->mode)];
  return VAR_2;
 }
 return -VAR_1;
}

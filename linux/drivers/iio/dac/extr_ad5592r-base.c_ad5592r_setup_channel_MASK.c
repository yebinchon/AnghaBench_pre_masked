
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {unsigned char sign; int realbits; int storagebits; } ;
struct iio_chan_spec {int indexed; int output; unsigned int channel; int ext_info; TYPE_1__ scan_type; void* info_mask_shared_by_type; void* info_mask_separate; int type; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct iio_dev *VAR_4,
  struct iio_chan_spec *VAR_5, bool VAR_6, unsigned VAR_7)
{
 VAR_5->type = VAR_2;
 VAR_5->indexed = 1;
 VAR_5->output = VAR_6;
 VAR_5->channel = VAR_7;
 VAR_5->info_mask_separate = FUNC_0(VAR_0);
 VAR_5->info_mask_shared_by_type = FUNC_0(VAR_1);
 VAR_5->scan_type.sign = 'u';
 VAR_5->scan_type.realbits = 12;
 VAR_5->scan_type.storagebits = 16;
 VAR_5->ext_info = VAR_3;
}

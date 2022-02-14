
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_chan_spec {int indexed; int info_mask_separate; int info_mask_separate_available; int type; int ext_info; int output; } ;
struct rescale {TYPE_2__* cfg; int ext_info; TYPE_1__* source; struct iio_chan_spec chan; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {struct iio_chan_spec* channel; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct iio_chan_spec const*,int ) ;
 int FUNC_3 (struct iio_chan_spec const*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
         struct rescale *VAR_4)
{
 struct iio_chan_spec *VAR_5 = &VAR_4->chan;
 struct iio_chan_spec const *VAR_6 = VAR_4->source->channel;

 VAR_5->indexed = 1;
 VAR_5->output = VAR_6->output;
 VAR_5->ext_info = VAR_4->ext_info;
 VAR_5->type = VAR_4->cfg->type;

 if (!FUNC_3(VAR_6, VAR_1) ||
     !FUNC_3(VAR_6, VAR_2)) {
  FUNC_1(VAR_3, "source channel does not support raw/scale\n");
  return -VAR_0;
 }

 VAR_5->info_mask_separate = FUNC_0(VAR_1) |
  FUNC_0(VAR_2);

 if (FUNC_2(VAR_6, VAR_1))
  VAR_5->info_mask_separate_available |= FUNC_0(VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pm8xxx_xoadc {unsigned int nchans; TYPE_2__* chans; } ;
struct of_phandle_args {int args_count; scalar_t__* args; int np; } ;
struct iio_dev {int dev; } ;
struct TYPE_4__ {TYPE_1__* hwchan; } ;
struct TYPE_3__ {scalar_t__ pre_scale_mux; scalar_t__ amux_channel; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,char*,int ,int) ;
 struct pm8xxx_xoadc* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
      const struct of_phandle_args *VAR_2)
{
 struct pm8xxx_xoadc *VAR_3 = FUNC_2(VAR_1);
 u8 VAR_4;
 u8 VAR_5;
 unsigned int VAR_6;





 if (VAR_2->args_count != 2) {
  FUNC_1(&VAR_1->dev, "wrong number of arguments for %pOFn need 2 got %d\n",
   VAR_2->np,
   VAR_2->args_count);
  return -VAR_0;
 }
 VAR_4 = (u8)VAR_2->args[0];
 VAR_5 = (u8)VAR_2->args[1];
 FUNC_0(&VAR_1->dev, "pre scale/mux: %02x, amux: %02x\n",
  VAR_4, VAR_5);


 for (VAR_6 = 0; VAR_6 < VAR_3->nchans; VAR_6++)
  if (VAR_3->chans[VAR_6].hwchan->pre_scale_mux == VAR_4 &&
      VAR_3->chans[VAR_6].hwchan->amux_channel == VAR_5)
   return VAR_6;

 return -VAR_0;
}

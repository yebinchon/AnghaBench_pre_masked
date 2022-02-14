
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;
struct adf4350_state {int r0_int; int r1_mod; int r0_fract; int r4_rf_div_sel; unsigned long long clkin; unsigned long long chspc; int* regs; int clk; TYPE_2__* spi; TYPE_1__* pdata; int fpfd; } ;
typedef int ssize_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int gpio_lock_detect; } ;






 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned long long,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct adf4350_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_9(struct iio_dev *VAR_4,
       uintptr_t VAR_5,
       const struct iio_chan_spec *VAR_6,
       char *VAR_7)
{
 struct adf4350_state *VAR_8 = FUNC_5(VAR_4);
 unsigned long long VAR_9;
 int VAR_10 = 0;

 FUNC_6(&VAR_4->mlock);
 switch ((u32)VAR_5) {
 case 131:
  VAR_9 = (u64)((VAR_8->r0_int * VAR_8->r1_mod) + VAR_8->r0_fract) *
   (u64)VAR_8->fpfd;
  FUNC_2(VAR_9, VAR_8->r1_mod * (1 << VAR_8->r4_rf_div_sel));

  if (FUNC_4(VAR_8->pdata->gpio_lock_detect))
   if (!FUNC_3(VAR_8->pdata->gpio_lock_detect)) {
    FUNC_1(&VAR_8->spi->dev, "PLL un-locked\n");
    VAR_10 = -VAR_2;
   }
  break;
 case 130:
  if (VAR_8->clk)
   VAR_8->clkin = FUNC_0(VAR_8->clk);

  VAR_9 = VAR_8->clkin;
  break;
 case 129:
  VAR_9 = VAR_8->chspc;
  break;
 case 128:
  VAR_9 = !!(VAR_8->regs[VAR_0] & VAR_1);
  break;
 default:
  VAR_10 = -VAR_3;
  VAR_9 = 0;
 }
 FUNC_7(&VAR_4->mlock);

 return VAR_10 < 0 ? VAR_10 : FUNC_8(VAR_7, "%llu\n", VAR_9);
}

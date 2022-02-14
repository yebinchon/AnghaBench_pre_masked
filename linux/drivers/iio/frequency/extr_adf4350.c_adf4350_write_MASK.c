
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;
struct adf4350_state {unsigned long long clkin; unsigned long long freq_req; unsigned long long chspc; int * regs; int clk; } ;
typedef int ssize_t ;





 unsigned long long VAR_0 ;

 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adf4350_state*,unsigned long long) ;
 int FUNC_1 (struct adf4350_state*) ;
 unsigned long FUNC_2 (int ,unsigned long long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct adf4350_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (char const*,int,unsigned long long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct iio_dev *VAR_4,
        uintptr_t VAR_5,
        const struct iio_chan_spec *VAR_6,
        const char *VAR_7, size_t VAR_8)
{
 struct adf4350_state *VAR_9 = FUNC_4(VAR_4);
 unsigned long long VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_7, 10, &VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_6(&VAR_4->mlock);
 switch ((u32)VAR_5) {
 case 131:
  VAR_12 = FUNC_0(VAR_9, VAR_10);
  break;
 case 130:
  if (VAR_10 > VAR_0) {
   VAR_12 = -VAR_3;
   break;
  }

  if (VAR_9->clk) {
   VAR_11 = FUNC_2(VAR_9->clk, VAR_10);
   if (VAR_11 != VAR_10) {
    VAR_12 = -VAR_3;
    break;
   }
   VAR_12 = FUNC_3(VAR_9->clk, VAR_11);
   if (VAR_12 < 0)
    break;
  }
  VAR_9->clkin = VAR_10;
  VAR_12 = FUNC_0(VAR_9, VAR_9->freq_req);
  break;
 case 129:
  if (VAR_10 == 0)
   VAR_12 = -VAR_3;
  else
   VAR_9->chspc = VAR_10;
  break;
 case 128:
  if (VAR_10)
   VAR_9->regs[VAR_1] |= VAR_2;
  else
   VAR_9->regs[VAR_1] &= ~VAR_2;

  FUNC_1(VAR_9);
  break;
 default:
  VAR_12 = -VAR_3;
 }
 FUNC_7(&VAR_4->mlock);

 return VAR_12 ? VAR_12 : VAR_8;
}

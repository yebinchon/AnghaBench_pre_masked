
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl2832_sdr_dev {scalar_t__ pixelformat; unsigned int sample; unsigned int sample_measured; scalar_t__ jiffies_next; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,int const*,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct rtl2832_sdr_dev *VAR_4,
  void *VAR_5, const u8 *VAR_6, unsigned int VAR_7)
{
 struct platform_device *VAR_8 = VAR_4->pdev;
 unsigned int VAR_9;

 if (VAR_4->pixelformat == VAR_2) {

  FUNC_2(VAR_5, VAR_6, VAR_7);
  VAR_9 = VAR_7;
 } else if (VAR_4->pixelformat == VAR_1) {

  unsigned int VAR_10;
  u16 *VAR_11 = VAR_5;

  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
   *VAR_11++ = (VAR_6[VAR_10] << 8) | (VAR_6[VAR_10] >> 0);
  VAR_9 = 2 * VAR_7;
 } else {
  VAR_9 = 0;
 }


 if (FUNC_5(FUNC_4(VAR_4->jiffies_next))) {

  unsigned int VAR_12 = FUNC_1(VAR_3 -
    VAR_4->jiffies_next + FUNC_3(10000UL));
  unsigned int VAR_13 = VAR_4->sample - VAR_4->sample_measured;

  VAR_4->jiffies_next = VAR_3 + FUNC_3(10000UL);
  VAR_4->sample_measured = VAR_4->sample;
  FUNC_0(&VAR_8->dev,
   "slen=%u samples=%u msecs=%u sample rate=%lu\n",
   VAR_7, VAR_13, VAR_12, VAR_13 * 1000UL / VAR_12);
 }


 VAR_4->sample += VAR_7 / 2;

 return VAR_9;
}

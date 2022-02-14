
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {unsigned int zynq_intmask; int clk; } ;
struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 struct xadc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct xadc*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_16,
 struct iio_dev *VAR_17, int VAR_18)
{
 struct xadc *VAR_19 = FUNC_3(VAR_17);
 unsigned long VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 int VAR_25;


 VAR_23 = VAR_9;
 VAR_24 = VAR_15;

 VAR_19->zynq_intmask = ~0;

 VAR_20 = FUNC_1(VAR_19->clk);
 if (!VAR_20)
  return -VAR_0;

 if (VAR_20 > VAR_10) {
  VAR_25 = FUNC_2(VAR_19->clk,
       (unsigned long)VAR_10);
  if (VAR_25)
   return VAR_25;
 }

 if (VAR_24 > VAR_20 / 2) {
  VAR_22 = 2;
 } else {
  VAR_22 = VAR_20 / VAR_24;
  if (VAR_20 / VAR_22 > VAR_15)
   VAR_22++;
 }

 if (VAR_22 <= 3)
  VAR_21 = VAR_4;
 else if (VAR_22 <= 7)
  VAR_21 = VAR_5;
 else if (VAR_22 <= 15)
  VAR_21 = VAR_6;
 else
  VAR_21 = VAR_3;

 FUNC_4(VAR_19, VAR_12, VAR_8);
 FUNC_4(VAR_19, VAR_12, 0);
 FUNC_4(VAR_19, VAR_14, ~0);
 FUNC_4(VAR_19, VAR_13, VAR_19->zynq_intmask);
 FUNC_4(VAR_19, VAR_11, VAR_1 |
   VAR_2 | VAR_7 |
   VAR_21 | FUNC_0(VAR_23));

 if (VAR_20 > VAR_10) {
  VAR_25 = FUNC_2(VAR_19->clk, VAR_20);
  if (VAR_25)
   return VAR_25;
 }

 return 0;
}

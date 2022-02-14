
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lpi2c_imx_struct {scalar_t__ mode; int bitrate; scalar_t__ base; int clk; } ;
typedef enum lpi2c_imx_pincfg { ____Placeholder_lpi2c_imx_pincfg } lpi2c_imx_pincfg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct lpi2c_imx_struct*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct lpi2c_imx_struct *VAR_11)
{
 u8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19;
 enum lpi2c_imx_pincfg VAR_20;
 unsigned int VAR_21;

 FUNC_1(VAR_11);

 VAR_18 = FUNC_0(VAR_11->clk);
 if (VAR_11->mode == VAR_1 || VAR_11->mode == VAR_10)
  VAR_13 = 0;
 else
  VAR_13 = 2;

 for (VAR_12 = 0; VAR_12 <= 7; VAR_12++) {
  VAR_19 = VAR_18 / ((1 << VAR_12) * VAR_11->bitrate)
       - 3 - (VAR_13 >> 1);
  VAR_15 = (VAR_19 + VAR_2) / (VAR_2 + 1);
  VAR_16 = VAR_19 - VAR_15;
  if (VAR_16 < 64)
   break;
 }

 if (VAR_12 > 7)
  return -VAR_0;


 if (VAR_11->mode == VAR_10)
  VAR_20 = VAR_9;
 else
  VAR_20 = VAR_8;
 VAR_21 = VAR_12 | VAR_20 << 24;

 if (VAR_11->mode == VAR_10)
  VAR_21 |= VAR_7;

 FUNC_2(VAR_21, VAR_11->base + VAR_5);


 VAR_21 = (VAR_13 << 16) | (VAR_13 << 24);
 FUNC_2(VAR_21, VAR_11->base + VAR_6);


 VAR_14 = VAR_15;
 VAR_17 = VAR_15 >> 1;
 VAR_21 = VAR_17 << 24 | VAR_14 << 16 | VAR_15 << 8 | VAR_16;

 if (VAR_11->mode == VAR_1)
  FUNC_2(VAR_21, VAR_11->base + VAR_4);
 else
  FUNC_2(VAR_21, VAR_11->base + VAR_3);

 return 0;
}

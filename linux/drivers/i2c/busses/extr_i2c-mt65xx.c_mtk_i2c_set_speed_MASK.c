
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_i2c {unsigned int clk_src_div; unsigned int speed_hz; unsigned int timing_reg; unsigned int high_speed_reg; unsigned int ltiming_reg; TYPE_1__* dev_comp; } ;
struct TYPE_2__ {scalar_t__ ltiming_adjust; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct mtk_i2c*,unsigned int,unsigned int,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct mtk_i2c *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_5 = VAR_4 / VAR_3->clk_src_div;
 VAR_10 = VAR_3->speed_hz;

 if (VAR_10 > VAR_2) {

  VAR_11 = FUNC_0(VAR_3, VAR_5, VAR_2,
           &VAR_8, &VAR_9);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_3->timing_reg = (VAR_9 << 8) | VAR_8;


  VAR_11 = FUNC_0(VAR_3, VAR_5, VAR_10,
           &VAR_6, &VAR_7);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_3->high_speed_reg = VAR_1 |
   (VAR_7 << 12) | (VAR_6 << 8);

  if (VAR_3->dev_comp->ltiming_adjust)
   VAR_3->ltiming_reg = (VAR_9 << 6) | VAR_8 |
        (VAR_7 << 12) | (VAR_6 << 9);
 } else {
  VAR_11 = FUNC_0(VAR_3, VAR_5, VAR_10,
           &VAR_6, &VAR_7);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_3->timing_reg = (VAR_7 << 8) | VAR_6;


  VAR_3->high_speed_reg = VAR_0;

  if (VAR_3->dev_comp->ltiming_adjust)
   VAR_3->ltiming_reg = (VAR_7 << 6) | VAR_6;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpi2c_imx_struct {unsigned int bitrate; int mode; } ;
typedef enum lpi2c_imx_mode { ____Placeholder_lpi2c_imx_mode } lpi2c_imx_mode ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct lpi2c_imx_struct *VAR_9)
{
 unsigned int VAR_10 = VAR_9->bitrate;
 enum lpi2c_imx_mode VAR_11;

 if (VAR_10 < VAR_7)
  VAR_11 = VAR_6;
 else if (VAR_10 < VAR_1)
  VAR_11 = VAR_0;
 else if (VAR_10 < VAR_3)
  VAR_11 = VAR_2;
 else if (VAR_10 < VAR_4)
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_8;

 VAR_9->mode = VAR_11;
}

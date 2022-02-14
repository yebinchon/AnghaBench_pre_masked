
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int bgpio_bits; int write_reg; int read_reg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_13,
     struct gpio_chip *VAR_14,
     bool VAR_15)
{

 switch (VAR_14->bgpio_bits) {
 case 8:
  VAR_14->read_reg = VAR_6;
  VAR_14->write_reg = VAR_12;
  break;
 case 16:
  if (VAR_15) {
   VAR_14->read_reg = VAR_2;
   VAR_14->write_reg = VAR_8;
  } else {
   VAR_14->read_reg = VAR_1;
   VAR_14->write_reg = VAR_7;
  }
  break;
 case 32:
  if (VAR_15) {
   VAR_14->read_reg = VAR_4;
   VAR_14->write_reg = VAR_10;
  } else {
   VAR_14->read_reg = VAR_3;
   VAR_14->write_reg = VAR_9;
  }
  break;
 default:
  FUNC_0(VAR_13, "unsupported data width %u bits\n", VAR_14->bgpio_bits);
  return -VAR_0;
 }

 return 0;
}

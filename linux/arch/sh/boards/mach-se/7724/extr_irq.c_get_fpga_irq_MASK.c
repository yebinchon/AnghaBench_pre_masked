
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_irq {int base; int mask; int mraddr; int sraddr; } ;


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

__attribute__((used)) static struct fpga_irq FUNC_0(unsigned int VAR_12)
{
 struct fpga_irq VAR_13;

 switch (VAR_12) {
 case 129:
  VAR_13.sraddr = VAR_3;
  VAR_13.mraddr = VAR_2;
  VAR_13.mask = VAR_1;
  VAR_13.base = VAR_0;
  break;
 case 128:
  VAR_13.sraddr = VAR_7;
  VAR_13.mraddr = VAR_6;
  VAR_13.mask = VAR_5;
  VAR_13.base = VAR_4;
  break;
 default:
  VAR_13.sraddr = VAR_11;
  VAR_13.mraddr = VAR_10;
  VAR_13.mask = VAR_9;
  VAR_13.base = VAR_8;
  break;
 }

 return VAR_13;
}

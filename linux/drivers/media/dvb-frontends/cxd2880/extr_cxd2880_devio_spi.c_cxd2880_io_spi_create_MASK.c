
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_spi {int dummy; } ;
struct cxd2880_io {int slave_select; scalar_t__ i2c_address_demod; scalar_t__ i2c_address_sys; struct cxd2880_spi* if_object; int write_reg; int write_regs; int read_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct cxd2880_io *VAR_4,
     struct cxd2880_spi *VAR_5, u8 VAR_6)
{
 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 VAR_4->read_regs = VAR_2;
 VAR_4->write_regs = VAR_3;
 VAR_4->write_reg = VAR_1;
 VAR_4->if_object = VAR_5;
 VAR_4->i2c_address_sys = 0;
 VAR_4->i2c_address_demod = 0;
 VAR_4->slave_select = VAR_6;

 return 0;
}

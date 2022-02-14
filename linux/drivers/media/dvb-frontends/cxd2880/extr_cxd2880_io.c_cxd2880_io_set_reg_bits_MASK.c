
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_io {int (* read_regs ) (struct cxd2880_io*,int,int,int*,int) ;int (* write_reg ) (struct cxd2880_io*,int,int,int) ;} ;
typedef enum cxd2880_io_tgt { ____Placeholder_cxd2880_io_tgt } cxd2880_io_tgt ;


 int VAR_0 ;
 int FUNC_0 (struct cxd2880_io*,int,int,int*,int) ;
 int FUNC_1 (struct cxd2880_io*,int,int,int) ;

int FUNC_2(struct cxd2880_io *VAR_1,
       enum cxd2880_io_tgt VAR_2,
       u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6;

 if (!VAR_1)
  return -VAR_0;

 if (VAR_5 == 0x00)
  return 0;

 if (VAR_5 != 0xff) {
  u8 VAR_7 = 0x00;

  VAR_6 = VAR_1->read_regs(VAR_1, VAR_2, VAR_3, &VAR_7, 1);
  if (VAR_6)
   return VAR_6;

  VAR_4 = (VAR_4 & VAR_5) | (VAR_7 & (VAR_5 ^ 0xff));
 }

 return VAR_1->write_reg(VAR_1, VAR_2, VAR_3, VAR_4);
}

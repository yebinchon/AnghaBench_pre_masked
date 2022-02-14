
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_reg_value {int value; int addr; } ;
struct cxd2880_io {int (* write_reg ) (struct cxd2880_io*,int,int ,int ) ;} ;
typedef enum cxd2880_io_tgt { ____Placeholder_cxd2880_io_tgt } cxd2880_io_tgt ;


 int VAR_0 ;
 int FUNC_0 (struct cxd2880_io*,int,int ,int ) ;

int FUNC_1(struct cxd2880_io *VAR_1,
        enum cxd2880_io_tgt VAR_2,
        const struct cxd2880_reg_value VAR_3[],
        u8 VAR_4)
{
 int VAR_5;
 int VAR_6;

 if (!VAR_1)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4 ; VAR_6++) {
  VAR_5 = VAR_1->write_reg(VAR_1, VAR_2, VAR_3[VAR_6].addr,
        VAR_3[VAR_6].value);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}

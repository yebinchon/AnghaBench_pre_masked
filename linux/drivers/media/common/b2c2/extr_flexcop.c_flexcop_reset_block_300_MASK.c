
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_2__) ;TYPE_2__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
struct TYPE_9__ {int reset_block_300; int Block_reset_enable; } ;
struct TYPE_10__ {TYPE_1__ sw_reset_210; int raw; } ;
typedef TYPE_2__ flexcop_ibi_value ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ FUNC_1 (struct flexcop_device*,int ) ;
 TYPE_2__ FUNC_2 (struct flexcop_device*,int ) ;
 int FUNC_3 (struct flexcop_device*,int ,TYPE_2__) ;
 int FUNC_4 (struct flexcop_device*,int ,TYPE_2__) ;
 int FUNC_5 (struct flexcop_device*,int ,TYPE_2__) ;
 int VAR_2 ;

void FUNC_6(struct flexcop_device *VAR_3)
{
 flexcop_ibi_value VAR_4 = VAR_3->read_ibi_reg(VAR_3, VAR_0),
     VAR_5 = VAR_3->read_ibi_reg(VAR_3, VAR_2);

 FUNC_0("208: %08x, 210: %08x\n", VAR_4.raw, VAR_5);
 VAR_3->write_ibi_reg(VAR_3,VAR_0,VAR_1);

 VAR_5 = 1;
 VAR_5 = 0xb2;

 VAR_3->write_ibi_reg(VAR_3,VAR_2,VAR_5);
 VAR_3->write_ibi_reg(VAR_3,VAR_0,VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_3__) ;TYPE_3__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
struct TYPE_11__ {int Per_reset_sig; } ;
struct TYPE_10__ {int reset_block_000; int reset_block_100; int reset_block_200; int reset_block_300; int reset_block_400; int reset_block_500; int reset_block_600; int reset_block_700; int Block_reset_enable; int Special_controls; } ;
struct TYPE_12__ {TYPE_2__ misc_204; TYPE_1__ sw_reset_210; scalar_t__ raw; } ;
typedef TYPE_3__ flexcop_ibi_value ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct flexcop_device*,int ,TYPE_3__) ;
 int FUNC_2 (struct flexcop_device*,int ,TYPE_3__) ;
 TYPE_3__ FUNC_3 (struct flexcop_device*,int ) ;
 int FUNC_4 (struct flexcop_device*,int ,TYPE_3__) ;
 int FUNC_5 (struct flexcop_device*,int ,TYPE_3__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct flexcop_device *VAR_4)
{
 flexcop_ibi_value VAR_5, VAR_6;


 VAR_4->write_ibi_reg(VAR_4,VAR_0,VAR_1);

 VAR_5 = 0;
 VAR_5 = 1;
 VAR_5 = 1;
 VAR_5 = 1;
 VAR_5 = 1;
 VAR_5 = 1;
 VAR_5 = 1;
 VAR_5 = 1;
 VAR_5 = 1;
 VAR_5 = 0xb2;
 VAR_5 = 0xc259;
 VAR_4->write_ibi_reg(VAR_4,VAR_3,VAR_5);
 FUNC_0(1);



 VAR_6 = VAR_4->read_ibi_reg(VAR_4,VAR_2);
 VAR_6 = 0;
 VAR_4->write_ibi_reg(VAR_4,VAR_2,VAR_6);
 FUNC_0(1);
 VAR_6 = 1;
 VAR_4->write_ibi_reg(VAR_4,VAR_2,VAR_6);
}

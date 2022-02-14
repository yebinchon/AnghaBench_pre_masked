
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct flexcop_device {TYPE_1__ (* read_ibi_reg ) (struct flexcop_device*,scalar_t__) ;} ;
struct TYPE_3__ {int raw; } ;
typedef TYPE_1__ flexcop_ibi_value ;
typedef scalar_t__ flexcop_ibi_register ;


 int FUNC_0 (char*,...) ;
 TYPE_1__ FUNC_1 (struct flexcop_device*,scalar_t__) ;

void FUNC_2(struct flexcop_device *VAR_0,
  flexcop_ibi_register VAR_1, int VAR_2)
{
 flexcop_ibi_value VAR_3;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = VAR_0->read_ibi_reg(VAR_0, VAR_1+4*VAR_4);
  FUNC_0("0x%03x: %08x, ", VAR_1+4*VAR_4, VAR_3.raw);
 }
 FUNC_0("\n");
}

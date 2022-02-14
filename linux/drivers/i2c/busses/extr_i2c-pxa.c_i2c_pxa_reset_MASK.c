
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pxa_i2c {int slave_addr; int fm_mask; int hs_mask; TYPE_1__ adap; scalar_t__ high_mode; scalar_t__ fast_mode; scalar_t__ reg_isar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pxa_i2c*) ;
 int FUNC_2 (struct pxa_i2c*) ;
 int FUNC_3 (struct pxa_i2c*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct pxa_i2c*) ;
 int FUNC_6 (struct pxa_i2c*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct pxa_i2c *VAR_8)
{
 FUNC_7("Resetting I2C Controller Unit\n");


 FUNC_5(VAR_8);


 FUNC_10(VAR_7, FUNC_1(VAR_8));
 FUNC_10(VAR_2, FUNC_3(VAR_8));
 FUNC_10(FUNC_8(FUNC_1(VAR_8)) & ~VAR_7, FUNC_1(VAR_8));

 if (VAR_8->reg_isar && FUNC_0(VAR_0))
  FUNC_10(VAR_8->slave_addr, FUNC_2(VAR_8));


 FUNC_10(VAR_1 | (VAR_8->fast_mode ? VAR_8->fm_mask : 0), FUNC_1(VAR_8));
 FUNC_10(FUNC_8(FUNC_1(VAR_8)) | (VAR_8->high_mode ? VAR_8->hs_mask : 0), FUNC_1(VAR_8));






 FUNC_6(VAR_8, 0);


 FUNC_10(FUNC_8(FUNC_1(VAR_8)) | VAR_4, FUNC_1(VAR_8));
 FUNC_9(100);
}

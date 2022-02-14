
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iadev_priv {int phy_type; } ;
struct ia_reg {int member_1; int member_0; } ;
struct TYPE_2__ {int suni_rxcp_intr_en_sts; } ;


 int FUNC_0 (struct ia_reg const*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct iadev_priv*,int ) ;
 int FUNC_2 (struct iadev_priv*,struct ia_reg const*,int ) ;
 int FUNC_3 (struct iadev_priv*,int ,int) ;
 int FUNC_4 (struct iadev_priv*) ;
 int FUNC_5 (struct iadev_priv*) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void FUNC_6(struct iadev_priv *VAR_8)
{
 static const struct ia_reg VAR_9[] = {

  { 150, 0x28 },

  { 151, 0 },

  { 149, 0 },

  { 140, 0x2c },
  { 139, 0x81 },

  { 134, 0 },
  { 133, 0 },
  { 132, 0 },
  { 131, 0x01 },

  { 138, 0xff },
  { 137, 0xff },
  { 136, 0xff },
  { 135, 0xfe },

  { 144, 0 },
  { 143, 0 },
  { 142, 0 },
  { 141, 0x01 },

  { 148, 0xff },
  { 147, 0xff },
  { 146, 0xff },
  { 145, 0xff },

  { 130, 0xa4 },
  { 128, 0x10 },
  { 129, 0x55 }
 };

 if (VAR_8->phy_type & VAR_0)
  FUNC_4(VAR_8);
 else
  FUNC_5(VAR_8);

 FUNC_2(VAR_8, VAR_9, FUNC_0(VAR_9));

 FUNC_3(VAR_8, VAR_1, FUNC_1(VAR_8, VAR_1) &
  ~(VAR_5 | VAR_3 |
    VAR_4 | VAR_6));



   return;
}

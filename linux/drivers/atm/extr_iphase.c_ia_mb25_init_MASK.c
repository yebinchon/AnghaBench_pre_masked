
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iadev_priv {int carrier_detect; } ;
struct TYPE_2__ {int mb25_master_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iadev_priv*,int ) ;
 int FUNC_1 (struct iadev_priv*,int ,int) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void FUNC_2(struct iadev_priv *VAR_8)
{



 FUNC_1(VAR_8, VAR_3, VAR_5 | VAR_4);
 FUNC_1(VAR_8, VAR_0, 0);

 VAR_8->carrier_detect =
  (FUNC_0(VAR_8, VAR_1) & VAR_2) ? 1 : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mii_bus {int (* write ) (struct mii_bus*,int,int,int) ;} ;
struct ar8xxx_priv {TYPE_1__* chip; struct mii_bus* mii_bus; } ;
struct TYPE_2__ {scalar_t__ mii_lo_first; } ;


 int FUNC_0 (struct mii_bus*,int,int,int) ;
 int FUNC_1 (struct mii_bus*,int,int,int) ;
 int FUNC_2 (struct mii_bus*,int,int,int) ;
 int FUNC_3 (struct mii_bus*,int,int,int) ;

void
FUNC_4(struct ar8xxx_priv *VAR_0, int VAR_1, int VAR_2, u32 VAR_3)
{
 struct mii_bus *VAR_4 = VAR_0->mii_bus;
 u16 VAR_5, VAR_6;

 VAR_5 = VAR_3 & 0xffff;
 VAR_6 = (u16) (VAR_3 >> 16);

 if (VAR_0->chip->mii_lo_first)
 {
  VAR_4->write(VAR_4, VAR_1, VAR_2, VAR_5);
  VAR_4->write(VAR_4, VAR_1, VAR_2 + 1, VAR_6);
 } else {
  VAR_4->write(VAR_4, VAR_1, VAR_2 + 1, VAR_6);
  VAR_4->write(VAR_4, VAR_1, VAR_2, VAR_5);
 }
}

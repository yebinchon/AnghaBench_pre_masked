
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ar8xxx_priv {int initialized; TYPE_1__* phy; scalar_t__ port4_phy; } ;
struct TYPE_2__ {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ar8xxx_priv*,int,int,int) ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int FUNC_2 (struct ar8xxx_priv*,int ) ;
 int FUNC_3 (struct ar8xxx_priv*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct ar8xxx_priv *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_0);

 if (VAR_4->phy->interface == VAR_3) {
  if (VAR_4->port4_phy) {

   VAR_6 = 0x81461bea;
   FUNC_6("ar8316: Using port 4 as PHY\n");
  } else {
   VAR_6 = 0x01261be2;
   FUNC_6("ar8316: Using port 4 as switch port\n");
  }
 } else if (VAR_4->phy->interface == VAR_2) {

  VAR_6 = 0x010e5b71;
 } else {

  FUNC_5("ar8316: unsupported mii mode: %d.\n",
         VAR_4->phy->interface);
  return -VAR_1;
 }

 if (VAR_5 == VAR_6)
  goto out;

 FUNC_3(VAR_4, VAR_0, VAR_6);

 if (VAR_4->port4_phy &&
     VAR_4->phy->interface == VAR_3) {

  FUNC_0(VAR_4, 4, 0x12, 0x480c);

  FUNC_0(VAR_4, 4, 0x0, 0x824e);

  FUNC_0(VAR_4, 4, 0x5, 0x3d47);
  FUNC_4(1000);
 }

 FUNC_1(VAR_4);

out:
 VAR_4->initialized = 1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {int mdio_lock; int (* write ) (struct mii_bus*,int,int ,int) ;} ;
struct ar8xxx_priv {struct mii_bus* mii_bus; } ;


 int FUNC_0 (struct ar8xxx_priv*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*,int*,int*) ;
 int FUNC_4 (struct mii_bus*,int,int ,int) ;
 int FUNC_5 () ;

u32
FUNC_6(struct ar8xxx_priv *VAR_0, int VAR_1)
{
 struct mii_bus *VAR_2 = VAR_0->mii_bus;
 u16 VAR_3, VAR_4, VAR_5;
 u32 VAR_6;

 FUNC_3((u32) VAR_1, &VAR_3, &VAR_4, &VAR_5);

 FUNC_1(&VAR_2->mdio_lock);

 VAR_2->write(VAR_2, 0x18, 0, VAR_5);
 FUNC_5();
 VAR_6 = FUNC_0(VAR_0, 0x10 | VAR_4, VAR_3);

 FUNC_2(&VAR_2->mdio_lock);

 return VAR_6;
}

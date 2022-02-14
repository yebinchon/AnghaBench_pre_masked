
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {struct mii_bus* ext_mbus; } ;
struct mii_bus {int mdio_lock; int (* read ) (struct mii_bus*,int ,int ) ;int (* write ) (struct mii_bus*,int ,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mii_bus*,int ,int ,int ) ;
 int FUNC_5 (struct mii_bus*,int ,int ,int ) ;
 int FUNC_6 (struct mii_bus*,int ,int ,int ) ;
 int FUNC_7 (struct mii_bus*,int ,int ,int ) ;
 int FUNC_8 (struct mii_bus*,int ,int ,int ) ;
 int FUNC_9 (struct mii_bus*,int ,int ,int ) ;
 int FUNC_10 (struct mii_bus*,int ,int ,int ) ;
 int FUNC_11 (struct mii_bus*,int ,int ) ;

int FUNC_12(struct rtl8366_smi *VAR_9, u32 VAR_10, u32 *VAR_11)
{
 u32 VAR_12 = VAR_8;
 struct mii_bus *VAR_13 = VAR_9->ext_mbus;

 FUNC_0(FUNC_1());

 FUNC_2(&VAR_13->mdio_lock);

 VAR_13->write(VAR_13, VAR_12, VAR_7, VAR_6);


 VAR_13->write(VAR_13, VAR_12, VAR_2, VAR_1);


 VAR_13->write(VAR_13, VAR_12, VAR_7, VAR_6);


 VAR_13->write(VAR_13, VAR_12, VAR_0, VAR_10);


 VAR_13->write(VAR_13, VAR_12, VAR_7, VAR_6);


 VAR_13->write(VAR_13, VAR_12, VAR_3, VAR_5);


 VAR_13->write(VAR_9->ext_mbus, VAR_12, VAR_7, VAR_6);


 *VAR_11 = VAR_13->read(VAR_13, VAR_12, VAR_4);

 FUNC_3(&VAR_13->mdio_lock);

 return 0;
}

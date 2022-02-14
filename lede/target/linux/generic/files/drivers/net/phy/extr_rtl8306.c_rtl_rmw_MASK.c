
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_dev {int dummy; } ;
struct rtl_priv {struct mii_bus* bus; } ;
struct mii_bus {int (* read ) (struct mii_bus*,unsigned int,unsigned int) ;int (* write ) (struct mii_bus*,unsigned int,unsigned int,int ) ;} ;


 int FUNC_0 (struct rtl_priv*,unsigned int) ;
 int FUNC_1 (struct mii_bus*,unsigned int,unsigned int) ;
 int FUNC_2 (struct mii_bus*,unsigned int,unsigned int,int ) ;
 int FUNC_3 (struct mii_bus*,unsigned int,unsigned int) ;
 struct rtl_priv* FUNC_4 (struct switch_dev*) ;

__attribute__((used)) static inline u16
FUNC_5(struct switch_dev *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_4(VAR_0);
 struct mii_bus *VAR_7 = VAR_6->bus;
 u16 VAR_8;

 FUNC_0(VAR_6, VAR_1);
 VAR_8 = VAR_7->read(VAR_7, VAR_2, VAR_3);
 VAR_8 &= ~VAR_4;
 VAR_8 |= VAR_5;
 VAR_7->write(VAR_7, VAR_2, VAR_3, VAR_8);
 return VAR_7->read(VAR_7, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_dev {int dummy; } ;
struct rtl_priv {struct mii_bus* bus; } ;
struct mii_bus {int (* read ) (struct mii_bus*,unsigned int,unsigned int) ;int (* write ) (struct mii_bus*,unsigned int,unsigned int,int ) ;} ;


 int FUNC_0 (struct rtl_priv*,unsigned int) ;
 int FUNC_1 (struct mii_bus*,unsigned int,unsigned int,int ) ;
 int FUNC_2 (struct mii_bus*,unsigned int,unsigned int) ;
 struct rtl_priv* FUNC_3 (struct switch_dev*) ;

__attribute__((used)) static inline int
FUNC_4(struct switch_dev *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3, u16 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_0);
 struct mii_bus *VAR_6 = VAR_5->bus;

 FUNC_0(VAR_5, VAR_1);
 VAR_6->write(VAR_6, VAR_2, VAR_3, VAR_4);
 VAR_6->read(VAR_6, VAR_2, VAR_3);
 return 0;
}

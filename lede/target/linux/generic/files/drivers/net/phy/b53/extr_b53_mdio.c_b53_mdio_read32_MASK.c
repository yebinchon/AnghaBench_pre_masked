
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mii_bus {int dummy; } ;
struct b53_device {struct mii_bus* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b53_device*,int ,int ,int ) ;
 int FUNC_1 (struct mii_bus*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct b53_device *VAR_4, u8 VAR_5, u8 VAR_6, u32 *VAR_7)
{
 struct mii_bus *VAR_8 = VAR_4->priv;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_1);
 if (VAR_9)
  return VAR_9;

 *VAR_7 = FUNC_1(VAR_8, VAR_0, VAR_2);
 *VAR_7 |= FUNC_1(VAR_8, VAR_0, VAR_3) << 16;

 return 0;
}

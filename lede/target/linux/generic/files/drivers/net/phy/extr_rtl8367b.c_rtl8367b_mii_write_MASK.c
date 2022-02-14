
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl8366_smi {int dummy; } ;
struct mii_bus {struct rtl8366_smi* priv; } ;


 int FUNC_0 (struct rtl8366_smi*,int,int,int *) ;
 int FUNC_1 (struct rtl8366_smi*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 struct rtl8366_smi *VAR_4 = VAR_0->priv;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;


 (void) FUNC_0(VAR_4, VAR_1, VAR_2, &VAR_5);

 return VAR_6;
}

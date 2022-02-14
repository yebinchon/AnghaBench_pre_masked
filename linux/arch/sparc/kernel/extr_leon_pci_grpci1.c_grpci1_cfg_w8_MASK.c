
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct grpci1_priv {int dummy; } ;


 int FUNC_0 (struct grpci1_priv*,unsigned int,unsigned int,int,int*) ;
 int FUNC_1 (struct grpci1_priv*,unsigned int,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct grpci1_priv *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, int VAR_3, u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3 & ~0x3, &VAR_6);
 if (VAR_5 != 0)
  return VAR_5;
 VAR_6 = (VAR_6 & ~(0xff << (8 * (VAR_3 & 0x3)))) |
     ((0xff & VAR_4) << (8 * (VAR_3 & 0x3)));
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3 & ~0x3, VAR_6);
}

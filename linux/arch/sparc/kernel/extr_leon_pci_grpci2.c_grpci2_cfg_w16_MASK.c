
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct grpci2_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct grpci2_priv*,unsigned int,unsigned int,int,int*) ;
 int FUNC_1 (struct grpci2_priv*,unsigned int,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct grpci2_priv *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, int VAR_4, u32 VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 if (VAR_4 & 0x1)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4&~3, &VAR_7);
 if (VAR_6)
  return VAR_6;
 VAR_7 = (VAR_7 & ~(0xffff << (8 * (VAR_4 & 0x3)))) |
     ((0xffff & VAR_5) << (8 * (VAR_4 & 0x3)));
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4 & ~0x3, VAR_7);
}

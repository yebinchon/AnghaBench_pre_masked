
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cxd2841er_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxd2841er_priv*,int ,int,int*,int) ;
 int FUNC_1 (struct cxd2841er_priv*,int ,int,int) ;

__attribute__((used)) static u16 FUNC_2(struct cxd2841er_priv *VAR_1)
{
 u8 VAR_2[2];


 FUNC_1(VAR_1, VAR_0, 0x00, 0xa0);





 FUNC_0(VAR_1, VAR_0, 0x1f, VAR_2, 2);
 return ((((u16)VAR_2[0] & 0x1F) << 8) | (u16)(VAR_2[1] & 0xFF)) << 3;
}

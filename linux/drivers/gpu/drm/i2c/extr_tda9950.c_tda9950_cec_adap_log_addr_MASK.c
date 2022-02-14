
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct tda9950_priv {int addresses; int client; } ;
struct cec_adapter {struct tda9950_priv* priv; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_2, u8 VAR_3)
{
 struct tda9950_priv *VAR_4 = VAR_2->priv;
 u16 VAR_5;
 u8 VAR_6[2];

 if (VAR_3 == VAR_0)
  VAR_5 = VAR_4->addresses = 0;
 else
  VAR_5 = VAR_4->addresses |= FUNC_0(VAR_3);


 VAR_5 &= 0x7fff;
 VAR_6[0] = VAR_5 >> 8;
 VAR_6[1] = VAR_5;

 return FUNC_1(VAR_4->client, VAR_1, VAR_6, 2);
}

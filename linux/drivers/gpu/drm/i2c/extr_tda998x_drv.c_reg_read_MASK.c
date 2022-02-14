
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
typedef int u16 ;
struct tda998x_priv {int dummy; } ;


 int FUNC_0 (struct tda998x_priv*,int ,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct tda998x_priv *VAR_0, u16 VAR_1)
{
 u8 VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_aidet_priv {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct uniphier_aidet_priv*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uniphier_aidet_priv *VAR_1,
       unsigned long VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_0 + VAR_2 / 32 * 4;
 VAR_5 = FUNC_0(VAR_2 % 32);

 FUNC_1(VAR_1, VAR_4, VAR_5, VAR_3 ? VAR_5 : 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_mdmac_desc {int dummy; } ;
struct uniphier_mdmac_chan {int dummy; } ;


 int FUNC_0 (struct uniphier_mdmac_chan*,struct uniphier_mdmac_desc*) ;
 struct uniphier_mdmac_desc* FUNC_1 (struct uniphier_mdmac_chan*) ;

__attribute__((used)) static void FUNC_2(struct uniphier_mdmac_chan *VAR_0)
{
 struct uniphier_mdmac_desc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0, VAR_1);
}

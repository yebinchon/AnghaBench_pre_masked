
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int sclk; int aclk; int hclk; int dmaclk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct rk_crypto_info *VAR_0)
{
 FUNC_0(VAR_0->dmaclk);
 FUNC_0(VAR_0->hclk);
 FUNC_0(VAR_0->aclk);
 FUNC_0(VAR_0->sclk);
}

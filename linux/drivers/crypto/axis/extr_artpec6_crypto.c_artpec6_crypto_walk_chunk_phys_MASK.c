
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_walk {scalar_t__ offset; int sg; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static dma_addr_t
FUNC_1(const struct artpec6_crypto_walk *VAR_0)
{
 return FUNC_0(VAR_0->sg) + VAR_0->offset;
}

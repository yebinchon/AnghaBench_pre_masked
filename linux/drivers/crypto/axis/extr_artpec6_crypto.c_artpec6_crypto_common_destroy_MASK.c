
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_req_common {int * dma; } ;
struct artpec6_crypto {int dma_cache; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct artpec6_crypto_req_common*) ;
 struct artpec6_crypto* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct artpec6_crypto_req_common *VAR_1)
{
 struct artpec6_crypto *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->dma);
 FUNC_3(VAR_2->dma_cache, VAR_1->dma);
 VAR_1->dma = ((void*)0);
 return 0;
}

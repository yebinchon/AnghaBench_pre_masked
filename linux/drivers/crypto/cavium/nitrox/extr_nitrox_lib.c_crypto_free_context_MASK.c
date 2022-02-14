
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ctx_hdr {int dma; int vaddr; int pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct crypto_ctx_hdr*) ;

void FUNC_2(void *VAR_0)
{
 struct crypto_ctx_hdr *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0;
 FUNC_0(VAR_1->pool, VAR_1->vaddr, VAR_1->dma);
 FUNC_1(VAR_1);
}

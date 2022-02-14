
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct artpec6_crypto_req_common {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 uintptr_t VAR_0 ;
 int FUNC_0 (struct artpec6_crypto_req_common*,struct page*,size_t,size_t,int,int *) ;
 struct page* FUNC_1 (void*) ;

__attribute__((used)) static int
FUNC_2(struct artpec6_crypto_req_common *VAR_1,
         void *VAR_2, size_t VAR_3,
         enum dma_data_direction VAR_4,
         dma_addr_t *VAR_5)
{
 struct page *VAR_6 = FUNC_1(VAR_2);
 size_t VAR_7 = (uintptr_t)VAR_2 & ~VAR_0;

 return FUNC_0(VAR_1, VAR_6, VAR_7, VAR_3, VAR_4,
       VAR_5);
}

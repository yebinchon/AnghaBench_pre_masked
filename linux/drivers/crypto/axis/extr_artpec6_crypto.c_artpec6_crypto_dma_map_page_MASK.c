
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
struct artpec6_crypto_req_common {struct artpec6_crypto_dma_descriptors* dma; } ;
struct artpec6_crypto_dma_map {size_t size; int dir; int dma_addr; } ;
struct artpec6_crypto_dma_descriptors {scalar_t__ map_count; struct artpec6_crypto_dma_map* maps; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (struct artpec6_crypto_dma_map*) ;
 int VAR_0 ;
 struct device* VAR_1 ;
 int FUNC_1 (struct device*,struct page*,size_t,size_t,int) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;

__attribute__((used)) static int FUNC_3(struct artpec6_crypto_req_common *VAR_2,
          struct page *VAR_3, size_t VAR_4,
          size_t VAR_5,
          enum dma_data_direction VAR_6,
          dma_addr_t *VAR_7)
{
 struct artpec6_crypto_dma_descriptors *VAR_8 = VAR_2->dma;
 struct device *VAR_9 = VAR_1;
 struct artpec6_crypto_dma_map *VAR_10;
 dma_addr_t VAR_11;

 *VAR_7 = 0;

 if (VAR_8->map_count >= FUNC_0(VAR_8->maps))
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
 if (FUNC_2(VAR_9, VAR_11))
  return -VAR_0;

 VAR_10 = &VAR_8->maps[VAR_8->map_count++];
 VAR_10->size = VAR_5;
 VAR_10->dma_addr = VAR_11;
 VAR_10->dir = VAR_6;

 *VAR_7 = VAR_11;

 return 0;
}

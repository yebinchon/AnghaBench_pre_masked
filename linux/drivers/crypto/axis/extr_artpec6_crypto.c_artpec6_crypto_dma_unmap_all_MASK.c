
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct artpec6_crypto_req_common {struct artpec6_crypto_dma_descriptors* dma; } ;
struct artpec6_crypto_dma_map {int dir; int size; int dma_addr; } ;
struct artpec6_crypto_dma_descriptors {int map_count; struct artpec6_crypto_dma_map* maps; } ;


 struct device* VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct artpec6_crypto_req_common *VAR_1)
{
 struct artpec6_crypto_dma_descriptors *VAR_2 = VAR_1->dma;
 struct device *VAR_3 = VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->map_count; VAR_4++) {
  struct artpec6_crypto_dma_map *VAR_5 = &VAR_2->maps[VAR_4];

  FUNC_0(VAR_3, VAR_5->dma_addr, VAR_5->size, VAR_5->dir);
 }

 VAR_2->map_count = 0;
}

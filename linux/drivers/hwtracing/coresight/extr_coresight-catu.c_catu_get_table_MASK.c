
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_pages {int * pages; scalar_t__* daddrs; } ;
struct tmc_sg_table {struct tmc_pages table_pages; } ;
typedef scalar_t__ dma_addr_t ;
typedef int cate_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct tmc_sg_table*) ;

__attribute__((used)) static inline cate_t *FUNC_2(struct tmc_sg_table *VAR_2,
         unsigned long VAR_3,
         dma_addr_t *VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6, VAR_7, VAR_8;
 struct tmc_pages *VAR_9 = &VAR_2->table_pages;
 void *VAR_10;


 VAR_3 %= VAR_5;





 VAR_6 = VAR_3 >> 20;

 VAR_7 = VAR_6 / VAR_0;
 VAR_8 = (VAR_6 % VAR_0) * VAR_1;
 if (VAR_4)
  *VAR_4 = VAR_9->daddrs[VAR_7] + VAR_8;
 VAR_10 = FUNC_0(VAR_9->pages[VAR_7]);
 return (cate_t *)((unsigned long)VAR_10 + VAR_8);
}

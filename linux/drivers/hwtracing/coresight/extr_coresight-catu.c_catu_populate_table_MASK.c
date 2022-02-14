
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* daddrs; } ;
struct tmc_sg_table {int dev; TYPE_1__ data_pages; } ;
typedef int dma_addr_t ;
typedef int cate_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int ,char*,unsigned long,int,int,...) ;
 int * FUNC_1 (struct tmc_sg_table*,unsigned long,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 unsigned long FUNC_4 (struct tmc_sg_table*) ;
 int FUNC_5 (struct tmc_sg_table*) ;

__attribute__((used)) static void
FUNC_6(struct tmc_sg_table *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12;
 dma_addr_t VAR_13;
 dma_addr_t VAR_14, VAR_15, VAR_16;
 cate_t *VAR_17, *VAR_18;

 VAR_11 = FUNC_4(VAR_6);
 VAR_8 = VAR_9 = 0;
 VAR_10 = 0;

 VAR_17 = FUNC_1(VAR_6, 0, &VAR_16);
 VAR_14 = 0;

 while (VAR_10 < VAR_11) {






  VAR_12 = (VAR_10 + VAR_5) < VAR_11 ?
       (VAR_10 + VAR_5) : VAR_11;
  for (VAR_7 = 0; VAR_10 < VAR_12;
       VAR_7++, VAR_10 += VAR_3) {

   VAR_13 = VAR_6->data_pages.daddrs[VAR_8] +
         VAR_9 * VAR_3;
   FUNC_0(VAR_6->dev,
    "[table %5ld:%03d] 0x%llx\n",
    (VAR_10 >> 20), VAR_7, VAR_13);
   VAR_17[VAR_7] = FUNC_2(VAR_13);

   VAR_9 = (VAR_9 + 1) % VAR_2;
   if (VAR_9 == 0)
    VAR_8++;
  }






  if (VAR_10 == VAR_11) {
   FUNC_3(&VAR_17[VAR_7], 0,
          sizeof(cate_t) * (VAR_4 - VAR_7));
   VAR_15 = 0;
  } else {
   VAR_18 = FUNC_1(VAR_6,
          VAR_10, &VAR_15);
  }

  VAR_17[VAR_1] = FUNC_2(VAR_14);
  VAR_17[VAR_0] = FUNC_2(VAR_15);

  FUNC_0(VAR_6->dev,
   "[table%5ld]: Cur: 0x%llx Prev: 0x%llx, Next: 0x%llx\n",
   (VAR_10 >> 20) - 1, VAR_16, VAR_14, VAR_15);


  if (VAR_15) {
   VAR_14 = VAR_16;
   VAR_16 = VAR_15;
   VAR_17 = VAR_18;
  }
 }


 FUNC_5(VAR_6);
}

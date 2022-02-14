
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hidma_lldev {int nr_tres; int tre_ring_size; int msi_support; scalar_t__ evca; int evre_dma; scalar_t__ trca; int tre_dma; scalar_t__ tre_write_offset; scalar_t__ evre_processed_off; scalar_t__ tre_processed_off; int pending_tre_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hidma_lldev*) ;
 int FUNC_2 (struct hidma_lldev*) ;
 int FUNC_3 (struct hidma_lldev*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,scalar_t__) ;

int FUNC_8(struct hidma_lldev *VAR_10)
{
 int VAR_11;
 u64 VAR_12;
 u32 VAR_13;
 u32 VAR_14 = VAR_10->nr_tres;

 FUNC_0(&VAR_10->pending_tre_count, 0);
 VAR_10->tre_processed_off = 0;
 VAR_10->evre_processed_off = 0;
 VAR_10->tre_write_offset = 0;


 FUNC_7(0, VAR_10->evca + VAR_1);


 VAR_13 = FUNC_5(VAR_10->evca + VAR_2);
 FUNC_7(VAR_13, VAR_10->evca + VAR_0);

 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11)
  return VAR_11;





 VAR_13 = FUNC_5(VAR_10->evca + VAR_2);
 FUNC_7(VAR_13, VAR_10->evca + VAR_0);


 FUNC_7(0, VAR_10->evca + VAR_1);

 VAR_12 = VAR_10->tre_dma;
 FUNC_7(FUNC_4(VAR_12), VAR_10->trca + VAR_9);
 FUNC_7(FUNC_6(VAR_12), VAR_10->trca + VAR_7);
 FUNC_7(VAR_10->tre_ring_size, VAR_10->trca + VAR_8);

 VAR_12 = VAR_10->evre_dma;
 FUNC_7(FUNC_4(VAR_12), VAR_10->evca + VAR_5);
 FUNC_7(FUNC_6(VAR_12), VAR_10->evca + VAR_3);
 FUNC_7(VAR_6 * VAR_14,
   VAR_10->evca + VAR_4);


 FUNC_3(VAR_10, VAR_10->msi_support);

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11)
  return VAR_11;

 return VAR_11;
}

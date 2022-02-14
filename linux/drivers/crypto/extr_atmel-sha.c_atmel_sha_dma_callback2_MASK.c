
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct atmel_sha_dma {int nents; int last_sg_length; struct scatterlist* sg; int chan; } ;
struct atmel_sha_dev {int is_async; int resume; int dev; struct atmel_sha_dma dma_lch_in; } ;


 int VAR_0 ;
 int FUNC_0 (struct atmel_sha_dev*,int ) ;
 int FUNC_1 (int ,struct scatterlist*,int,int ) ;
 int FUNC_2 (int ) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct atmel_sha_dev *VAR_2 = VAR_1;
 struct atmel_sha_dma *VAR_3 = &VAR_2->dma_lch_in;
 struct scatterlist *VAR_4;
 int VAR_5;

 FUNC_2(VAR_3->chan);
 FUNC_1(VAR_2->dev, VAR_3->sg, VAR_3->nents, VAR_0);

 VAR_4 = VAR_3->sg;
 for (VAR_5 = 0; VAR_5 < VAR_3->nents - 1; ++VAR_5)
  VAR_4 = FUNC_3(VAR_4);
 VAR_4->length = VAR_3->last_sg_length;

 VAR_2->is_async = 1;
 (void)FUNC_0(VAR_2, VAR_2->resume);
}

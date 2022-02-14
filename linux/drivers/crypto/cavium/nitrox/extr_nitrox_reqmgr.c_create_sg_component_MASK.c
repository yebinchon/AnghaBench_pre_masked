
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct nitrox_softreq {int gfp; struct nitrox_device* ndev; } ;
struct nitrox_sgtable {size_t sgcomp_len; int sgcomp_dma; struct nitrox_sgcomp* sgcomp; struct scatterlist* sg; } ;
struct nitrox_sgcomp {int * dma; int * len; } ;
struct nitrox_device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct nitrox_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct nitrox_sgcomp*,size_t,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nitrox_sgcomp*) ;
 struct nitrox_sgcomp* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_11(struct nitrox_softreq *VAR_2,
          struct nitrox_sgtable *VAR_3, int VAR_4)
{
 struct nitrox_device *VAR_5 = VAR_2->ndev;
 struct nitrox_sgcomp *VAR_6;
 struct scatterlist *VAR_7;
 dma_addr_t VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = FUNC_7(VAR_4, 4) / 4;


 VAR_9 = VAR_12 * sizeof(*VAR_6);
 VAR_6 = FUNC_6(VAR_9, VAR_2->gfp);
 if (!VAR_6)
  return -VAR_1;

 VAR_3->sgcomp = VAR_6;

 VAR_7 = VAR_3->sg;

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < 4 && VAR_7; VAR_11++) {
   VAR_6[VAR_10].len[VAR_11] = FUNC_1(FUNC_9(VAR_7));
   VAR_6[VAR_10].dma[VAR_11] = FUNC_2(FUNC_8(VAR_7));
   VAR_7 = FUNC_10(VAR_7);
  }
 }

 VAR_8 = FUNC_3(FUNC_0(VAR_5), VAR_3->sgcomp, VAR_9, VAR_0);
 if (FUNC_4(FUNC_0(VAR_5), VAR_8)) {
  FUNC_5(VAR_3->sgcomp);
  VAR_3->sgcomp = ((void*)0);
  return -VAR_1;
 }

 VAR_3->sgcomp_dma = VAR_8;
 VAR_3->sgcomp_len = VAR_9;

 return 0;
}

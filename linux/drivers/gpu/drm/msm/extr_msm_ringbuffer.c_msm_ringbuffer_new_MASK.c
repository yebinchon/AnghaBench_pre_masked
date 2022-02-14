
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msm_ringbuffer {int id; int fctx; int lock; int submits; int memptrs_iova; void* memptrs; scalar_t__ start; scalar_t__ cur; scalar_t__ next; scalar_t__ end; int bo; int iova; struct msm_gpu* gpu; } ;
struct msm_gpu {int dev; int aspace; } ;
typedef int name ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct msm_ringbuffer* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 struct msm_ringbuffer* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,int,int ,int ,int *,int *) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct msm_ringbuffer*) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (int *) ;

struct msm_ringbuffer *FUNC_13(struct msm_gpu *VAR_4, int VAR_5,
  void *VAR_6, uint64_t VAR_7)
{
 struct msm_ringbuffer *VAR_8;
 char VAR_9[32];
 int VAR_10;


 FUNC_0(!FUNC_5(VAR_3));

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  goto fail;
 }

 VAR_8->gpu = VAR_4;
 VAR_8->id = VAR_5;

 VAR_8->start = FUNC_8(VAR_4->dev, VAR_3,
  VAR_2, VAR_4->aspace, &VAR_8->bo, &VAR_8->iova);

 if (FUNC_3(VAR_8->start)) {
  VAR_10 = FUNC_4(VAR_8->start);
  VAR_8->start = 0;
  goto fail;
 }

 FUNC_9(VAR_8->bo, "ring%d", VAR_5);

 VAR_8->end = VAR_8->start + (VAR_3 >> 2);
 VAR_8->next = VAR_8->start;
 VAR_8->cur = VAR_8->start;

 VAR_8->memptrs = VAR_6;
 VAR_8->memptrs_iova = VAR_7;

 FUNC_2(&VAR_8->submits);
 FUNC_12(&VAR_8->lock);

 FUNC_11(VAR_9, sizeof(VAR_9), "gpu-ring-%d", VAR_8->id);

 VAR_8->fctx = FUNC_7(VAR_4->dev, VAR_9);

 return VAR_8;

fail:
 FUNC_10(VAR_8);
 return FUNC_1(VAR_10);
}

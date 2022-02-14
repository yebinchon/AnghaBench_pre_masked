
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sahara_sha_reqctx {int digest_size; scalar_t__ context; int context_size; scalar_t__ sg_in_idx; scalar_t__ first; } ;
struct sahara_dev {scalar_t__ context_base; int nb_in_sg; int in_sg; int device; int dma_completion; scalar_t__* hw_phys_desc; TYPE_1__** hw_desc; } ;
struct ahash_request {scalar_t__ result; } ;
struct TYPE_2__ {scalar_t__ next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sahara_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,char*) ;
 struct sahara_dev* VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sahara_dev*) ;
 int FUNC_7 (struct sahara_dev*) ;
 int FUNC_8 (struct sahara_dev*,struct sahara_sha_reqctx*,struct ahash_request*,int ) ;
 int FUNC_9 (struct sahara_dev*,struct sahara_sha_reqctx*,struct ahash_request*,int) ;
 int FUNC_10 (struct ahash_request*) ;
 int FUNC_11 (struct sahara_dev*,scalar_t__,int ) ;
 unsigned long FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct ahash_request *VAR_5)
{
 struct sahara_dev *VAR_6 = VAR_4;
 struct sahara_sha_reqctx *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_10(VAR_5);
 if (!VAR_8)
  return VAR_8;

 if (VAR_7->first) {
  FUNC_9(VAR_6, VAR_7, VAR_5, 0);
  VAR_6->hw_desc[0]->next = 0;
  VAR_7->first = 0;
 } else {
  FUNC_3(VAR_6->context_base, VAR_7->context, VAR_7->context_size);

  FUNC_8(VAR_6, VAR_7, VAR_5, 0);
  VAR_6->hw_desc[0]->next = VAR_6->hw_phys_desc[1];
  FUNC_9(VAR_6, VAR_7, VAR_5, 1);
  VAR_6->hw_desc[1]->next = 0;
 }

 FUNC_6(VAR_6);
 FUNC_7(VAR_6);

 FUNC_5(&VAR_6->dma_completion);

 FUNC_11(VAR_6, VAR_6->hw_phys_desc[0], VAR_2);

 VAR_9 = FUNC_12(&VAR_6->dma_completion,
    FUNC_4(VAR_3));
 if (!VAR_9) {
  FUNC_1(VAR_6->device, "SHA timeout\n");
  return -VAR_1;
 }

 if (VAR_7->sg_in_idx)
  FUNC_2(VAR_6->device, VAR_6->in_sg, VAR_6->nb_in_sg,
        VAR_0);

 FUNC_3(VAR_7->context, VAR_6->context_base, VAR_7->context_size);

 if (VAR_5->result)
  FUNC_3(VAR_5->result, VAR_7->context, VAR_7->digest_size);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dma_address; int length; } ;
struct sahara_sha_reqctx {int total; struct scatterlist* in_sg; } ;
struct sahara_dev {int nb_in_sg; scalar_t__* hw_phys_link; TYPE_1__** hw_link; struct scatterlist* in_sg; int device; scalar_t__ nb_out_sg; } ;
struct TYPE_2__ {scalar_t__ next; int p; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,struct scatterlist*,scalar_t__,int ) ;
 int FUNC_2 (struct scatterlist*,int ) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct sahara_dev *VAR_4,
           struct sahara_sha_reqctx *VAR_5,
           int VAR_6)
{
 struct scatterlist *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_4->in_sg = VAR_5->in_sg;

 VAR_4->nb_in_sg = FUNC_2(VAR_4->in_sg, VAR_5->total);
 if (VAR_4->nb_in_sg < 0) {
  FUNC_0(VAR_4->device, "Invalid numbers of src SG.\n");
  return VAR_4->nb_in_sg;
 }
 if ((VAR_4->nb_in_sg) > VAR_3) {
  FUNC_0(VAR_4->device, "not enough hw links (%d)\n",
   VAR_4->nb_in_sg + VAR_4->nb_out_sg);
  return -VAR_2;
 }

 VAR_7 = VAR_4->in_sg;
 VAR_9 = FUNC_1(VAR_4->device, VAR_4->in_sg, VAR_4->nb_in_sg, VAR_0);
 if (!VAR_9)
  return -VAR_1;

 for (VAR_8 = VAR_6; VAR_8 < VAR_4->nb_in_sg + VAR_6; VAR_8++) {
  VAR_4->hw_link[VAR_8]->len = VAR_7->length;
  VAR_4->hw_link[VAR_8]->p = VAR_7->dma_address;
  if (VAR_8 == (VAR_4->nb_in_sg + VAR_6 - 1)) {
   VAR_4->hw_link[VAR_8]->next = 0;
  } else {
   VAR_4->hw_link[VAR_8]->next = VAR_4->hw_phys_link[VAR_8 + 1];
   VAR_7 = FUNC_3(VAR_7);
  }
 }

 return VAR_8;
}

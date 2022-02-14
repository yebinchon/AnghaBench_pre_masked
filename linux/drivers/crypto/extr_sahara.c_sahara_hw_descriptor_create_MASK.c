
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dma_address; int length; } ;
struct sahara_dev {int flags; int nb_in_sg; int nb_out_sg; struct scatterlist* in_sg; int device; struct scatterlist* out_sg; scalar_t__* hw_phys_desc; TYPE_1__** hw_desc; scalar_t__ total; scalar_t__* hw_phys_link; TYPE_2__** hw_link; scalar_t__ key_phys_base; scalar_t__ iv_phys_base; int key_base; struct sahara_ctx* ctx; } ;
struct sahara_ctx {int flags; scalar_t__ keylen; int key; } ;
struct TYPE_4__ {scalar_t__ next; int p; int len; } ;
struct TYPE_3__ {scalar_t__ next; scalar_t__ len2; scalar_t__ len1; int hdr; scalar_t__ p2; scalar_t__ p1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,struct scatterlist*,scalar_t__,int ) ;
 int FUNC_2 (int ,struct scatterlist*,int,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct sahara_dev*) ;
 int FUNC_5 (struct sahara_dev*) ;
 int FUNC_6 (struct sahara_dev*) ;
 int FUNC_7 (struct sahara_dev*) ;
 int FUNC_8 (struct sahara_dev*,scalar_t__,int ) ;
 void* FUNC_9 (struct scatterlist*,scalar_t__) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_11(struct sahara_dev *VAR_8)
{
 struct sahara_ctx *VAR_9 = VAR_8->ctx;
 struct scatterlist *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;


 if (VAR_9->flags & VAR_5) {
  FUNC_3(VAR_8->key_base, VAR_9->key, VAR_9->keylen);
  VAR_9->flags &= ~VAR_5;

  if (VAR_8->flags & VAR_4) {
   VAR_8->hw_desc[VAR_14]->len1 = VAR_0;
   VAR_8->hw_desc[VAR_14]->p1 = VAR_8->iv_phys_base;
  } else {
   VAR_8->hw_desc[VAR_14]->len1 = 0;
   VAR_8->hw_desc[VAR_14]->p1 = 0;
  }
  VAR_8->hw_desc[VAR_14]->len2 = VAR_9->keylen;
  VAR_8->hw_desc[VAR_14]->p2 = VAR_8->key_phys_base;
  VAR_8->hw_desc[VAR_14]->next = VAR_8->hw_phys_desc[1];

  VAR_8->hw_desc[VAR_14]->hdr = FUNC_5(VAR_8);

  VAR_14++;
 }

 VAR_8->nb_in_sg = FUNC_9(VAR_8->in_sg, VAR_8->total);
 if (VAR_8->nb_in_sg < 0) {
  FUNC_0(VAR_8->device, "Invalid numbers of src SG.\n");
  return VAR_8->nb_in_sg;
 }
 VAR_8->nb_out_sg = FUNC_9(VAR_8->out_sg, VAR_8->total);
 if (VAR_8->nb_out_sg < 0) {
  FUNC_0(VAR_8->device, "Invalid numbers of dst SG.\n");
  return VAR_8->nb_out_sg;
 }
 if ((VAR_8->nb_in_sg + VAR_8->nb_out_sg) > VAR_6) {
  FUNC_0(VAR_8->device, "not enough hw links (%d)\n",
   VAR_8->nb_in_sg + VAR_8->nb_out_sg);
  return -VAR_3;
 }

 VAR_11 = FUNC_1(VAR_8->device, VAR_8->in_sg, VAR_8->nb_in_sg,
    VAR_2);
 if (VAR_11 != VAR_8->nb_in_sg) {
  FUNC_0(VAR_8->device, "couldn't map in sg\n");
  goto unmap_in;
 }
 VAR_11 = FUNC_1(VAR_8->device, VAR_8->out_sg, VAR_8->nb_out_sg,
    VAR_1);
 if (VAR_11 != VAR_8->nb_out_sg) {
  FUNC_0(VAR_8->device, "couldn't map out sg\n");
  goto unmap_out;
 }


 VAR_8->hw_desc[VAR_14]->p1 = VAR_8->hw_phys_link[0];
 VAR_10 = VAR_8->in_sg;
 for (VAR_12 = 0; VAR_12 < VAR_8->nb_in_sg; VAR_12++) {
  VAR_8->hw_link[VAR_12]->len = VAR_10->length;
  VAR_8->hw_link[VAR_12]->p = VAR_10->dma_address;
  if (VAR_12 == (VAR_8->nb_in_sg - 1)) {
   VAR_8->hw_link[VAR_12]->next = 0;
  } else {
   VAR_8->hw_link[VAR_12]->next = VAR_8->hw_phys_link[VAR_12 + 1];
   VAR_10 = FUNC_10(VAR_10);
  }
 }


 VAR_8->hw_desc[VAR_14]->p2 = VAR_8->hw_phys_link[VAR_12];
 VAR_10 = VAR_8->out_sg;
 for (VAR_13 = VAR_12; VAR_13 < VAR_8->nb_out_sg + VAR_12; VAR_13++) {
  VAR_8->hw_link[VAR_13]->len = VAR_10->length;
  VAR_8->hw_link[VAR_13]->p = VAR_10->dma_address;
  if (VAR_13 == (VAR_8->nb_out_sg + VAR_12 - 1)) {
   VAR_8->hw_link[VAR_13]->next = 0;
  } else {
   VAR_8->hw_link[VAR_13]->next = VAR_8->hw_phys_link[VAR_13 + 1];
   VAR_10 = FUNC_10(VAR_10);
  }
 }


 VAR_8->hw_desc[VAR_14]->hdr = FUNC_4(VAR_8);
 VAR_8->hw_desc[VAR_14]->len1 = VAR_8->total;
 VAR_8->hw_desc[VAR_14]->len2 = VAR_8->total;
 VAR_8->hw_desc[VAR_14]->next = 0;

 FUNC_6(VAR_8);
 FUNC_7(VAR_8);

 FUNC_8(VAR_8, VAR_8->hw_phys_desc[0], VAR_7);

 return 0;

unmap_out:
 FUNC_2(VAR_8->device, VAR_8->out_sg, VAR_8->nb_out_sg,
  VAR_1);
unmap_in:
 FUNC_2(VAR_8->device, VAR_8->in_sg, VAR_8->nb_in_sg,
  VAR_2);

 return -VAR_3;
}

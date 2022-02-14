
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sahara_sha_reqctx {scalar_t__ total; int sg_in_idx; unsigned int context_size; scalar_t__ first; } ;
struct sahara_dev {TYPE_2__** hw_link; TYPE_1__** hw_desc; int context_phys_base; scalar_t__* hw_phys_link; } ;
struct ahash_request {int dummy; } ;
struct TYPE_4__ {unsigned int len; scalar_t__ next; int p; } ;
struct TYPE_3__ {scalar_t__ len1; unsigned int len2; scalar_t__ p2; scalar_t__ p1; int hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sahara_dev*,struct sahara_sha_reqctx*,int) ;
 int FUNC_1 (struct sahara_dev*,struct sahara_sha_reqctx*) ;

__attribute__((used)) static int FUNC_2(struct sahara_dev *VAR_1,
      struct sahara_sha_reqctx *VAR_2,
      struct ahash_request *VAR_3,
      int VAR_4)
{
 unsigned VAR_5;
 int VAR_6 = VAR_4;

 if (VAR_2->first)

  VAR_1->hw_desc[VAR_4]->hdr = FUNC_1(VAR_1, VAR_2);
 else

  VAR_1->hw_desc[VAR_4]->hdr = VAR_0;

 VAR_1->hw_desc[VAR_4]->len1 = VAR_2->total;
 if (VAR_1->hw_desc[VAR_4]->len1 == 0) {

  VAR_1->hw_desc[VAR_4]->p1 = 0;
  VAR_2->sg_in_idx = 0;
 } else {

  VAR_1->hw_desc[VAR_4]->p1 = VAR_1->hw_phys_link[VAR_4];
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4);

  VAR_2->sg_in_idx = VAR_4;
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_1->hw_desc[VAR_4]->p2 = VAR_1->hw_phys_link[VAR_6];


 VAR_5 = VAR_2->context_size;
 VAR_1->hw_link[VAR_6]->p = VAR_1->context_phys_base;

 VAR_1->hw_link[VAR_6]->len = VAR_5;
 VAR_1->hw_desc[VAR_4]->len2 = VAR_5;

 VAR_1->hw_link[VAR_6]->next = 0;

 return 0;
}

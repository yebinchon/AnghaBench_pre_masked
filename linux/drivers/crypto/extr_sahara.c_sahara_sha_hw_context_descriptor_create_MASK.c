
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sahara_sha_reqctx {int context_size; } ;
struct sahara_dev {TYPE_2__** hw_link; int context_phys_base; TYPE_1__** hw_desc; int * hw_phys_link; } ;
struct ahash_request {int dummy; } ;
struct TYPE_4__ {scalar_t__ next; int p; int len; } ;
struct TYPE_3__ {scalar_t__ p2; scalar_t__ len2; int p1; int len1; int hdr; } ;


 int FUNC_0 (struct sahara_dev*,struct sahara_sha_reqctx*) ;

__attribute__((used)) static int FUNC_1(struct sahara_dev *VAR_0,
      struct sahara_sha_reqctx *VAR_1,
      struct ahash_request *VAR_2,
      int VAR_3)
{
 VAR_0->hw_desc[VAR_3]->hdr = FUNC_0(VAR_0, VAR_1);

 VAR_0->hw_desc[VAR_3]->len1 = VAR_1->context_size;
 VAR_0->hw_desc[VAR_3]->p1 = VAR_0->hw_phys_link[VAR_3];
 VAR_0->hw_desc[VAR_3]->len2 = 0;
 VAR_0->hw_desc[VAR_3]->p2 = 0;

 VAR_0->hw_link[VAR_3]->len = VAR_1->context_size;
 VAR_0->hw_link[VAR_3]->p = VAR_0->context_phys_base;
 VAR_0->hw_link[VAR_3]->next = 0;

 return 0;
}

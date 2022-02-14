
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pblk_sec_meta {int dummy; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int nr_ppas; TYPE_2__* bio; void* meta_list; } ;
struct TYPE_4__ {int bi_vcnt; TYPE_1__* bi_io_vec; } ;
struct TYPE_3__ {int bv_page; } ;


 int FUNC_0 (int ,void*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct pblk*,void*,int) ;
 scalar_t__ FUNC_3 (struct pblk*) ;

void FUNC_4(struct pblk *VAR_0, struct nvm_rq *VAR_1)
{
 void *VAR_2 = VAR_1->meta_list;
 void *VAR_3;
 int VAR_4 = 0;

 if (FUNC_3(VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_1->bio->bi_io_vec[VAR_1->bio->bi_vcnt - 1].bv_page);

 for (; VAR_4 < VAR_1->nr_ppas; VAR_4++)
  FUNC_0(FUNC_2(VAR_0, VAR_2, VAR_4),
   VAR_3 + (VAR_4 * sizeof(struct pblk_sec_meta)),
   sizeof(struct pblk_sec_meta));
}

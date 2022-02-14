
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pblk {int dummy; } ;
struct nvm_rq {TYPE_2__* bio; void* meta_list; } ;
struct TYPE_4__ {int bi_vcnt; TYPE_1__* bi_io_vec; } ;
struct TYPE_3__ {int bv_page; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pblk*) ;

void *FUNC_2(struct pblk *VAR_0, struct nvm_rq *VAR_1)
{
 void *VAR_2;

 if (FUNC_1(VAR_0)) {

  VAR_2 = VAR_1->meta_list;
 } else {



  VAR_2 = FUNC_0(
   VAR_1->bio->bi_io_vec[VAR_1->bio->bi_vcnt - 1].bv_page);
 }

 return VAR_2;
}

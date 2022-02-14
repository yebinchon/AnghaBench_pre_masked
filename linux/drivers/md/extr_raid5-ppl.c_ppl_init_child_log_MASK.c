
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {int queue_flags; } ;
struct ppl_log {int use_multippl; int entry_space; int wb_cache_on; int next_io_sector; TYPE_4__* rdev; TYPE_2__* ppl_conf; } ;
struct TYPE_10__ {int size; int sector; } ;
struct md_rdev {int bdev; TYPE_5__ ppl; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_9__ {TYPE_3__ ppl; } ;
struct TYPE_7__ {TYPE_1__* mddev; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ppl_log *VAR_4, struct md_rdev *VAR_5)
{
 struct request_queue *VAR_6;

 if ((VAR_5->ppl.size << 9) >= (VAR_2 +
          VAR_1) * 2) {
  VAR_4->use_multippl = 1;
  FUNC_1(VAR_0,
   &VAR_4->ppl_conf->mddev->flags);
  VAR_4->entry_space = VAR_2;
 } else {
  VAR_4->use_multippl = 0;
  VAR_4->entry_space = (VAR_4->rdev->ppl.size << 9) -
       VAR_1;
 }
 VAR_4->next_io_sector = VAR_5->ppl.sector;

 VAR_6 = FUNC_0(VAR_5->bdev);
 if (FUNC_2(VAR_3, &VAR_6->queue_flags))
  VAR_4->wb_cache_on = 1;
}

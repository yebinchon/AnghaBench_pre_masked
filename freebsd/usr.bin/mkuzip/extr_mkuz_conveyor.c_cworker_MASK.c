
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mkuz_conveyor {int results; int wrk_queue; } ;
struct mkuz_cfg {scalar_t__ no_zcomp; scalar_t__ en_dedup; TYPE_1__* handler; int cbound_blksz; int comp_level; } ;
struct TYPE_4__ {int blkno; int len; } ;
struct mkuz_blk {TYPE_2__ info; int data; struct mkuz_conveyor* cvp; struct mkuz_cfg* cfp; } ;
struct cw_args {TYPE_2__ info; int data; struct mkuz_conveyor* cvp; struct mkuz_cfg* cfp; } ;
struct TYPE_3__ {int (* f_compress ) (void*,struct mkuz_blk*,struct mkuz_blk*) ;void* (* f_init ) (int *) ;} ;


 struct mkuz_blk* VAR_0 ;
 int FUNC_0 (struct mkuz_blk*) ;
 int FUNC_1 (struct mkuz_blk*) ;
 struct mkuz_blk* FUNC_2 (int ) ;
 struct mkuz_blk* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct mkuz_blk*) ;
 scalar_t__ FUNC_5 (int ,char,int ) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (void*,struct mkuz_blk*,struct mkuz_blk*) ;

__attribute__((used)) static void *
FUNC_8(void *VAR_1)
{
    struct cw_args *VAR_2;
    struct mkuz_cfg *VAR_3;
    struct mkuz_blk *VAR_4, *VAR_5;
    struct mkuz_conveyor *VAR_6;
    void *VAR_7;

    VAR_2 = (struct cw_args *)VAR_1;
    VAR_3 = VAR_2->cfp;
    VAR_6 = VAR_2->cvp;
    FUNC_1(VAR_2);
    VAR_7 = VAR_3->handler->f_init(&VAR_3->comp_level);
    for (;;) {
        VAR_5 = FUNC_3(VAR_6->wrk_queue);
        if (VAR_5 == VAR_0) {

            FUNC_4(VAR_6->wrk_queue, VAR_5);
            break;
        }
        if (VAR_3->no_zcomp == 0 &&
          FUNC_5(VAR_5->data, '\0', VAR_5->info.len) != 0) {

            VAR_4 = FUNC_2(0);
        } else {
            VAR_4 = FUNC_2(VAR_3->cbound_blksz);
            VAR_3->handler->f_compress(VAR_7, VAR_5, VAR_4);
            if (VAR_3->en_dedup != 0) {
                FUNC_0(VAR_4);
            }
        }
        VAR_4->info.blkno = VAR_5->info.blkno;
        FUNC_4(VAR_6->results, VAR_4);
        FUNC_1(VAR_5);
    }
    return (((void*)0));
}

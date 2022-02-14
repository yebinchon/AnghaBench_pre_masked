
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* entries; } ;
struct ccb_hdr {TYPE_2__ sim_priv; } ;
struct TYPE_8__ {int nact; TYPE_4__* vhba; int inproc; } ;
typedef TYPE_3__ mptest_t ;
struct TYPE_10__ {int tqe; } ;
struct TYPE_9__ {int lock; int done; } ;
struct TYPE_6__ {TYPE_3__* ptr; } ;


 int FUNC_0 (int *,struct ccb_hdr*,int ) ;
 int FUNC_1 (int *,struct ccb_hdr*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_5__ VAR_0 ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct ccb_hdr *VAR_2 = VAR_1;
 mptest_t *VAR_3 = VAR_2->sim_priv.entries[0].ptr;

 FUNC_2(&VAR_3->vhba->lock);
 FUNC_1(&VAR_3->inproc, VAR_2, VAR_0.tqe);
 FUNC_0(&VAR_3->vhba->done, VAR_2, VAR_0.tqe);
 VAR_3->nact -= 1;
 FUNC_4(VAR_3->vhba);
 FUNC_3(&VAR_3->vhba->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * semaphore; } ;
struct TYPE_7__ {int idx; int endidx; TYPE_1__ act; scalar_t__ actidx; } ;
struct hp_sdc_mlc_priv_s {int* tseq; TYPE_4__ trans; } ;
struct TYPE_6__ {int csem; int osem; int isem; struct hp_sdc_mlc_priv_s* priv; } ;
typedef TYPE_2__ hil_mlc ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(hil_mlc *VAR_5)
{
 struct hp_sdc_mlc_priv_s *VAR_6;

 VAR_6 = VAR_5->priv;


 FUNC_0(FUNC_2(&VAR_5->isem));
 FUNC_0(FUNC_2(&VAR_5->osem));

 FUNC_3(&VAR_5->isem);
 FUNC_3(&VAR_5->osem);

 if (FUNC_2(&VAR_5->csem)) {
  if (VAR_6->trans.act.semaphore != &VAR_5->csem)
   goto poll;
  else
   goto busy;
 }

 if (!(VAR_6->tseq[4] & VAR_4))
  goto done;

 poll:
 VAR_6->trans.act.semaphore = &VAR_5->csem;
 VAR_6->trans.actidx = 0;
 VAR_6->trans.idx = 1;
 VAR_6->trans.endidx = 5;
 VAR_6->tseq[0] =
  VAR_1 | VAR_0 | VAR_2;
 VAR_6->tseq[1] = VAR_3;
 VAR_6->tseq[2] = 1;
 VAR_6->tseq[3] = 0;
 VAR_6->tseq[4] = 0;
 FUNC_1(&VAR_6->trans);
 busy:
 return 1;
 done:
 VAR_6->trans.act.semaphore = &VAR_5->osem;
 FUNC_3(&VAR_5->csem);
 return 0;
}

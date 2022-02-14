
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ccb_scsiio {int dummy; } ;
struct TYPE_8__ {TYPE_1__* entries; } ;
struct ccb_hdr {int timeout_ch; TYPE_2__ sim_priv; } ;
struct TYPE_9__ {TYPE_4__* vhba; } ;
typedef TYPE_3__ mptest_t ;
struct TYPE_11__ {int tqe; } ;
struct TYPE_10__ {int lock; int done; int actv; } ;
struct TYPE_7__ {TYPE_3__* ptr; } ;


 struct ccb_hdr* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ccb_hdr*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,struct ccb_scsiio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_5__ VAR_0 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1, int VAR_2)
{
 mptest_t *VAR_3 = VAR_1;
 struct ccb_hdr *VAR_4;
 int VAR_5 = 0;

 FUNC_4(&VAR_3->vhba->lock);
 while ((VAR_4 = FUNC_0(&VAR_3->vhba->actv)) != ((void*)0)) {
  FUNC_1(&VAR_3->vhba->actv, VAR_4, VAR_0.tqe);
                FUNC_3(VAR_3, (struct ccb_scsiio *)VAR_4);
  VAR_5++;
  VAR_4->sim_priv.entries[0].ptr = VAR_3;
  FUNC_2(&VAR_4->timeout_ch);
 }
 if (VAR_5) {
  FUNC_6(VAR_3->vhba);
 } else {
  while ((VAR_4 = FUNC_0(&VAR_3->vhba->done)) != ((void*)0)) {
   FUNC_1(&VAR_3->vhba->done, VAR_4, VAR_0.tqe);
   FUNC_7((union ccb *)VAR_4);
  }
 }
 FUNC_5(&VAR_3->vhba->lock);
}

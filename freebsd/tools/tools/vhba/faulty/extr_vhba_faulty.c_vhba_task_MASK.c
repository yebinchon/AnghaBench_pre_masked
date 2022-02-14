
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ccb_scsiio {int dummy; } ;
struct ccb_hdr {int dummy; } ;
struct TYPE_6__ {scalar_t__ ctr; int dead; TYPE_1__* vhba; } ;
typedef TYPE_2__ faulty_t ;
struct TYPE_7__ {int tqe; } ;
struct TYPE_5__ {int lock; int done; int actv; } ;


 struct ccb_hdr* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ccb_hdr*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,struct ccb_scsiio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1, int VAR_2)
{
 faulty_t *VAR_3 = VAR_1;
 struct ccb_hdr *VAR_4;

 FUNC_4(&VAR_3->vhba->lock);
 while ((VAR_4 = FUNC_0(&VAR_3->vhba->actv)) != ((void*)0)) {
  FUNC_1(&VAR_3->vhba->actv, VAR_4, VAR_0.tqe);
                FUNC_3(VAR_3, (struct ccb_scsiio *)VAR_4);
  if (--VAR_3->ctr == 0) {
   VAR_3->dead = 1;
   VAR_3->ctr = (FUNC_2() & 0xff) + 1;
  }
 }
 while ((VAR_4 = FUNC_0(&VAR_3->vhba->done)) != ((void*)0)) {
  FUNC_1(&VAR_3->vhba->done, VAR_4, VAR_0.tqe);
  FUNC_6((union ccb *)VAR_4);
 }
 FUNC_5(&VAR_3->vhba->lock);
}

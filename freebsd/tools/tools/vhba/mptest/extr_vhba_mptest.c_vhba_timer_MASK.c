
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sim; TYPE_3__* private; } ;
typedef TYPE_2__ vhba_softc_t ;
struct TYPE_5__ {struct cam_path* path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct cam_path {int dummy; } ;
struct TYPE_7__ {int* luns; int tick; } ;
typedef TYPE_3__ mptest_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,void (*) (void*),TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 union ccb* FUNC_2 () ;
 int FUNC_3 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_4 (struct cam_path**,int ,int ,int ,int) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (struct cam_path*) ;
 int VAR_9 ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_10)
{
 int VAR_11;
 vhba_softc_t *VAR_12 = VAR_10;
 mptest_t *VAR_13 = VAR_12->private;
 if (VAR_8) {
  VAR_11 = (VAR_8 & 1)? 0 : 1;
  if (VAR_11 == 0 || VAR_11 == 1) {
   if (VAR_13->luns[VAR_11]) {
    struct cam_path *VAR_14;
    if (VAR_6) {
     if (FUNC_4(&VAR_14, VAR_9, FUNC_1(VAR_12->sim), 0, VAR_11) != VAR_2) {
      goto out;
     }
     VAR_13->luns[VAR_11] = 0;
     FUNC_3(VAR_0, VAR_14, ((void*)0));
     FUNC_6(VAR_14);
    } else {
     VAR_13->luns[VAR_11] = 0;
    }
   }
  }
  VAR_8 &= ~(1 << VAR_11);
 } else if (VAR_7) {
  VAR_11 = (VAR_7 & 1)? 0 : 1;
  if (VAR_11 == 0 || VAR_11 == 1) {
   if (VAR_13->luns[VAR_11] == 0) {
    if (VAR_5) {
     union ccb *VAR_15;
     VAR_15 = FUNC_2();
     if (VAR_15 == ((void*)0)) {
      goto out;
     }
     if (FUNC_4(&VAR_15->ccb_h.path, VAR_9, FUNC_1(VAR_12->sim), VAR_3, VAR_1) != VAR_2) {
      FUNC_5(VAR_15);
      goto out;
     }
     VAR_13->luns[VAR_11] = 1;
     FUNC_7(VAR_15);
    } else {
     VAR_13->luns[VAR_11] = 1;
    }
   }
  }
  VAR_7 &= ~(1 << VAR_11);
 }
out:
 FUNC_0(&VAR_13->tick, VAR_4, FUNC_8, VAR_12);
}

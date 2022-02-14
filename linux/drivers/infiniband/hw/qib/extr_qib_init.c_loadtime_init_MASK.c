
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int revision; int intrchk_timer; int eep_lock; int eep_st_lock; int qib_diag_trans_lock; int uctxt_lock; int sendctrl_lock; int pioavail_lock; int boardversion; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qib_devdata*,char*,int,int,unsigned long long) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct qib_devdata*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct qib_devdata *VAR_7)
{
 int VAR_8 = 0;

 if (((VAR_7->revision >> VAR_4) &
      VAR_3) != VAR_1) {
  FUNC_3(VAR_7,
   "Driver only handles version %d, chip swversion is %d (%llx), failing\n",
   VAR_1,
   (int)(VAR_7->revision >>
    VAR_4) &
    VAR_3,
   (unsigned long long) VAR_7->revision);
  VAR_8 = -VAR_0;
  goto done;
 }

 if (VAR_7->revision & VAR_2)
  FUNC_4(VAR_7->pcidev, "%s", VAR_7->boardversion);

 FUNC_6(&VAR_7->pioavail_lock);
 FUNC_6(&VAR_7->sendctrl_lock);
 FUNC_6(&VAR_7->uctxt_lock);
 FUNC_6(&VAR_7->qib_diag_trans_lock);
 FUNC_6(&VAR_7->eep_st_lock);
 FUNC_2(&VAR_7->eep_lock);

 if (VAR_5)
  goto done;

 VAR_8 = FUNC_0(VAR_7);
 FUNC_1(VAR_7);

 FUNC_5(VAR_7);


 FUNC_7(&VAR_7->intrchk_timer, VAR_6, 0);
done:
 return VAR_8;
}

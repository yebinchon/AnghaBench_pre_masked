
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qib_pportdata {int lflags; int* statusp; int hol_state; int hol_timer; int link_speed_enabled; int port; int lflags_lock; int init_ibmaxlen; int ibmaxlen; } ;
struct qib_devdata {int num_pports; int (* f_late_initreg ) (struct qib_devdata*) ;unsigned int first_user_ctxt; int rcvhdrentsize; int (* f_bringup_serdes ) (struct qib_pportdata*) ;int flags; int stats_timer; int intrchk_timer; int (* f_set_intr_state ) (struct qib_devdata*,int) ;struct qib_pportdata* pport; int pcidev; scalar_t__ rcvegrbufsize; int piosize2k; int piosize4k; struct qib_ctxtdata** rcd; } ;
struct qib_ctxtdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (struct qib_devdata*) ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct qib_devdata*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct qib_devdata*,struct qib_ctxtdata*) ;
 int FUNC_8 (struct qib_devdata*,char*) ;
 int FUNC_9 (int ,char*,int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_10 (struct qib_pportdata*,int) ;
 int FUNC_11 (struct qib_ctxtdata*) ;
 int FUNC_12 (struct qib_pportdata*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (struct qib_devdata*) ;
 int FUNC_16 (struct qib_pportdata*) ;
 int FUNC_17 (struct qib_devdata*,int) ;
 int FUNC_18 (int *,int ,int ) ;

int FUNC_19(struct qib_devdata *VAR_18, int VAR_19)
{
 int VAR_20 = 0, VAR_21, VAR_22 = 0;
 u32 VAR_23 = 0;
 unsigned VAR_24;
 struct qib_ctxtdata *VAR_25;
 struct qib_pportdata *VAR_26;
 unsigned long VAR_27;


 for (VAR_21 = 0; VAR_21 < VAR_18->num_pports; ++VAR_21) {
  VAR_26 = VAR_18->pport + VAR_21;
  FUNC_13(&VAR_26->lflags_lock, VAR_27);
  VAR_26->lflags &= ~(VAR_4 | VAR_5 |
     VAR_6 | VAR_7 |
     VAR_8);
  FUNC_14(&VAR_26->lflags_lock, VAR_27);
 }

 if (VAR_19)
  VAR_20 = FUNC_2(VAR_18);
 else
  VAR_20 = FUNC_4(VAR_18);
 if (VAR_20)
  goto done;


 if (VAR_17)
  return 0;

 VAR_20 = VAR_18->f_late_initreg(VAR_18);
 if (VAR_20)
  goto done;


 for (VAR_24 = 0; VAR_18->rcd && VAR_24 < VAR_18->first_user_ctxt; ++VAR_24) {






  VAR_25 = VAR_18->rcd[VAR_24];
  if (!VAR_25)
   continue;

  VAR_22 = FUNC_7(VAR_18, VAR_25);
  if (!VAR_22)
   VAR_22 = FUNC_11(VAR_25);
  if (VAR_22)
   FUNC_8(VAR_18,
    "failed to allocate kernel ctxt's rcvhdrq and/or egr bufs\n");
 }

 for (VAR_21 = 0; VAR_21 < VAR_18->num_pports; ++VAR_21) {
  int VAR_28;

  if (VAR_22)
   VAR_20 = VAR_22;
  VAR_26 = VAR_18->pport + VAR_21;
  VAR_28 = FUNC_1(VAR_16);
  if (VAR_28 == -1) {
   VAR_28 = VAR_9;
   VAR_16 = 0;
  }

  VAR_26->init_ibmaxlen = FUNC_5(VAR_28 > 2048 ?
      VAR_18->piosize4k : VAR_18->piosize2k,
      VAR_18->rcvegrbufsize +
      (VAR_18->rcvhdrentsize << 2));




  VAR_26->ibmaxlen = VAR_26->init_ibmaxlen;
  FUNC_10(VAR_26, VAR_28);

  FUNC_13(&VAR_26->lflags_lock, VAR_27);
  VAR_26->lflags |= VAR_3;
  FUNC_14(&VAR_26->lflags_lock, VAR_27);

  VAR_22 = VAR_18->f_bringup_serdes(VAR_26);
  if (VAR_22) {
   FUNC_9(VAR_18->pcidev,
     "Failed to bringup IB port %u\n", VAR_26->port);
   VAR_22 = -VAR_1;
   continue;
  }

  VAR_23++;
 }

 if (!VAR_23) {

  if (!VAR_20 && VAR_22)
   VAR_20 = VAR_22;
  else if (!VAR_20)
   VAR_20 = -VAR_1;

 }

 FUNC_0(VAR_18);

 FUNC_3(VAR_18);

done:
 if (!VAR_20) {

  for (VAR_21 = 0; VAR_21 < VAR_18->num_pports; ++VAR_21) {
   VAR_26 = VAR_18->pport + VAR_21;




   *VAR_26->statusp |= VAR_12 |
    VAR_13;
   if (!VAR_26->link_speed_enabled)
    continue;
   if (VAR_18->flags & VAR_10)
    VAR_20 = FUNC_12(VAR_26);
   FUNC_18(&VAR_26->hol_timer, VAR_15, 0);
   VAR_26->hol_state = VAR_11;
  }


  VAR_18->f_set_intr_state(VAR_18, 1);





  FUNC_6(&VAR_18->intrchk_timer, VAR_14 + VAR_2/2);

  FUNC_6(&VAR_18->stats_timer, VAR_14 + VAR_2 * VAR_0);
 }


 return VAR_20;
}

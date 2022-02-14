
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {int lflags; int state_wanted; int state_wait; int port; int * statusp; int link_speed_active; int link_width_active; } ;
struct qib_devdata {struct qib_pportdata* pport; int * devstatusp; int flags; TYPE_1__* cspec; } ;
struct TYPE_4__ {int sps_hdrfull; int sps_buffull; int sps_txerrs; int sps_rcverrs; } ;
struct TYPE_3__ {int errormask; char* emsgbuf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct qib_pportdata*,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (struct qib_devdata*,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct qib_devdata*,char*,int,int) ;
 int FUNC_5 (struct qib_devdata*,char*,...) ;
 int FUNC_6 (struct qib_devdata*,int ,char*,char*) ;
 int FUNC_7 (struct qib_pportdata*) ;
 int FUNC_8 (struct qib_pportdata*,int) ;
 int FUNC_9 (struct qib_devdata*,unsigned int) ;
 int FUNC_10 (struct qib_devdata*,int ) ;
 TYPE_2__ VAR_26 ;
 int FUNC_11 (struct qib_devdata*,int ,int) ;
 int FUNC_12 (struct qib_pportdata*,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct qib_devdata *VAR_27, u64 VAR_28)
{
 char *VAR_29;
 u64 VAR_30 = 0;
 u64 VAR_31 = 0;
 struct qib_pportdata *VAR_32 = VAR_27->pport;
 u64 VAR_33;


 VAR_28 &= VAR_27->cspec->errormask;
 VAR_29 = VAR_27->cspec->emsgbuf;


 if (VAR_28 & FUNC_0(VAR_3))
  FUNC_2(VAR_27, VAR_29, sizeof(VAR_27->cspec->emsgbuf));

 if (VAR_28 & VAR_19)
  FUNC_12(VAR_32, VAR_28);

 if (VAR_28 & ~VAR_7)
  FUNC_5(VAR_27,
   "error interrupt with unknown errors %llx set\n",
   (unsigned long long) (VAR_28 & ~VAR_7));

 if (VAR_28 & VAR_0) {
  FUNC_7(VAR_32);
  if ((VAR_28 & VAR_1) &&
      !(VAR_32->lflags & VAR_12)) {







   VAR_30 = VAR_28 & VAR_1;
  }
 } else if ((VAR_28 & VAR_1) &&
     !(VAR_32->lflags & VAR_12)) {







  VAR_30 = VAR_28 & VAR_1;
 }

 FUNC_11(VAR_27, VAR_24, VAR_28);

 VAR_28 &= ~VAR_30;
 if (!VAR_28)
  goto done;






 VAR_33 = FUNC_0(VAR_6) |
  FUNC_0(VAR_20) | FUNC_0(VAR_21) |
  FUNC_0(VAR_3) | FUNC_0(VAR_23);

 FUNC_4(VAR_27, VAR_29, sizeof(VAR_27->cspec->emsgbuf), VAR_28 & ~VAR_33);

 if (VAR_28 & VAR_2)
  VAR_26.sps_rcverrs++;
 if (VAR_28 & VAR_0)
  VAR_26.sps_txerrs++;
 VAR_31 = VAR_28 & ~(VAR_2 | VAR_18 |
    FUNC_0(VAR_23));

 if (VAR_28 & FUNC_0(VAR_6)) {
  u64 VAR_34;

  VAR_34 = FUNC_10(VAR_27, VAR_25);
  if (!(VAR_32->lflags & VAR_11))
   FUNC_1(VAR_32, VAR_34);


  VAR_32->link_width_active =
   ((VAR_34 >> VAR_5) & 1) ?
       VAR_10 : VAR_9;
  VAR_32->link_speed_active =
   ((VAR_34 >> VAR_4) & 1) ?
       VAR_13 : VAR_14;
  if (FUNC_3(VAR_34) !=
         VAR_8)
   FUNC_8(VAR_32, VAR_34);
 }

 if (VAR_28 & FUNC_0(VAR_22)) {
  FUNC_5(VAR_27,
   "Got reset, requires re-init (unload and reload driver)\n");
  VAR_27->flags &= ~VAR_15;

  *VAR_27->devstatusp |= VAR_16;
  *VAR_27->pport->statusp &= ~VAR_17;
 }

 if (*VAR_29 && VAR_31)
  FUNC_6(VAR_27, VAR_32->port, "%s error\n", VAR_29);

 if (VAR_32->state_wanted & VAR_32->lflags)
  FUNC_13(&VAR_32->state_wait);
 if (VAR_28 & (FUNC_0(VAR_20) | FUNC_0(VAR_21))) {
  FUNC_9(VAR_27, ~0U);
  if (VAR_28 & FUNC_0(VAR_20))
   VAR_26.sps_buffull++;
  else
   VAR_26.sps_hdrfull++;
 }
done:
 return;
}

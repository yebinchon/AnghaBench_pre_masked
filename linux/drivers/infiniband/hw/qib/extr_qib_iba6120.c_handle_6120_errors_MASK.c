
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct qib_pportdata {int lflags; int state_wanted; int state_wait; int port; int * statusp; } ;
struct qib_devdata {struct qib_pportdata* pport; int * devstatusp; int flags; TYPE_1__* cspec; } ;
struct TYPE_4__ {int sps_hdrfull; int sps_buffull; int sps_txerrs; int sps_rcverrs; } ;
struct TYPE_3__ {int errormask; char* emsgbuf; scalar_t__ lastlinkrecov; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct qib_devdata*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct qib_devdata*,char*,int,int) ;
 int FUNC_5 (struct qib_devdata*,char*,...) ;
 int FUNC_6 (struct qib_devdata*,int ,char*,char*) ;
 int FUNC_7 (struct qib_pportdata*) ;
 int FUNC_8 (struct qib_devdata*,char*,int) ;
 int FUNC_9 (struct qib_pportdata*,int) ;
 int FUNC_10 (struct qib_devdata*,unsigned int) ;
 int FUNC_11 (struct qib_devdata*,int ) ;
 TYPE_2__ VAR_18 ;
 int FUNC_12 (struct qib_devdata*,int ,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct qib_devdata *VAR_19, u64 VAR_20)
{
 char *VAR_21;
 u64 VAR_22 = 0;
 u64 VAR_23 = 0;
 struct qib_pportdata *VAR_24 = VAR_19->pport;
 u64 VAR_25;


 VAR_20 &= VAR_19->cspec->errormask;
 VAR_21 = VAR_19->cspec->emsgbuf;


 if (VAR_20 & FUNC_0(VAR_3))
  FUNC_8(VAR_19, VAR_21, sizeof(VAR_19->cspec->emsgbuf));

 if (VAR_20 & ~VAR_5)
  FUNC_5(VAR_19,
   "error interrupt with unknown errors %llx set\n",
   (unsigned long long) (VAR_20 & ~VAR_5));

 if (VAR_20 & VAR_0) {
  FUNC_7(VAR_24);
  if ((VAR_20 & VAR_1) &&
      !(VAR_24->lflags & VAR_8)) {







   VAR_22 = VAR_20 & VAR_1;
  }
 } else if ((VAR_20 & VAR_1) &&
     !(VAR_24->lflags & VAR_8)) {







  VAR_22 = VAR_20 & VAR_1;
 }

 FUNC_12(VAR_19, VAR_16, VAR_20);

 VAR_20 &= ~VAR_22;
 if (!VAR_20)
  goto done;





 VAR_25 = FUNC_0(VAR_4) | FUNC_0(VAR_13) |
  FUNC_0(VAR_14) | FUNC_0(VAR_3);
 FUNC_4(VAR_19, VAR_21, sizeof(VAR_19->cspec->emsgbuf), VAR_20 & ~VAR_25);

 if (VAR_20 & VAR_2)
  VAR_18.sps_rcverrs++;
 if (VAR_20 & VAR_0)
  VAR_18.sps_txerrs++;

 VAR_23 = VAR_20 & ~(VAR_2 | VAR_12);

 if (VAR_20 & FUNC_0(VAR_4)) {
  u64 VAR_26 = FUNC_11(VAR_19, VAR_17);
  u32 VAR_27 = FUNC_2(VAR_26);
  int VAR_28 = 1;

  if (VAR_27 != VAR_7 && VAR_19->cspec->lastlinkrecov)
   VAR_28 = FUNC_1(VAR_19, VAR_26);







  if (VAR_28 && FUNC_3(VAR_26) ==
         VAR_6)
   VAR_28 = 0;
  if (VAR_28)
   FUNC_9(VAR_24, VAR_26);
 }

 if (VAR_20 & FUNC_0(VAR_15)) {
  FUNC_5(VAR_19,
   "Got reset, requires re-init (unload and reload driver)\n");
  VAR_19->flags &= ~VAR_9;

  *VAR_19->devstatusp |= VAR_10;
  *VAR_19->pport->statusp &= ~VAR_11;
 }

 if (*VAR_21 && VAR_23)
  FUNC_6(VAR_19, VAR_24->port, "%s error\n", VAR_21);

 if (VAR_24->state_wanted & VAR_24->lflags)
  FUNC_13(&VAR_24->state_wait);
 if (VAR_20 & (FUNC_0(VAR_13) | FUNC_0(VAR_14))) {
  FUNC_10(VAR_19, ~0U);
  if (VAR_20 & FUNC_0(VAR_13))
   VAR_18.sps_buffull++;
  else
   VAR_18.sps_hdrfull++;
 }
done:
 return;
}

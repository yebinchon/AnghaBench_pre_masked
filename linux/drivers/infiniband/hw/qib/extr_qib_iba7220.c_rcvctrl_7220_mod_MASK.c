
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {unsigned long long rcvctrl; unsigned long long ctxtcnt; int flags; int rhdrhead_intr_off; int first_user_ctxt; unsigned int cfgctxts; TYPE_2__* cspec; TYPE_1__** rcd; } ;
struct TYPE_4__ {int rcvmod_lock; } ;
struct TYPE_3__ {int seq_cnt; int head; int rcvhdrq_phys; int rcvhdrqtailaddr_phys; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct qib_devdata*,int ,int) ;
 int FUNC_2 (struct qib_devdata*,int ,int) ;
 int FUNC_3 (struct qib_devdata*,int ,unsigned int,int ) ;
 int FUNC_4 (struct qib_devdata*,int ,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_7(struct qib_pportdata *VAR_21, unsigned int VAR_22,
        int VAR_23)
{
 struct qib_devdata *VAR_24 = VAR_21->dd;
 u64 VAR_25, VAR_26;
 unsigned long VAR_27;

 FUNC_5(&VAR_24->cspec->rcvmod_lock, VAR_27);
 if (VAR_22 & VAR_12)
  VAR_24->rcvctrl |= (1ULL << VAR_2);
 if (VAR_22 & VAR_11)
  VAR_24->rcvctrl &= ~(1ULL << VAR_2);
 if (VAR_22 & VAR_10)
  VAR_24->rcvctrl &= ~(1ULL << VAR_1);
 if (VAR_22 & VAR_9)
  VAR_24->rcvctrl |= (1ULL << VAR_1);
 if (VAR_23 < 0)
  VAR_25 = (1ULL << VAR_24->ctxtcnt) - 1;
 else
  VAR_25 = (1ULL << VAR_23);
 if (VAR_22 & VAR_6) {

  VAR_24->rcvctrl |= (VAR_25 << FUNC_0(VAR_13, VAR_3));
  if (!(VAR_24->flags & VAR_4))
   VAR_24->rcvctrl |= 1ULL << VAR_2;

  FUNC_3(VAR_24, VAR_16, VAR_23,
   VAR_24->rcd[VAR_23]->rcvhdrqtailaddr_phys);
  FUNC_3(VAR_24, VAR_15, VAR_23,
   VAR_24->rcd[VAR_23]->rcvhdrq_phys);
  VAR_24->rcd[VAR_23]->seq_cnt = 1;
 }
 if (VAR_22 & VAR_5)
  VAR_24->rcvctrl &= ~(VAR_25 << FUNC_0(VAR_13, VAR_3));
 if (VAR_22 & VAR_8)
  VAR_24->rcvctrl |= (VAR_25 << VAR_0);
 if (VAR_22 & VAR_7)
  VAR_24->rcvctrl &= ~(VAR_25 << VAR_0);
 FUNC_2(VAR_24, VAR_14, VAR_24->rcvctrl);
 if ((VAR_22 & VAR_8) && VAR_24->rhdrhead_intr_off) {

  VAR_26 = FUNC_1(VAR_24, VAR_19, VAR_23) |
   VAR_24->rhdrhead_intr_off;
  FUNC_4(VAR_24, VAR_19, VAR_26, VAR_23);
 }
 if (VAR_22 & VAR_6) {






  VAR_26 = FUNC_1(VAR_24, VAR_18, VAR_23);
  FUNC_4(VAR_24, VAR_17, VAR_26, VAR_23);

  VAR_26 = FUNC_1(VAR_24, VAR_20, VAR_23);
  VAR_24->rcd[VAR_23]->head = VAR_26;

  if (VAR_23 < VAR_24->first_user_ctxt)
   VAR_26 |= VAR_24->rhdrhead_intr_off;
  FUNC_4(VAR_24, VAR_19, VAR_26, VAR_23);
 }
 if (VAR_22 & VAR_5) {
  if (VAR_23 >= 0) {
   FUNC_3(VAR_24, VAR_16, VAR_23, 0);
   FUNC_3(VAR_24, VAR_15, VAR_23, 0);
  } else {
   unsigned VAR_28;

   for (VAR_28 = 0; VAR_28 < VAR_24->cfgctxts; VAR_28++) {
    FUNC_3(VAR_24, VAR_16,
          VAR_28, 0);
    FUNC_3(VAR_24, VAR_15, VAR_28, 0);
   }
  }
 }
 FUNC_6(&VAR_24->cspec->rcvmod_lock, VAR_27);
}

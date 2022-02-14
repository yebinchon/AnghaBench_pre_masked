
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct qib_pportdata {int lflags; int* statusp; int lastibcstat; int lflags_lock; int symerr_clear_timer; struct qib_devdata* dd; } ;
struct qib_devdata {scalar_t__ (* f_iblink_state ) (int ) ;scalar_t__ (* f_ibphys_portstate ) (int ) ;int flags; int (* f_setextled ) (struct qib_pportdata*,int) ;scalar_t__ (* f_ib_updown ) (struct qib_pportdata*,int,int ) ;} ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qib_pportdata*) ;
 int VAR_18 ;
 int FUNC_4 (struct qib_pportdata*,int ) ;
 int FUNC_5 (struct qib_pportdata*,int ) ;
 int FUNC_6 (struct qib_pportdata*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct qib_pportdata*,int,int ) ;
 scalar_t__ FUNC_12 (struct qib_pportdata*,int,int ) ;
 int FUNC_13 (struct qib_pportdata*,int) ;

void FUNC_14(struct qib_pportdata *VAR_19, u64 VAR_20)
{
 struct qib_devdata *VAR_21 = VAR_19->dd;
 unsigned long VAR_22;
 u32 VAR_23;
 u8 VAR_24;
 enum ib_event_type VAR_25 = 0;

 VAR_23 = VAR_21->f_iblink_state(VAR_20);
 VAR_24 = VAR_21->f_ibphys_portstate(VAR_20);
 if (VAR_23 >= VAR_7 &&
     (!VAR_19->lflags || (VAR_19->lflags & VAR_11)) &&
     VAR_24 == VAR_3) {

  if (VAR_21->f_ib_updown(VAR_19, 1, VAR_20))
   goto skip_ibchange;
 } else if (VAR_19->lflags & (VAR_12 | VAR_10 |
     VAR_9 | VAR_8)) {
  if (VAR_24 != VAR_3 &&
      VAR_24 <= VAR_2 &&
      VAR_21->f_ib_updown(VAR_19, 0, VAR_20))
   goto skip_ibchange;
  FUNC_5(VAR_19, VAR_17);
 }

 if (VAR_23 != VAR_6) {

  if (VAR_23 != VAR_4) {
   *VAR_19->statusp &= ~VAR_16;
   if (VAR_19->lflags & VAR_9)
    VAR_25 = VAR_1;
   FUNC_7(&VAR_19->lflags_lock, VAR_22);
   if (VAR_23 == VAR_5) {
    VAR_19->lflags |= VAR_10 | VAR_13;
    VAR_19->lflags &= ~(VAR_12 |
     VAR_11 | VAR_9);
   } else {
    VAR_19->lflags |= VAR_12 | VAR_13;
    VAR_19->lflags &= ~(VAR_10 |
     VAR_11 | VAR_9);
   }
   FUNC_8(&VAR_19->lflags_lock, VAR_22);

   FUNC_0(&VAR_19->symerr_clear_timer,
      FUNC_1(75));
  } else if (VAR_24 == VAR_3 &&
      !(VAR_19->lflags & VAR_9)) {

   FUNC_3(VAR_19);
   *VAR_19->statusp |=
    VAR_16 | VAR_15;
   FUNC_2(&VAR_19->symerr_clear_timer);
   FUNC_7(&VAR_19->lflags_lock, VAR_22);
   VAR_19->lflags |= VAR_9 | VAR_13;
   VAR_19->lflags &= ~(VAR_12 |
    VAR_11 | VAR_10);
   FUNC_8(&VAR_19->lflags_lock, VAR_22);
   if (VAR_21->flags & VAR_14)
    FUNC_4(VAR_19,
     VAR_18);
   VAR_25 = VAR_0;
   VAR_21->f_setextled(VAR_19, 1);
  }
 } else {
  if (VAR_19->lflags & VAR_9)
   VAR_25 = VAR_1;
  FUNC_7(&VAR_19->lflags_lock, VAR_22);
  VAR_19->lflags |= VAR_11 | VAR_13;
  VAR_19->lflags &= ~(VAR_12 |
     VAR_9 | VAR_10);
  FUNC_8(&VAR_19->lflags_lock, VAR_22);
  *VAR_19->statusp &= ~VAR_16;
 }

skip_ibchange:
 VAR_19->lastibcstat = VAR_20;
 if (VAR_25)
  FUNC_6(VAR_19, VAR_25);
}

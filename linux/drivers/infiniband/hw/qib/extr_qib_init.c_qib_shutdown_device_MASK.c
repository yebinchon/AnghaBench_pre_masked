
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int lflags; int* statusp; int * qib_wq; int lflags_lock; } ;
struct qib_devdata {int flags; unsigned int num_pports; int (* f_quiet_serdes ) (struct qib_pportdata*) ;int (* f_sendctrl ) (struct qib_pportdata*,int) ;int (* f_setextled ) (struct qib_pportdata*,int ) ;struct qib_pportdata* pport; int (* f_rcvctrl ) (struct qib_pportdata*,int,int) ;int (* f_set_intr_state ) (struct qib_devdata*,int ) ;} ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (struct qib_pportdata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qib_devdata*,int ) ;
 int FUNC_6 (struct qib_pportdata*,int,int) ;
 int FUNC_7 (struct qib_pportdata*,int) ;
 int FUNC_8 (struct qib_pportdata*,int ) ;
 int FUNC_9 (struct qib_pportdata*,int) ;
 int FUNC_10 (struct qib_pportdata*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct qib_devdata *VAR_17)
{
 struct qib_pportdata *VAR_18;
 unsigned VAR_19;

 if (VAR_17->flags & VAR_14)
  return;
 VAR_17->flags |= VAR_14;

 for (VAR_19 = 0; VAR_19 < VAR_17->num_pports; ++VAR_19) {
  VAR_18 = VAR_17->pport + VAR_19;

  FUNC_3(&VAR_18->lflags_lock);
  VAR_18->lflags &= ~(VAR_2 | VAR_3 |
     VAR_1 | VAR_0 |
     VAR_4);
  FUNC_4(&VAR_18->lflags_lock);
  *VAR_18->statusp &= ~(VAR_15 | VAR_16);
 }
 VAR_17->flags &= ~VAR_6;


 VAR_17->f_set_intr_state(VAR_17, 0);

 for (VAR_19 = 0; VAR_19 < VAR_17->num_pports; ++VAR_19) {
  VAR_18 = VAR_17->pport + VAR_19;
  VAR_17->f_rcvctrl(VAR_18, VAR_10 |
       VAR_7 |
       VAR_8 |
       VAR_9, -1);




  VAR_17->f_sendctrl(VAR_18, VAR_12);
 }





 FUNC_11(20);

 for (VAR_19 = 0; VAR_19 < VAR_17->num_pports; ++VAR_19) {
  VAR_18 = VAR_17->pport + VAR_19;
  VAR_17->f_setextled(VAR_18, 0);

  if (VAR_17->flags & VAR_5)
   FUNC_2(VAR_18);

  VAR_17->f_sendctrl(VAR_18, VAR_11 |
        VAR_13);




  VAR_17->f_quiet_serdes(VAR_18);

  if (VAR_18->qib_wq) {
   FUNC_0(VAR_18->qib_wq);
   VAR_18->qib_wq = ((void*)0);
  }
  FUNC_1(VAR_18);
 }

}

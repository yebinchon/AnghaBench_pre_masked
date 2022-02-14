
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qib_pportdata {int lflags; int lflags_lock; struct qib_devdata* dd; } ;
struct qib_devdata {int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,int) ;} ;


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






 int FUNC_0 (struct qib_pportdata*,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct qib_pportdata*,int ,int) ;
 int FUNC_4 (struct qib_pportdata*,int ,int) ;
 int FUNC_5 (struct qib_pportdata*,int ,int) ;
 int FUNC_6 (struct qib_pportdata*,int ,int) ;
 int FUNC_7 (struct qib_pportdata*,int ,int) ;
 int FUNC_8 (struct qib_pportdata*,int ,int) ;

int FUNC_9(struct qib_pportdata *VAR_13, u8 VAR_14)
{
 u32 VAR_15;
 int VAR_16;
 struct qib_devdata *VAR_17 = VAR_13->dd;
 unsigned long VAR_18;

 switch (VAR_14) {
 case 129:
  VAR_17->f_set_ib_cfg(VAR_13, VAR_12,
     VAR_3 | VAR_5);

  VAR_16 = 0;
  goto bail;

 case 131:
  VAR_17->f_set_ib_cfg(VAR_13, VAR_12,
     VAR_3 | VAR_6);

  VAR_16 = 0;
  goto bail;

 case 128:
  VAR_17->f_set_ib_cfg(VAR_13, VAR_12,
     VAR_3 | VAR_7);

  VAR_16 = 0;
  goto bail;

 case 130:
  VAR_17->f_set_ib_cfg(VAR_13, VAR_12,
     VAR_3 | VAR_4);

  VAR_16 = 0;
  goto bail;

 case 132:
  if (VAR_13->lflags & VAR_9) {
   VAR_16 = 0;
   goto bail;
  }
  if (!(VAR_13->lflags & (VAR_10 | VAR_8))) {
   VAR_16 = -VAR_0;
   goto bail;
  }






  FUNC_1(&VAR_13->lflags_lock, VAR_18);
  VAR_13->lflags &= ~VAR_11;
  FUNC_2(&VAR_13->lflags_lock, VAR_18);
  VAR_17->f_set_ib_cfg(VAR_13, VAR_12,
     VAR_2 | VAR_5);
  VAR_15 = VAR_11;
  break;

 case 133:
  if (VAR_13->lflags & VAR_8) {
   VAR_16 = 0;
   goto bail;
  }
  if (!(VAR_13->lflags & VAR_9)) {
   VAR_16 = -VAR_0;
   goto bail;
  }
  VAR_17->f_set_ib_cfg(VAR_13, VAR_12,
     VAR_1 | VAR_5);
  VAR_15 = VAR_8;
  break;

 default:
  VAR_16 = -VAR_0;
  goto bail;
 }
 VAR_16 = FUNC_0(VAR_13, VAR_15, 10);

bail:
 return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_pportdata {int state_wanted; int lflags; int lflags_lock; int state_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int,int ) ;

int FUNC_4(struct qib_pportdata *VAR_2, u32 VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_2->lflags_lock, VAR_6);
 if (VAR_2->state_wanted) {
  FUNC_2(&VAR_2->lflags_lock, VAR_6);
  VAR_5 = -VAR_0;
  goto bail;
 }
 VAR_2->state_wanted = VAR_3;
 FUNC_2(&VAR_2->lflags_lock, VAR_6);
 FUNC_3(VAR_2->state_wait,
      (VAR_2->lflags & VAR_3),
      FUNC_0(VAR_4));
 FUNC_1(&VAR_2->lflags_lock, VAR_6);
 VAR_2->state_wanted = 0;
 FUNC_2(&VAR_2->lflags_lock, VAR_6);

 if (!(VAR_2->lflags & VAR_3))
  VAR_5 = -VAR_1;
 else
  VAR_5 = 0;
bail:
 return VAR_5;
}

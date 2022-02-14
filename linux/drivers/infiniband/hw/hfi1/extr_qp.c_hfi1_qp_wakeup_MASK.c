
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rvt_qp {int s_flags; int s_lock; } ;


 int FUNC_0 (struct rvt_qp*) ;
 int FUNC_1 (struct rvt_qp*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct rvt_qp*,int) ;

void FUNC_5(struct rvt_qp *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->s_lock, VAR_2);
 if (VAR_0->s_flags & VAR_1) {
  VAR_0->s_flags &= ~VAR_1;
  FUNC_4(VAR_0, VAR_1);
  FUNC_0(VAR_0);
 }
 FUNC_3(&VAR_0->s_lock, VAR_2);

 FUNC_1(VAR_0);
}

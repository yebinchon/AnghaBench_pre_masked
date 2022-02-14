
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int s_flags; int s_lock; } ;
struct iowait {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvt_qp*) ;
 struct rvt_qp* FUNC_1 (struct iowait*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct iowait *VAR_1)
{
 struct rvt_qp *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;







 FUNC_2(&VAR_2->s_lock, VAR_3);
 if (VAR_2->s_flags & VAR_0) {
  VAR_2->s_flags &= ~VAR_0;
  FUNC_0(VAR_2);
 }
 FUNC_3(&VAR_2->s_lock, VAR_3);
}

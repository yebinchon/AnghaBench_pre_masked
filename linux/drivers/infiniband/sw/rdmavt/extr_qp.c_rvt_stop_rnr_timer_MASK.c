
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int s_flags; int s_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rvt_qp*,int ) ;

__attribute__((used)) static void FUNC_2(struct rvt_qp *VAR_1)
{
 FUNC_0(&VAR_1->s_lock);

 if (VAR_1->s_flags & VAR_0) {
  VAR_1->s_flags &= ~VAR_0;
  FUNC_1(VAR_1, 0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rvt_qp {int s_rnr_timer; int s_flags; int s_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rvt_qp*,int) ;

void FUNC_5(struct rvt_qp *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 FUNC_1(&VAR_2->s_lock);
 VAR_2->s_flags |= VAR_1;
 VAR_4 = FUNC_3(VAR_3);
 FUNC_4(VAR_2, VAR_4);
 FUNC_0(&VAR_2->s_rnr_timer,
        FUNC_2(1000 * VAR_4), VAR_0);
}

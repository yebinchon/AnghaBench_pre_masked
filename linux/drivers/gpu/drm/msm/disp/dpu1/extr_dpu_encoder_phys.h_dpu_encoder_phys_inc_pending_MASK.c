
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys {int pending_kickoff_cnt; int pending_ctlstart_cnt; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct dpu_encoder_phys *VAR_0)
{
 FUNC_0(&VAR_0->pending_ctlstart_cnt);
 return FUNC_0(&VAR_0->pending_kickoff_cnt);
}

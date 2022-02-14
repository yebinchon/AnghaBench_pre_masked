
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_itime; int dq_btime; int dq_curinodes; int dq_isoftlimit; int dq_ihardlimit; int dq_curblocks; int dq_bsoftlimit; int dq_bhardlimit; } ;
struct dqblk32 {void* dqb_itime; void* dqb_btime; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; void* dqb_curblocks; void* dqb_bsoftlimit; void* dqb_bhardlimit; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct dquot *VAR_0, struct dqblk32 *VAR_1)
{

 VAR_1->dqb_bhardlimit = FUNC_0(VAR_0->dq_bhardlimit);
 VAR_1->dqb_bsoftlimit = FUNC_0(VAR_0->dq_bsoftlimit);
 VAR_1->dqb_curblocks = FUNC_0(VAR_0->dq_curblocks);
 VAR_1->dqb_ihardlimit = FUNC_0(VAR_0->dq_ihardlimit);
 VAR_1->dqb_isoftlimit = FUNC_0(VAR_0->dq_isoftlimit);
 VAR_1->dqb_curinodes = FUNC_0(VAR_0->dq_curinodes);
 VAR_1->dqb_btime = FUNC_0(VAR_0->dq_btime);
 VAR_1->dqb_itime = FUNC_0(VAR_0->dq_itime);
}

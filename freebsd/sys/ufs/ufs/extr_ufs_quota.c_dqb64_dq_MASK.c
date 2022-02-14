
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {void* dq_itime; void* dq_btime; void* dq_curinodes; void* dq_isoftlimit; void* dq_ihardlimit; void* dq_curblocks; void* dq_bsoftlimit; void* dq_bhardlimit; } ;
struct dqblk64 {int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curblocks; int dqb_bsoftlimit; int dqb_bhardlimit; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct dqblk64 *VAR_0, struct dquot *VAR_1)
{

 VAR_1->dq_bhardlimit = FUNC_0(VAR_0->dqb_bhardlimit);
 VAR_1->dq_bsoftlimit = FUNC_0(VAR_0->dqb_bsoftlimit);
 VAR_1->dq_curblocks = FUNC_0(VAR_0->dqb_curblocks);
 VAR_1->dq_ihardlimit = FUNC_0(VAR_0->dqb_ihardlimit);
 VAR_1->dq_isoftlimit = FUNC_0(VAR_0->dqb_isoftlimit);
 VAR_1->dq_curinodes = FUNC_0(VAR_0->dqb_curinodes);
 VAR_1->dq_btime = FUNC_0(VAR_0->dqb_btime);
 VAR_1->dq_itime = FUNC_0(VAR_0->dqb_itime);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_itime; int dq_btime; int dq_curinodes; int dq_isoftlimit; int dq_ihardlimit; int dq_curblocks; int dq_bsoftlimit; int dq_bhardlimit; } ;
struct dqblk32 {int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curblocks; int dqb_bsoftlimit; int dqb_bhardlimit; } ;



__attribute__((used)) static void
FUNC_0(const struct dqblk32 *VAR_0, struct dquot *VAR_1)
{

 VAR_1->dq_bhardlimit = VAR_0->dqb_bhardlimit;
 VAR_1->dq_bsoftlimit = VAR_0->dqb_bsoftlimit;
 VAR_1->dq_curblocks = VAR_0->dqb_curblocks;
 VAR_1->dq_ihardlimit = VAR_0->dqb_ihardlimit;
 VAR_1->dq_isoftlimit = VAR_0->dqb_isoftlimit;
 VAR_1->dq_curinodes = VAR_0->dqb_curinodes;
 VAR_1->dq_btime = VAR_0->dqb_btime;
 VAR_1->dq_itime = VAR_0->dqb_itime;
}

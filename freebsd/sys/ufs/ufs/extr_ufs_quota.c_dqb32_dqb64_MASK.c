
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dqblk64 {int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curblocks; int dqb_bsoftlimit; int dqb_bhardlimit; } ;
struct dqblk32 {int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curblocks; int dqb_bsoftlimit; int dqb_bhardlimit; } ;



__attribute__((used)) static void
FUNC_0(const struct dqblk32 *VAR_0, struct dqblk64 *VAR_1)
{

 VAR_1->dqb_bhardlimit = VAR_0->dqb_bhardlimit;
 VAR_1->dqb_bsoftlimit = VAR_0->dqb_bsoftlimit;
 VAR_1->dqb_curblocks = VAR_0->dqb_curblocks;
 VAR_1->dqb_ihardlimit = VAR_0->dqb_ihardlimit;
 VAR_1->dqb_isoftlimit = VAR_0->dqb_isoftlimit;
 VAR_1->dqb_curinodes = VAR_0->dqb_curinodes;
 VAR_1->dqb_btime = VAR_0->dqb_btime;
 VAR_1->dqb_itime = VAR_0->dqb_itime;
}

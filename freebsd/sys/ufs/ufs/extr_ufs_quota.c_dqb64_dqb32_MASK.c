
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dqblk64 {int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curblocks; int dqb_bsoftlimit; int dqb_bhardlimit; } ;
struct dqblk32 {void* dqb_itime; void* dqb_btime; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; void* dqb_curblocks; void* dqb_bsoftlimit; void* dqb_bhardlimit; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct dqblk64 *VAR_0, struct dqblk32 *VAR_1)
{

 VAR_1->dqb_bhardlimit = FUNC_0(VAR_0->dqb_bhardlimit);
 VAR_1->dqb_bsoftlimit = FUNC_0(VAR_0->dqb_bsoftlimit);
 VAR_1->dqb_curblocks = FUNC_0(VAR_0->dqb_curblocks);
 VAR_1->dqb_ihardlimit = FUNC_0(VAR_0->dqb_ihardlimit);
 VAR_1->dqb_isoftlimit = FUNC_0(VAR_0->dqb_isoftlimit);
 VAR_1->dqb_curinodes = FUNC_0(VAR_0->dqb_curinodes);
 VAR_1->dqb_btime = FUNC_0(VAR_0->dqb_btime);
 VAR_1->dqb_itime = FUNC_0(VAR_0->dqb_itime);
}

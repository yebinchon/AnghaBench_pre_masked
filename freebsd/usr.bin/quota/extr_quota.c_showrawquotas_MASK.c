
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_long ;
typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ dqb_btime; scalar_t__ dqb_itime; scalar_t__ dqb_curinodes; scalar_t__ dqb_isoftlimit; scalar_t__ dqb_ihardlimit; scalar_t__ dqb_curblocks; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_bhardlimit; } ;
struct quotause {TYPE_1__ dqblk; int fsname; } ;
typedef int intmax_t ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, u_long VAR_2, struct quotause *VAR_3)
{
 time_t VAR_4;

 FUNC_1("Raw %s quota information for id %lu on %s\n",
     VAR_1 == VAR_0 ? "user" : "group", VAR_2, VAR_3->fsname);
 FUNC_1("block hard limit:     %ju\n",
     (uintmax_t)VAR_3->dqblk.dqb_bhardlimit);
 FUNC_1("block soft limit:     %ju\n",
     (uintmax_t)VAR_3->dqblk.dqb_bsoftlimit);
 FUNC_1("current block count:  %ju\n",
     (uintmax_t)VAR_3->dqblk.dqb_curblocks);
 FUNC_1("i-node hard limit:    %ju\n",
     (uintmax_t)VAR_3->dqblk.dqb_ihardlimit);
 FUNC_1("i-node soft limit:    %ju\n",
     (uintmax_t)VAR_3->dqblk.dqb_isoftlimit);
 FUNC_1("current i-node count: %ju\n",
     (uintmax_t)VAR_3->dqblk.dqb_curinodes);
 FUNC_1("block grace time:     %jd",
     (intmax_t)VAR_3->dqblk.dqb_btime);
 if (VAR_3->dqblk.dqb_btime != 0) {
  VAR_4 = VAR_3->dqblk.dqb_btime;
  FUNC_1(" %s", FUNC_0(&VAR_4));
 } else {
  FUNC_1("\n");
 }
 FUNC_1("i-node grace time:    %jd", (intmax_t)VAR_3->dqblk.dqb_itime);
 if (VAR_3->dqblk.dqb_itime != 0) {
  VAR_4 = VAR_3->dqblk.dqb_itime;
  FUNC_1(" %s", FUNC_0(&VAR_4));
 } else {
  FUNC_1("\n");
 }
}

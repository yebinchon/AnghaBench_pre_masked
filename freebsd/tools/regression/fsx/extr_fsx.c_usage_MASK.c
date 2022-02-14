
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;

void
FUNC_2(void)
{
 FUNC_1(VAR_0, "usage: %s",
  "fsx [-dnqLOW] [-b opnum] [-c Prob] [-l flen] [-m start:end] [-o oplen] [-p progressinterval] [-r readbdy] [-s style] [-t truncbdy] [-w writebdy] [-D startingop] [-N numops] [-P dirpath] [-S seed] fname\n	-b opnum: beginning operation number (default 1)\n	-c P: 1 in P chance of file close+open at each op (default infinity)\n	-d: debug output for all operations\n	-i P: 1 in P chance of calling msync(MS_INVALIDATE) (default infinity)\n	-l flen: the upper bound on file size (default 262144)\n	-m startop:endop: monitor (print debug output) specified byte range (default 0:infinity)\n	-n: no verifications of file size\n	-o oplen: the upper bound on operation size (default 65536)\n	-p progressinterval: debug output at specified operation interval\n	-q: quieter operation\n	-r readbdy: 4096 would make reads page aligned (default 1)\n	-s style: 1 gives smaller truncates (default 0)\n	-t truncbdy: 4096 would make truncates page aligned (default 1)\n	-w writebdy: 4096 would make writes page aligned (default 1)\n	-D startingop: debug output starting at specified operation\n	-L: fsxLite - no file creations & no file size changes\n	-N numops: total # operations to do (default infinity)\n	-O: use oplen (see -o flag) for every op (default random)\n	-P dirpath: save .fsxlog and .fsxgood files in dirpath (default ./)\n	-S seed: for random # generator (default 1) 0 gets timestamp\n	-W: mapped write operations DISabled\n	-R: mapped read operations DISabled)\n	-U: msync after mapped write operations DISabled\n	fname: this filename is REQUIRED (no default)\n");
 FUNC_0(90);
}

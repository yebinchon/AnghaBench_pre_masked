
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_up_la {int idx; int bufsize; int* data; scalar_t__ stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_up_la*) ;
 int FUNC_1 (int,char*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, char *VAR_3[], int VAR_4, const char *VAR_5)
{
 struct ch_up_la VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 (void) VAR_2;
 (void) VAR_3;
 (void) VAR_4;

 VAR_6.stopped = 0;
 VAR_6.idx = -1;
 VAR_6.bufsize = VAR_1;
 VAR_6.data = FUNC_2(VAR_6.bufsize);
 if (!VAR_6.data)
  FUNC_1(1, "uP_LA malloc");

 if (FUNC_0(VAR_5, VAR_0, &VAR_6) < 0)
   FUNC_1(1, "uP_LA");

 if (VAR_6.stopped)
  FUNC_3("LA is not running\n");

 VAR_10 = VAR_6.bufsize / 4;
 VAR_8 = (int)VAR_6.idx;
 VAR_9 = (VAR_10 / 4) - 1;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  FUNC_3("%04x %08x %08x\n",
         VAR_6.data[VAR_8], VAR_6.data[VAR_8+2], VAR_6.data[VAR_8+1]);
  VAR_8 = (VAR_8 + 4) & (VAR_10 - 1);
 }

 return 0;
}

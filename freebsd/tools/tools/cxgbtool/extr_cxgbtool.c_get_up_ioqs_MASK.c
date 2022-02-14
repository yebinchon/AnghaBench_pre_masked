
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t3_ioq_entry {int dummy; } ;
struct ch_up_ioqs {int bufsize; int ioq_rx_enable; int ioq_tx_enable; int ioq_rx_status; int ioq_tx_status; TYPE_1__* data; } ;
typedef int ioqs ;
struct TYPE_2__ {int ioq_cp; int ioq_pp; int ioq_alen; int ioq_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ch_up_ioqs*,int) ;
 scalar_t__ FUNC_1 (char const*,int ,struct ch_up_ioqs*) ;
 int FUNC_2 (int,char*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static int
FUNC_5(int VAR_2, char *VAR_3[], int VAR_4, const char *VAR_5)
{
 struct ch_up_ioqs VAR_6;
 int VAR_7, VAR_8;

 (void) VAR_2;
 (void) VAR_3;
 (void) VAR_4;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.bufsize = VAR_1;
 VAR_6.data = FUNC_3(VAR_1);
 if (!VAR_6.data)
  FUNC_2(1, "uP_IOQs malloc");

 if (FUNC_1(VAR_5, VAR_0, &VAR_6) < 0)
   FUNC_2(1, "uP_IOQs");

 FUNC_4("ioq_rx_enable   : 0x%08x\n", VAR_6.ioq_rx_enable);
 FUNC_4("ioq_tx_enable   : 0x%08x\n", VAR_6.ioq_tx_enable);
 FUNC_4("ioq_rx_status   : 0x%08x\n", VAR_6.ioq_rx_status);
 FUNC_4("ioq_tx_status   : 0x%08x\n", VAR_6.ioq_tx_status);

 VAR_8 = VAR_6.bufsize / sizeof(struct t3_ioq_entry);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_4("\nioq[%d].cp       : 0x%08x\n", VAR_7,
         VAR_6.data[VAR_7].ioq_cp);
  FUNC_4("ioq[%d].pp       : 0x%08x\n", VAR_7,
         VAR_6.data[VAR_7].ioq_pp);
  FUNC_4("ioq[%d].alen     : 0x%08x\n", VAR_7,
         VAR_6.data[VAR_7].ioq_alen);
  FUNC_4("ioq[%d].stats    : 0x%08x\n", VAR_7,
         VAR_6.data[VAR_7].ioq_stats);
  FUNC_4("  sop %u\n", VAR_6.data[VAR_7].ioq_stats >> 16);
  FUNC_4("  eop %u\n", VAR_6.data[VAR_7].ioq_stats & 0xFFFF);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi {unsigned int curr_seq; TYPE_1__* seq_table; } ;
struct ipmi_recv_msg {int dummy; } ;
struct TYPE_2__ {int inuse; unsigned long orig_timeout; int retries_left; int broadcast; long seqid; int timeout; struct ipmi_recv_msg* recv_msg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (long) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct ipmi_smi*) ;
 int FUNC_2 (struct ipmi_smi*,int ) ;

__attribute__((used)) static int FUNC_3(struct ipmi_smi *VAR_6,
    struct ipmi_recv_msg *VAR_7,
    unsigned long VAR_8,
    int VAR_9,
    int VAR_10,
    unsigned char *VAR_11,
    long *VAR_12)
{
 int VAR_13 = 0;
 unsigned int VAR_14;

 if (VAR_8 == 0)
  VAR_8 = VAR_5;
 if (VAR_9 < 0)
  VAR_9 = VAR_4;

 for (VAR_14 = VAR_6->curr_seq; (VAR_14+1)%VAR_1 != VAR_6->curr_seq;
     VAR_14 = (VAR_14+1)%VAR_1) {
  if (!VAR_6->seq_table[VAR_14].inuse)
   break;
 }

 if (!VAR_6->seq_table[VAR_14].inuse) {
  VAR_6->seq_table[VAR_14].recv_msg = VAR_7;





  VAR_6->seq_table[VAR_14].timeout = VAR_3;
  VAR_6->seq_table[VAR_14].orig_timeout = VAR_8;
  VAR_6->seq_table[VAR_14].retries_left = VAR_9;
  VAR_6->seq_table[VAR_14].broadcast = VAR_10;
  VAR_6->seq_table[VAR_14].inuse = 1;
  VAR_6->seq_table[VAR_14].seqid = FUNC_0(VAR_6->seq_table[VAR_14].seqid);
  *VAR_11 = VAR_14;
  *VAR_12 = VAR_6->seq_table[VAR_14].seqid;
  VAR_6->curr_seq = (VAR_14+1)%VAR_1;
  FUNC_2(VAR_6, VAR_2);
  FUNC_1(VAR_6);
 } else {
  VAR_13 = -VAR_0;
 }

 return VAR_13;
}

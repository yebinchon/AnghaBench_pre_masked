
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipmi_smi {int seq_lock; TYPE_2__* seq_table; } ;
struct TYPE_6__ {short channel; } ;
struct TYPE_4__ {unsigned char cmd; unsigned char netfn; } ;
struct ipmi_recv_msg {TYPE_3__ addr; TYPE_1__ msg; } ;
struct ipmi_addr {int dummy; } ;
struct TYPE_5__ {scalar_t__ inuse; struct ipmi_recv_msg* recv_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ipmi_addr*,TYPE_3__*) ;
 int FUNC_1 (struct ipmi_smi*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ipmi_smi *VAR_4,
    unsigned char VAR_5,
    short VAR_6,
    unsigned char VAR_7,
    unsigned char VAR_8,
    struct ipmi_addr *VAR_9,
    struct ipmi_recv_msg **VAR_10)
{
 int VAR_11 = -VAR_1;
 unsigned long VAR_12;

 if (VAR_5 >= VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_4->seq_lock, VAR_12);
 if (VAR_4->seq_table[VAR_5].inuse) {
  struct ipmi_recv_msg *VAR_13 = VAR_4->seq_table[VAR_5].recv_msg;

  if ((VAR_13->addr.channel == VAR_6) && (VAR_13->msg.cmd == VAR_7)
    && (VAR_13->msg.netfn == VAR_8)
    && (FUNC_0(VAR_9, &VAR_13->addr))) {
   *VAR_10 = VAR_13;
   VAR_4->seq_table[VAR_5].inuse = 0;
   FUNC_1(VAR_4, VAR_3);
   VAR_11 = 0;
  }
 }
 FUNC_3(&VAR_4->seq_lock, VAR_12);

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_table {unsigned long seqid; struct ipmi_recv_msg* recv_msg; scalar_t__ inuse; } ;
struct ipmi_smi {int seq_lock; struct seq_table* seq_table; } ;
struct ipmi_recv_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (long,unsigned char,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (struct ipmi_smi*,struct ipmi_recv_msg*,unsigned int) ;
 int FUNC_2 (struct ipmi_smi*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ipmi_smi *VAR_2,
   long VAR_3,
   unsigned int VAR_4)
{
 int VAR_5 = -VAR_0;
 unsigned long VAR_6;
 unsigned char VAR_7;
 unsigned long VAR_8;
 struct ipmi_recv_msg *VAR_9 = ((void*)0);


 FUNC_0(VAR_3, VAR_7, VAR_8);

 FUNC_3(&VAR_2->seq_lock, VAR_6);




 if ((VAR_2->seq_table[VAR_7].inuse)
    && (VAR_2->seq_table[VAR_7].seqid == VAR_8)) {
  struct seq_table *VAR_10 = &VAR_2->seq_table[VAR_7];

  VAR_10->inuse = 0;
  FUNC_2(VAR_2, VAR_1);
  VAR_9 = VAR_10->recv_msg;
  VAR_5 = 0;
 }
 FUNC_4(&VAR_2->seq_lock, VAR_6);

 if (VAR_9)
  FUNC_1(VAR_2, VAR_9, VAR_4);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_table {unsigned long seqid; int orig_timeout; int timeout; scalar_t__ inuse; } ;
struct ipmi_smi {int seq_lock; struct seq_table* seq_table; } ;


 int VAR_0 ;
 int FUNC_0 (long,unsigned char,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ipmi_smi *VAR_1,
    long VAR_2)
{
 int VAR_3 = -VAR_0;
 unsigned long VAR_4;
 unsigned char VAR_5;
 unsigned long VAR_6;


 FUNC_0(VAR_2, VAR_5, VAR_6);

 FUNC_1(&VAR_1->seq_lock, VAR_4);




 if ((VAR_1->seq_table[VAR_5].inuse)
    && (VAR_1->seq_table[VAR_5].seqid == VAR_6)) {
  struct seq_table *VAR_7 = &VAR_1->seq_table[VAR_5];
  VAR_7->timeout = VAR_7->orig_timeout;
  VAR_3 = 0;
 }
 FUNC_2(&VAR_1->seq_lock, VAR_4);

 return VAR_3;
}

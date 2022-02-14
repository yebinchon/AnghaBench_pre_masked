
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_buf {int buffer; } ;
struct pt_regs {int nip; } ;
typedef int buf ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,int ,int ,...) ;
 scalar_t__ FUNC_2 (void const*,int) ;
 int FUNC_3 (struct seq_buf*) ;
 int FUNC_4 (struct seq_buf*) ;
 int FUNC_5 (struct seq_buf*,char*,int) ;
 int FUNC_6 (struct seq_buf*,char*,...) ;

void FUNC_7(struct pt_regs *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = VAR_0;
 struct seq_buf VAR_6;
 char VAR_7[96];

 VAR_4 = VAR_3->nip - (VAR_0 * 3 / 4 * sizeof(int));





 if (!FUNC_0(VAR_4, VAR_0 * sizeof(int), VAR_1)) {
  FUNC_1("%s[%d]: Bad NIP, not dumping instructions.\n",
   VAR_2->comm, VAR_2->pid);
  return;
 }

 FUNC_5(&VAR_6, VAR_7, sizeof(VAR_7));

 while (VAR_5) {
  int VAR_8;

  FUNC_3(&VAR_6);

  for (VAR_8 = 0; VAR_8 < 8 && VAR_5; VAR_8++, VAR_5--, VAR_4 += sizeof(int)) {
   int VAR_9;

   if (FUNC_2((const void *)VAR_4, VAR_9)) {
    FUNC_6(&VAR_6, "XXXXXXXX ");
    continue;
   }
   FUNC_6(&VAR_6, VAR_3->nip == VAR_4 ? "<%08x> " : "%08x ", VAR_9);
  }

  if (!FUNC_4(&VAR_6))
   FUNC_1("%s[%d]: code: %s\n", VAR_2->comm,
    VAR_2->pid, VAR_6.buffer);
 }
}

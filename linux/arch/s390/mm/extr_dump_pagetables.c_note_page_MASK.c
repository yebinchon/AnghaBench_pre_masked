
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct pg_state {unsigned int current_prot; int level; scalar_t__ current_address; int start_address; TYPE_1__* marker; } ;
struct TYPE_2__ {scalar_t__ start_address; int name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct seq_file*,unsigned int,int) ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, struct pg_state *VAR_2,
       unsigned int VAR_3, int VAR_4)
{
 static const char VAR_5[] = "KMGTPE";
 int VAR_6 = sizeof(unsigned long) * 2;
 const char *VAR_7 = VAR_5;
 unsigned int VAR_8, VAR_9;
 unsigned long VAR_10;






 VAR_8 = VAR_3;
 VAR_9 = VAR_2->current_prot;

 if (!VAR_2->level) {

  VAR_2->current_prot = VAR_3;
  VAR_2->level = VAR_4;
  VAR_2->marker = VAR_0;
  FUNC_1(VAR_1, "---[ %s ]---\n", VAR_2->marker->name);
 } else if (VAR_8 != VAR_9 || VAR_4 != VAR_2->level ||
     VAR_2->current_address >= VAR_2->marker[1].start_address) {

  FUNC_1(VAR_1, "0x%0*lx-0x%0*lx ",
      VAR_6, VAR_2->start_address,
      VAR_6, VAR_2->current_address);
  VAR_10 = (VAR_2->current_address - VAR_2->start_address) >> 10;
  while (!(VAR_10 & 0x3ff) && VAR_7[1]) {
   VAR_10 >>= 10;
   VAR_7++;
  }
  FUNC_1(VAR_1, "%9lu%c ", VAR_10, *VAR_7);
  FUNC_0(VAR_1, VAR_2->current_prot, VAR_2->level);
  while (VAR_2->current_address >= VAR_2->marker[1].start_address) {
   VAR_2->marker++;
   FUNC_1(VAR_1, "---[ %s ]---\n", VAR_2->marker->name);
  }
  VAR_2->start_address = VAR_2->current_address;
  VAR_2->current_prot = VAR_3;
  VAR_2->level = VAR_4;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct pg_state {void* current_prot; scalar_t__ effective_prot; int level; scalar_t__ lines; scalar_t__ current_address; unsigned long start_address; TYPE_1__* marker; int to_dmesg; scalar_t__ check_wx; } ;
typedef scalar_t__ pgprotval_t ;
typedef void* pgprot_t ;
struct TYPE_2__ {scalar_t__ start_address; scalar_t__ max_lines; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct pg_state*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct seq_file*,void*,int,int ) ;
 int FUNC_3 (struct seq_file*,int ,char*,unsigned long,char const) ;
 int FUNC_4 (struct seq_file*,int ,char*,int,...) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_3, struct pg_state *VAR_4,
        pgprot_t VAR_5, pgprotval_t VAR_6, int VAR_7)
{
 pgprotval_t VAR_8, VAR_9, VAR_10;
 static const char VAR_11[] = "BKMGTPE";






 VAR_8 = FUNC_1(VAR_5);
 VAR_9 = FUNC_1(VAR_4->current_prot);
 VAR_10 = VAR_4->effective_prot;

 if (!VAR_4->level) {

  VAR_4->current_prot = VAR_5;
  VAR_4->effective_prot = VAR_6;
  VAR_4->level = VAR_7;
  VAR_4->marker = VAR_2;
  VAR_4->lines = 0;
  FUNC_4(VAR_3, VAR_4->to_dmesg, "---[ %s ]---\n",
       VAR_4->marker->name);
 } else if (VAR_8 != VAR_9 || VAR_6 != VAR_10 || VAR_7 != VAR_4->level ||
     VAR_4->current_address >= VAR_4->marker[1].start_address) {
  const char *VAR_12 = VAR_11;
  unsigned long VAR_13;
  int VAR_14 = sizeof(unsigned long) * 2;

  if (VAR_4->check_wx && (VAR_10 & VAR_1) && !(VAR_10 & VAR_0))
   FUNC_0(VAR_4);




  if (!VAR_4->marker->max_lines ||
      VAR_4->lines < VAR_4->marker->max_lines) {
   FUNC_4(VAR_3, VAR_4->to_dmesg,
        "0x%0*lx-0x%0*lx   ",
        VAR_14, VAR_4->start_address,
        VAR_14, VAR_4->current_address);

   VAR_13 = VAR_4->current_address - VAR_4->start_address;
   while (!(VAR_13 & 1023) && VAR_12[1]) {
    VAR_13 >>= 10;
    VAR_12++;
   }
   FUNC_3(VAR_3, VAR_4->to_dmesg, "%9lu%c ",
         VAR_13, *VAR_12);
   FUNC_2(VAR_3, VAR_4->current_prot, VAR_4->level,
        VAR_4->to_dmesg);
  }
  VAR_4->lines++;






  if (VAR_4->current_address >= VAR_4->marker[1].start_address) {
   if (VAR_4->marker->max_lines &&
       VAR_4->lines > VAR_4->marker->max_lines) {
    unsigned long VAR_15 =
     VAR_4->lines - VAR_4->marker->max_lines;
    FUNC_4(VAR_3, VAR_4->to_dmesg,
         "... %lu entr%s skipped ... \n",
         VAR_15,
         VAR_15 == 1 ? "y" : "ies");
   }
   VAR_4->marker++;
   VAR_4->lines = 0;
   FUNC_4(VAR_3, VAR_4->to_dmesg, "---[ %s ]---\n",
        VAR_4->marker->name);
  }

  VAR_4->start_address = VAR_4->current_address;
  VAR_4->current_prot = VAR_5;
  VAR_4->effective_prot = VAR_6;
  VAR_4->level = VAR_7;
 }
}

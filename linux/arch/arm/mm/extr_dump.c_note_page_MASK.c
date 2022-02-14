
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pg_state {unsigned int level; scalar_t__ current_prot; char const* current_domain; unsigned long start_address; TYPE_1__* marker; int seq; } ;
struct TYPE_4__ {scalar_t__ mask; int num; scalar_t__ bits; } ;
struct TYPE_3__ {char const* name; unsigned long start_address; } ;


 int FUNC_0 (struct pg_state*,scalar_t__,int ) ;
 int FUNC_1 (struct pg_state*,unsigned long) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct pg_state *VAR_1, unsigned long VAR_2,
        unsigned int VAR_3, u64 VAR_4, const char *VAR_5)
{
 static const char VAR_6[] = "KMGTPE";
 u64 VAR_7 = VAR_4 & VAR_0[VAR_3].mask;

 if (!VAR_1->level) {
  VAR_1->level = VAR_3;
  VAR_1->current_prot = VAR_7;
  VAR_1->current_domain = VAR_5;
  FUNC_2(VAR_1->seq, "---[ %s ]---\n", VAR_1->marker->name);
 } else if (VAR_7 != VAR_1->current_prot || VAR_3 != VAR_1->level ||
     VAR_5 != VAR_1->current_domain ||
     VAR_2 >= VAR_1->marker[1].start_address) {
  const char *VAR_8 = VAR_6;
  unsigned long VAR_9;

  if (VAR_1->current_prot) {
   FUNC_1(VAR_1, VAR_2);
   FUNC_2(VAR_1->seq, "0x%08lx-0x%08lx   ",
       VAR_1->start_address, VAR_2);

   VAR_9 = (VAR_2 - VAR_1->start_address) >> 10;
   while (!(VAR_9 & 1023) && VAR_8[1]) {
    VAR_9 >>= 10;
    VAR_8++;
   }
   FUNC_2(VAR_1->seq, "%9lu%c", VAR_9, *VAR_8);
   if (VAR_1->current_domain)
    FUNC_2(VAR_1->seq, " %s",
       VAR_1->current_domain);
   if (VAR_0[VAR_1->level].bits)
    FUNC_0(VAR_1, VAR_0[VAR_1->level].bits, VAR_0[VAR_1->level].num);
   FUNC_2(VAR_1->seq, "\n");
  }

  if (VAR_2 >= VAR_1->marker[1].start_address) {
   VAR_1->marker++;
   FUNC_2(VAR_1->seq, "---[ %s ]---\n",
       VAR_1->marker->name);
  }
  VAR_1->start_address = VAR_2;
  VAR_1->current_prot = VAR_7;
  VAR_1->current_domain = VAR_5;
  VAR_1->level = VAR_3;
 }
}

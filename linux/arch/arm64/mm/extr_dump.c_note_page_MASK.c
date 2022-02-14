
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pg_state {unsigned int level; scalar_t__ current_prot; unsigned long start_address; TYPE_1__* marker; int seq; } ;
struct TYPE_4__ {scalar_t__ mask; int num; scalar_t__ bits; int name; } ;
struct TYPE_3__ {unsigned long start_address; int name; } ;


 int FUNC_0 (struct pg_state*,scalar_t__,int ) ;
 int FUNC_1 (struct pg_state*,unsigned long) ;
 int FUNC_2 (struct pg_state*,unsigned long) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int ,char*,unsigned long,...) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct pg_state *VAR_1, unsigned long VAR_2, unsigned VAR_3,
    u64 VAR_4)
{
 static const char VAR_5[] = "KMGTPE";
 u64 VAR_6 = VAR_4 & VAR_0[VAR_3].mask;

 if (!VAR_1->level) {
  VAR_1->level = VAR_3;
  VAR_1->current_prot = VAR_6;
  VAR_1->start_address = VAR_2;
  FUNC_3(VAR_1->seq, "---[ %s ]---\n", VAR_1->marker->name);
 } else if (VAR_6 != VAR_1->current_prot || VAR_3 != VAR_1->level ||
     VAR_2 >= VAR_1->marker[1].start_address) {
  const char *VAR_7 = VAR_5;
  unsigned long VAR_8;

  if (VAR_1->current_prot) {
   FUNC_1(VAR_1, VAR_2);
   FUNC_2(VAR_1, VAR_2);
   FUNC_3(VAR_1->seq, "0x%016lx-0x%016lx   ",
       VAR_1->start_address, VAR_2);

   VAR_8 = (VAR_2 - VAR_1->start_address) >> 10;
   while (!(VAR_8 & 1023) && VAR_7[1]) {
    VAR_8 >>= 10;
    VAR_7++;
   }
   FUNC_3(VAR_1->seq, "%9lu%c %s", VAR_8, *VAR_7,
       VAR_0[VAR_1->level].name);
   if (VAR_0[VAR_1->level].bits)
    FUNC_0(VAR_1, VAR_0[VAR_1->level].bits,
       VAR_0[VAR_1->level].num);
   FUNC_4(VAR_1->seq, "\n");
  }

  if (VAR_2 >= VAR_1->marker[1].start_address) {
   VAR_1->marker++;
   FUNC_3(VAR_1->seq, "---[ %s ]---\n", VAR_1->marker->name);
  }

  VAR_1->start_address = VAR_2;
  VAR_1->current_prot = VAR_6;
  VAR_1->level = VAR_3;
 }

 if (VAR_2 >= VAR_1->marker[1].start_address) {
  VAR_1->marker++;
  FUNC_3(VAR_1->seq, "---[ %s ]---\n", VAR_1->marker->name);
 }

}

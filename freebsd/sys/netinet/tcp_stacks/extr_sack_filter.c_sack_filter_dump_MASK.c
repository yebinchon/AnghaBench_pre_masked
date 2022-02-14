
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sack_filter {int sf_ack; int sf_bits; int sf_cur; int sf_used; TYPE_1__* sf_blks; } ;
struct TYPE_2__ {int start; int end; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int,...) ;
 scalar_t__ FUNC_1 (struct sack_filter*,int) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1, struct sack_filter *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_1, "	sf_ack:%u sf_bits:0x%x c:%d used:%d\n",
  VAR_2->sf_ack, VAR_2->sf_bits,
  VAR_2->sf_cur, VAR_2->sf_used);

 for(VAR_3=0; VAR_3<VAR_0; VAR_3++) {
  if (FUNC_1(VAR_2, VAR_3)) {
   FUNC_0(VAR_1, "Entry:%d start:%u end:%u\n", VAR_3,
          VAR_2->sf_blks[VAR_3].start,
          VAR_2->sf_blks[VAR_3].end);
  }
 }
}

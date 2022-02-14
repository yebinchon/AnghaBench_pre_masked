
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tcp_seq ;
struct sack_filter {void* sf_ack; TYPE_1__* sf_blks; int sf_used; int sf_bits; } ;
typedef size_t int32_t ;
struct TYPE_2__ {void* start; void* end; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (void*,void*) ;
 int FUNC_1 (struct sack_filter*,size_t) ;
 scalar_t__ FUNC_2 (struct sack_filter*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct sack_filter *VAR_1, tcp_seq VAR_2)
{
 int32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_2(VAR_1, VAR_3)) {
   if (FUNC_0(VAR_2, VAR_1->sf_blks[VAR_3].end)) {

    VAR_1->sf_bits = FUNC_1(VAR_1, VAR_3);
    VAR_1->sf_used--;
   } else if (FUNC_0(VAR_2, VAR_1->sf_blks[VAR_3].start)) {

    VAR_1->sf_blks[VAR_3].start = VAR_2;





   }
  }
 }
 VAR_1->sf_ack = VAR_2;
}

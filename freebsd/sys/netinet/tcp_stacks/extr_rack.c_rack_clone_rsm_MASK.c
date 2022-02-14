
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcp_rack {int dummy; } ;
struct rack_sendmap {int r_rtr_cnt; int * r_tim_lastsent; int r_start; int r_end; scalar_t__ r_rtr_bytes; int r_dupack; int r_flags; } ;



__attribute__((used)) static __inline void
FUNC_0(struct tcp_rack *VAR_0, struct rack_sendmap *VAR_1,
        struct rack_sendmap *VAR_2, uint32_t VAR_3)
{
 int VAR_4;

 VAR_1->r_start = VAR_3;
 VAR_1->r_end = VAR_2->r_end;
 VAR_1->r_rtr_cnt = VAR_2->r_rtr_cnt;
 VAR_1->r_flags = VAR_2->r_flags;
 VAR_1->r_dupack = VAR_2->r_dupack;
 VAR_1->r_rtr_bytes = 0;
 VAR_2->r_end = VAR_1->r_start;
 for (VAR_4 = 0; VAR_4 < VAR_1->r_rtr_cnt; VAR_4++) {
  VAR_1->r_tim_lastsent[VAR_4] = VAR_2->r_tim_lastsent[VAR_4];
 }
}

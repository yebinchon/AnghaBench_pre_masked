
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct throughput {int prev_total; int curr_total; int prev_ns; unsigned int avg_bytes; unsigned int avg_misecs; unsigned int* last_bytes; size_t idx; unsigned int* last_misecs; int display; } ;
struct progress {int last_value; struct throughput* throughput; } ;


 int VAR_0 ;
 int FUNC_0 (struct progress*,int,int *) ;
 int FUNC_1 (struct progress*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,unsigned int) ;
 struct throughput* FUNC_4 (int,int) ;

void FUNC_5(struct progress *VAR_2, uint64_t VAR_3)
{
 struct throughput *VAR_4;
 uint64_t VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;

 if (!VAR_2)
  return;
 VAR_4 = VAR_2->throughput;

 VAR_5 = FUNC_1(VAR_2);

 if (!VAR_4) {
  VAR_2->throughput = VAR_4 = FUNC_4(1, sizeof(*VAR_4));
  VAR_4->prev_total = VAR_4->curr_total = VAR_3;
  VAR_4->prev_ns = VAR_5;
  FUNC_2(&VAR_4->display, 0);
  return;
 }
 VAR_4->curr_total = VAR_3;


 if (VAR_5 - VAR_4->prev_ns <= 500000000)
  return;
 VAR_6 = ((VAR_5 - VAR_4->prev_ns) * 4398) >> 32;

 VAR_7 = VAR_3 - VAR_4->prev_total;
 VAR_4->prev_total = VAR_3;
 VAR_4->prev_ns = VAR_5;
 VAR_4->avg_bytes += VAR_7;
 VAR_4->avg_misecs += VAR_6;
 VAR_8 = VAR_4->avg_bytes / VAR_4->avg_misecs;
 VAR_4->avg_bytes -= VAR_4->last_bytes[VAR_4->idx];
 VAR_4->avg_misecs -= VAR_4->last_misecs[VAR_4->idx];
 VAR_4->last_bytes[VAR_4->idx] = VAR_7;
 VAR_4->last_misecs[VAR_4->idx] = VAR_6;
 VAR_4->idx = (VAR_4->idx + 1) % VAR_0;

 FUNC_3(&VAR_4->display, VAR_3, VAR_8);
 if (VAR_2->last_value != -1 && VAR_1)
  FUNC_0(VAR_2, VAR_2->last_value, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_stat {double max_time; double sum_time; int t; } ;



inline void FUNC_0 (struct query_stat *VAR_0, double VAR_1) {
  VAR_0->t++;
  if (VAR_0->max_time < VAR_1) {
    VAR_0->max_time = VAR_1;
  }
  VAR_0->sum_time += VAR_1;
}

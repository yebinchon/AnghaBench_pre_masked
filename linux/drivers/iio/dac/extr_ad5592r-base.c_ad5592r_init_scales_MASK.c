
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5592r_state {void*** scale_avail; } ;
typedef long long s64 ;


 void* FUNC_0 (long long,long long,void**) ;

__attribute__((used)) static void FUNC_1(struct ad5592r_state *VAR_0, int VAR_1)
{
 s64 VAR_2 = (s64)VAR_1 * 1000000000LL >> 12;

 VAR_0->scale_avail[0][0] =
  FUNC_0(VAR_2, 1000000000LL, &VAR_0->scale_avail[0][1]);
 VAR_0->scale_avail[1][0] =
  FUNC_0(VAR_2 * 2, 1000000000LL, &VAR_0->scale_avail[1][1]);
}

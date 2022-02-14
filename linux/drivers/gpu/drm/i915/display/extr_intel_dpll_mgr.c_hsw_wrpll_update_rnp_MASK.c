
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct hsw_wrpll_rnp {unsigned int p; unsigned int n2; unsigned int r2; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(u64 VAR_1, unsigned int VAR_2,
     unsigned int VAR_3, unsigned int VAR_4,
     unsigned int VAR_5,
     struct hsw_wrpll_rnp *VAR_6)
{
 u64 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


 if (VAR_6->p == 0) {
  VAR_6->p = VAR_5;
  VAR_6->n2 = VAR_4;
  VAR_6->r2 = VAR_3;
  return;
 }
 VAR_7 = VAR_1 * VAR_2 * VAR_5 * VAR_3;
 VAR_8 = VAR_1 * VAR_2 * VAR_6->p * VAR_6->r2;
 VAR_11 = FUNC_0(VAR_1 * VAR_5 * VAR_3, VAR_0 * VAR_4);
 VAR_12 = FUNC_0(VAR_1 * VAR_6->p * VAR_6->r2,
        VAR_0 * VAR_6->n2);
 VAR_9 = 1000000 * VAR_11;
 VAR_10 = 1000000 * VAR_12;

 if (VAR_7 < VAR_9 && VAR_8 < VAR_10) {

  if (VAR_6->p * VAR_6->r2 * VAR_11 < VAR_5 * VAR_3 * VAR_12) {
   VAR_6->p = VAR_5;
   VAR_6->n2 = VAR_4;
   VAR_6->r2 = VAR_3;
  }
 } else if (VAR_7 >= VAR_9 && VAR_8 < VAR_10) {

  VAR_6->p = VAR_5;
  VAR_6->n2 = VAR_4;
  VAR_6->r2 = VAR_3;
 } else if (VAR_7 >= VAR_9 && VAR_8 >= VAR_10) {

  if (VAR_4 * VAR_6->r2 * VAR_6->r2 > VAR_6->n2 * VAR_3 * VAR_3) {
   VAR_6->p = VAR_5;
   VAR_6->n2 = VAR_4;
   VAR_6->r2 = VAR_3;
  }
 }

}

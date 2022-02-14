
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hsw_wrpll_rnp {unsigned int n2; unsigned int p; unsigned int r2; int member_2; int member_1; int member_0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int,unsigned int,unsigned int,unsigned int,struct hsw_wrpll_rnp*) ;

__attribute__((used)) static void
FUNC_2(int VAR_8 ,
   unsigned *VAR_9, unsigned *VAR_10, unsigned *VAR_11)
{
 u64 VAR_12;
 unsigned VAR_13, VAR_14, VAR_15;
 struct hsw_wrpll_rnp VAR_16 = { 0, 0, 0 };
 unsigned VAR_17;

 VAR_12 = VAR_8 / 100;

 VAR_17 = FUNC_0(VAR_8);



 if (VAR_12 == 5400000) {
  *VAR_10 = 2;
  *VAR_11 = 1;
  *VAR_9 = 2;
  return;
 }
 for (VAR_15 = VAR_0 * 2 / VAR_4 + 1;
      VAR_15 <= VAR_0 * 2 / VAR_5;
      VAR_15++) {
  for (VAR_14 = VAR_7 * VAR_15 / VAR_0 + 1;
       VAR_14 <= VAR_6 * VAR_15 / VAR_0;
       VAR_14++) {

   for (VAR_13 = VAR_3; VAR_13 <= VAR_2; VAR_13 += VAR_1)
    FUNC_1(VAR_12, VAR_17,
           VAR_15, VAR_14, VAR_13, &VAR_16);
  }
 }

 *VAR_10 = VAR_16.n2;
 *VAR_11 = VAR_16.p;
 *VAR_9 = VAR_16.r2;
}

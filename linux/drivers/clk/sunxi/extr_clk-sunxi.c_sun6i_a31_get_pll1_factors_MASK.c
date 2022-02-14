
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct factors_request {int rate; int parent_rate; int k; int m; int n; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct factors_request *VAR_0)
{




 u32 VAR_1 = VAR_0->rate / 1000000;
 u32 VAR_2 = VAR_0->parent_rate / 1000000;





 u32 VAR_3 = FUNC_0(VAR_1, 6);
 u32 VAR_4 = FUNC_0(VAR_1, 16);

 if (VAR_3 > VAR_4)
  VAR_1 = VAR_3;
 else
  VAR_1 = VAR_4;

 VAR_0->rate = VAR_1 * 1000000;


 if (!(VAR_1 % 32))
  VAR_0->k = 3;

 else if (!(VAR_1 % 9))
  VAR_0->k = 2;

 else if (!(VAR_1 % 8))
  VAR_0->k = 1;

 else
  VAR_0->k = 0;
 if ((VAR_1 % 6) == 2 || (VAR_1 % 6) == 4)
  VAR_0->m = 2;




 else if ((VAR_1 / 6) & 1)
  VAR_0->m = 3;

 else
  VAR_0->m = 1;


 VAR_0->n = VAR_1 * (VAR_0->m + 1) / ((VAR_0->k + 1) * VAR_2)
   - 1;





 if ((VAR_0->n + 1) > 31 && (VAR_0->m + 1) > 1) {
  VAR_0->n = (VAR_0->n + 1) / 2 - 1;
  VAR_0->m = (VAR_0->m + 1) / 2 - 1;
 }
}

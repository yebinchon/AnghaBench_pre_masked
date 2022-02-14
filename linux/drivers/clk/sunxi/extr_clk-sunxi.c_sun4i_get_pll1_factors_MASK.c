
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct factors_request {int rate; int k; int p; int n; scalar_t__ m; } ;



__attribute__((used)) static void FUNC_0(struct factors_request *VAR_0)
{
 u8 VAR_1;


 VAR_1 = VAR_0->rate / 6000000;
 VAR_0->rate = 6000000 * VAR_1;


 VAR_0->m = 0;


 if (VAR_0->rate >= 768000000 || VAR_0->rate == 42000000 ||
   VAR_0->rate == 54000000)
  VAR_0->k = 1;
 else
  VAR_0->k = 0;


 if (VAR_1 < 10)
  VAR_0->p = 3;


 else if (VAR_1 < 20 || (VAR_1 < 32 && (VAR_1 & 1)))
  VAR_0->p = 2;



 else if (VAR_1 < 40 || (VAR_1 < 64 && (VAR_1 & 2)))
  VAR_0->p = 1;


 else
  VAR_0->p = 0;


 VAR_1 <<= VAR_0->p;
 VAR_1 /= (VAR_0->k + 1);
 VAR_0->n = VAR_1 / 4;
}

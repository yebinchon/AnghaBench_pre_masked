
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct factors_request {int rate; int n; int m; int p; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct factors_request *VAR_0)
{
 int VAR_1;
 int VAR_2 = 1;
 int VAR_3 = 1;


 VAR_1 = FUNC_0(VAR_0->rate, 6000000);


 if (VAR_1 > 255) {
  VAR_2 = 0;
  VAR_1 = (VAR_1 + 1) / 2;
 }


 if (VAR_1 > 255) {
  VAR_3 = 0;
  VAR_1 = (VAR_1 + 1) / 2;
 }


 if (VAR_1 > 255)
  VAR_1 = 255;
 else if (VAR_1 < 12)
  VAR_1 = 12;

 VAR_0->rate = ((24000000 * VAR_1) >> VAR_3) / (VAR_2 + 1);
 VAR_0->n = VAR_1;
 VAR_0->m = VAR_2;
 VAR_0->p = VAR_3;
}

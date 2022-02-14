
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct factors_request {int rate; int parent_rate; unsigned long m; int p; } ;


 unsigned long FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct factors_request *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;


 if (VAR_0->rate > VAR_0->parent_rate)
  VAR_0->rate = VAR_0->parent_rate;

 VAR_1 = FUNC_0(VAR_0->parent_rate, VAR_0->rate);

 if (VAR_1 < 32)
  VAR_2 = 0;
 else if (VAR_1 >> 1 < 32)
  VAR_2 = 1;
 else if (VAR_1 >> 2 < 32)
  VAR_2 = 2;
 else
  VAR_2 = 3;

 VAR_1 >>= VAR_2;

 if (VAR_1 > 32)
  VAR_1 = 32;

 VAR_0->rate = (VAR_0->parent_rate >> VAR_2) / VAR_1;
 VAR_0->m = VAR_1 - 1;
 VAR_0->p = VAR_2;
}

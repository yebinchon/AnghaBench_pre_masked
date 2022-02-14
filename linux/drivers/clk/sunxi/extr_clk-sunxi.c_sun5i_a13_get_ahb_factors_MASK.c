
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct factors_request {int parent_rate; int rate; int p; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct factors_request *VAR_0)
{
 u32 VAR_1;


 if (VAR_0->parent_rate < VAR_0->rate)
  VAR_0->rate = VAR_0->parent_rate;





 if (VAR_0->rate < 8000)
  VAR_0->rate = 8000;
 if (VAR_0->rate > 300000000)
  VAR_0->rate = 300000000;

 VAR_1 = FUNC_1(FUNC_0(VAR_0->parent_rate, VAR_0->rate));


 if (VAR_1 > 3)
  VAR_1 = 3;

 VAR_0->rate = VAR_0->parent_rate >> VAR_1;

 VAR_0->p = VAR_1;
}

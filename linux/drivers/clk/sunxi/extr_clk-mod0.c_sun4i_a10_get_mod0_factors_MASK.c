
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct factors_request {int rate; int parent_rate; int m; int p; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct factors_request *VAR_0)
{
 u8 VAR_1, VAR_2, VAR_3;



 if (VAR_0->rate > VAR_0->parent_rate)
  VAR_0->rate = VAR_0->parent_rate;

 VAR_1 = FUNC_0(VAR_0->parent_rate, VAR_0->rate);

 if (VAR_1 < 16)
  VAR_3 = 0;
 else if (VAR_1 / 2 < 16)
  VAR_3 = 1;
 else if (VAR_1 / 4 < 16)
  VAR_3 = 2;
 else
  VAR_3 = 3;

 VAR_2 = FUNC_0(VAR_1, 1 << VAR_3);

 VAR_0->rate = (VAR_0->parent_rate >> VAR_3) / VAR_2;
 VAR_0->m = VAR_2 - 1;
 VAR_0->p = VAR_3;
}

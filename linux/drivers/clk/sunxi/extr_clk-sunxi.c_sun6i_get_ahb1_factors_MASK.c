
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct factors_request {int parent_rate; int rate; scalar_t__ parent_index; int p; int m; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct factors_request *VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4 = 1;





 if (VAR_1->parent_rate && VAR_1->rate > VAR_1->parent_rate)
  VAR_1->rate = VAR_1->parent_rate;

 VAR_2 = FUNC_0(VAR_1->parent_rate, VAR_1->rate);


 if (VAR_1->parent_index == VAR_0) {
  if (VAR_2 < 4)
   VAR_3 = 0;
  else if (VAR_2 / 2 < 4)
   VAR_3 = 1;
  else if (VAR_2 / 4 < 4)
   VAR_3 = 2;
  else
   VAR_3 = 3;

  VAR_4 = FUNC_0(VAR_2, 1 << VAR_3);
 } else {
  VAR_3 = FUNC_1(VAR_2);
  VAR_3 = VAR_3 > 3 ? 3 : VAR_3;
 }

 VAR_1->rate = (VAR_1->parent_rate / VAR_4) >> VAR_3;
 VAR_1->p = VAR_3;
 VAR_1->m = VAR_4 - 1;
}

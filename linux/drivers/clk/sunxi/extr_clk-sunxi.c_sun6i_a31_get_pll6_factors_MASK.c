
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct factors_request {int rate; int parent_rate; int k; scalar_t__ n; } ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct factors_request *VAR_0)
{
 u8 VAR_1;


 VAR_1 = VAR_0->rate / VAR_0->parent_rate;
 VAR_0->rate = VAR_0->parent_rate * VAR_1;

 VAR_0->k = VAR_1 / 32;
 if (VAR_0->k > 3)
  VAR_0->k = 3;

 VAR_0->n = FUNC_0(VAR_1, (VAR_0->k + 1)) - 1;
}

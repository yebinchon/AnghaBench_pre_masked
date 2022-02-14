
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct factors_request {int rate; int parent_rate; scalar_t__ parent_index; int m; int p; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct factors_request *VAR_1)
{
 VAR_1->rate = VAR_1->parent_rate;


 if (VAR_1->parent_index == VAR_0)
  VAR_1->rate /= VAR_1->m + 1;


 VAR_1->rate >>= VAR_1->p;
}

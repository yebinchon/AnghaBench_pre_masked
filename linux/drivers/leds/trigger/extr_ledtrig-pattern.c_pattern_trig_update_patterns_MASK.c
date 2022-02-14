
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_trig_data {int curr; int next; int patterns; int npatterns; scalar_t__ delta_t; int repeat; int is_indefinite; } ;



__attribute__((used)) static void FUNC_0(struct pattern_trig_data *VAR_0)
{
 VAR_0->curr = VAR_0->next;
 if (!VAR_0->is_indefinite && VAR_0->curr == VAR_0->patterns)
  VAR_0->repeat--;

 if (VAR_0->next == VAR_0->patterns + VAR_0->npatterns - 1)
  VAR_0->next = VAR_0->patterns;
 else
  VAR_0->next++;

 VAR_0->delta_t = 0;
}

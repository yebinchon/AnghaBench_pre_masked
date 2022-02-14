
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct combine_diff_state {long ob; long on; long nb; long nn; long lno; size_t n; TYPE_1__* sline; int num_parent; TYPE_1__* lost_bucket; } ;
struct TYPE_2__ {long* p_lno; } ;


 long* FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
    long VAR_1, long VAR_2,
    long VAR_3, long VAR_4,
    const char *VAR_5, long VAR_6)
{
 struct combine_diff_state *VAR_7 = VAR_0;

 VAR_7->ob = VAR_1;
 VAR_7->on = VAR_2;
 VAR_7->nb = VAR_3;
 VAR_7->nn = VAR_4;
 VAR_7->lno = VAR_7->nb;
 if (VAR_7->nn == 0) {
  VAR_7->lost_bucket = &VAR_7->sline[VAR_7->nb];
  if (!VAR_7->nb)
   VAR_7->nb = 1;
 } else {
  VAR_7->lost_bucket = &VAR_7->sline[VAR_7->nb-1];
 }
 if (!VAR_7->sline[VAR_7->nb-1].p_lno)
  VAR_7->sline[VAR_7->nb-1].p_lno =
   FUNC_0(VAR_7->num_parent, sizeof(unsigned long));
 VAR_7->sline[VAR_7->nb-1].p_lno[VAR_7->n] = VAR_7->ob;
}

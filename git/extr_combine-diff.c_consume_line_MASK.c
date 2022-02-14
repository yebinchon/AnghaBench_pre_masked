
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct combine_diff_state {int lno; int nmask; TYPE_1__* sline; int n; int lost_bucket; } ;
struct TYPE_2__ {int flag; } ;


 int FUNC_0 (int ,int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, char *VAR_1, unsigned long VAR_2)
{
 struct combine_diff_state *VAR_3 = VAR_0;
 if (!VAR_3->lost_bucket)
  return;
 switch (VAR_1[0]) {
 case '-':
  FUNC_0(VAR_3->lost_bucket, VAR_3->n, VAR_1+1, VAR_2-1);
  break;
 case '+':
  VAR_3->sline[VAR_3->lno-1].flag |= VAR_3->nmask;
  VAR_3->lno++;
  break;
 }
}

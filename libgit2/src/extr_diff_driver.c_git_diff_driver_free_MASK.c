
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int word_pattern; int fn_patterns; } ;
typedef TYPE_1__ git_diff_driver ;
struct TYPE_6__ {int re; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(git_diff_driver *VAR_0)
{
 size_t VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < FUNC_3(VAR_0->fn_patterns); ++VAR_1)
  FUNC_4(& FUNC_2(VAR_0->fn_patterns, VAR_1)->re);
 FUNC_1(VAR_0->fn_patterns);

 FUNC_4(&VAR_0->word_pattern);

 FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {TYPE_1__* untracked; } ;
struct TYPE_2__ {int root; } ;


 int FUNC_0 (TYPE_1__*,int ,char const*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ) ;

void FUNC_3(struct index_state *VAR_0,
         const char *VAR_1, int VAR_2)
{
 if (!VAR_0->untracked || !VAR_0->untracked->root)
  return;
 if (!VAR_2 && !FUNC_2(VAR_1, 0))
  return;
 FUNC_0(VAR_0->untracked, VAR_0->untracked->root,
     VAR_1, FUNC_1(VAR_1));
}

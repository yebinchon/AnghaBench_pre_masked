
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ core_untracked_cache; } ;
struct repository {TYPE_1__ settings; } ;
struct index_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct index_state*) ;
 int FUNC_1 (struct repository*) ;
 int FUNC_2 (struct index_state*) ;
 struct repository* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct index_state *VAR_3)
{
 struct repository *VAR_4 = VAR_2;

 FUNC_1(VAR_4);

 if (VAR_4->settings.core_untracked_cache == VAR_0) {
  FUNC_2(VAR_3);
  return;
 }

 if (VAR_4->settings.core_untracked_cache == VAR_1)
  FUNC_0(VAR_3);
}

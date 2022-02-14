
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head_state {scalar_t__ injournal; scalar_t__ log_failed; } ;
struct r5dev {int flags; } ;
struct r5conf {int cache_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct r5conf *VAR_3,
     struct r5dev *VAR_4,
     struct stripe_head_state *VAR_5)
{

 if (!FUNC_0(VAR_2, &VAR_4->flags) &&
     !FUNC_0(VAR_1, &VAR_4->flags) && VAR_5->injournal)
  return 1;

 if (FUNC_0(VAR_0, &VAR_3->cache_state) &&
     VAR_5->injournal > 0)
  return 1;

 if (VAR_5->log_failed && VAR_5->injournal)
  return 1;
 return 0;
}

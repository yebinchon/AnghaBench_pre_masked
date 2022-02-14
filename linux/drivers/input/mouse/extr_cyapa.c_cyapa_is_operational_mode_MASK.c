
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa {scalar_t__ gen; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct cyapa*) ;

__attribute__((used)) static inline bool FUNC_1(struct cyapa *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 1;

 if (VAR_2->gen == VAR_0 && VAR_2->state == VAR_1)
  return 1;

 return 0;
}

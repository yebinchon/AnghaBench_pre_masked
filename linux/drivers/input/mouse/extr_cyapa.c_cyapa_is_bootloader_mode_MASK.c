
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa {scalar_t__ gen; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct cyapa*) ;

__attribute__((used)) static bool FUNC_1(struct cyapa *VAR_3)
{
 if (FUNC_0(VAR_3))
  return 1;

 if (VAR_3->gen == VAR_0 &&
  VAR_3->state >= VAR_2 &&
  VAR_3->state <= VAR_1)
  return 1;

 return 0;
}

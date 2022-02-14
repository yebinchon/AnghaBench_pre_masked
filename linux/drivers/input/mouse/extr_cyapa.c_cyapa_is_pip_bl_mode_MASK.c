
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa {scalar_t__ gen; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

bool FUNC_0(struct cyapa *VAR_4)
{
 if (VAR_4->gen == VAR_1 && VAR_4->state == VAR_3)
  return 1;

 if (VAR_4->gen == VAR_0 && VAR_4->state == VAR_2)
  return 1;

 return 0;
}

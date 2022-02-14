
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa {scalar_t__ gen; scalar_t__ operational; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct cyapa *VAR_1)
{

 if (VAR_1->gen != VAR_0)
  return 1;

 if (VAR_1->operational)
  return 1;
 return 0;
}

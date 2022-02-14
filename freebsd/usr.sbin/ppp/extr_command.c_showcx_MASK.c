
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdtab {int lauth; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(struct cmdtab const *VAR_2)
{
  if (VAR_2->lauth & VAR_0)
    return "(c)";
  else if (VAR_2->lauth & VAR_1)
    return "(o)";

  return "";
}

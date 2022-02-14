
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {scalar_t__ cherry_mark; scalar_t__ graph; scalar_t__ left_right; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

char *FUNC_0(const struct rev_info *VAR_4, const struct commit *VAR_5)
{
 if (VAR_5->object.flags & VAR_0)
  return "-";
 else if (VAR_5->object.flags & VAR_3)
  return "^";
 else if (VAR_5->object.flags & VAR_1)
  return "=";
 else if (!VAR_4 || VAR_4->left_right) {
  if (VAR_5->object.flags & VAR_2)
   return "<";
  else
   return ">";
 } else if (VAR_4->graph)
  return "*";
 else if (VAR_4->cherry_mark)
  return "+";
 return "";
}

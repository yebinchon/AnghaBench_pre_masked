
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_list {int stage; struct merge_list* link; } ;



__attribute__((used)) static const char *FUNC_0(struct merge_list *VAR_0)
{
 switch (VAR_0->stage) {
 case 0:
  return "merged";
 case 3:
  return "added in remote";
 case 2:
  if (VAR_0->link)
   return "added in both";
  return "added in local";
 }


 VAR_0 = VAR_0->link;
 if (!VAR_0)
  return "removed in both";

 if (VAR_0->link)
  return "changed in both";

 if (VAR_0->stage == 3)
  return "removed in local";
 return "removed in remote";
}

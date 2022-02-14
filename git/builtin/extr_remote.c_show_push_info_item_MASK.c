
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; struct push_info* util; } ;
struct show_info {int width; int width2; } ;
struct push_info {int status; int dest; scalar_t__ forced; } ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char const*,int ,...) ;

__attribute__((used)) static int FUNC_2(struct string_list_item *VAR_0, void *VAR_1)
{
 struct show_info *VAR_2 = VAR_1;
 struct push_info *VAR_3 = VAR_0->util;
 const char *VAR_4 = VAR_0->string, *VAR_5 = ((void*)0);

 switch (VAR_3->status) {
 case 133:
  VAR_5 = FUNC_0("create");
  break;
 case 132:
  VAR_5 = FUNC_0("delete");
  VAR_4 = FUNC_0("(none)");
  break;
 case 128:
  VAR_5 = FUNC_0("up to date");
  break;
 case 131:
  VAR_5 = FUNC_0("fast-forwardable");
  break;
 case 129:
  VAR_5 = FUNC_0("local out of date");
  break;
 case 130:
  break;
 }
 if (VAR_5) {
  if (VAR_3->forced)
   FUNC_1(FUNC_0("    %-*s forces to %-*s (%s)"), VAR_2->width, VAR_4,
          VAR_2->width2, VAR_3->dest, VAR_5);
  else
   FUNC_1(FUNC_0("    %-*s pushes to %-*s (%s)"), VAR_2->width, VAR_4,
          VAR_2->width2, VAR_3->dest, VAR_5);
 } else {
  if (VAR_3->forced)
   FUNC_1(FUNC_0("    %-*s forces to %s"), VAR_2->width, VAR_4,
          VAR_3->dest);
  else
   FUNC_1(FUNC_0("    %-*s pushes to %s"), VAR_2->width, VAR_4,
          VAR_3->dest);
 }
 return 0;
}

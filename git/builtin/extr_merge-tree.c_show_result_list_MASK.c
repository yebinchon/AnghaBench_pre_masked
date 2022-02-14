
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_list {size_t stage; int mode; char* path; TYPE_2__* blob; struct merge_list* link; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 char* FUNC_0 (struct merge_list*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_3(struct merge_list *VAR_0)
{
 FUNC_2("%s\n", FUNC_0(VAR_0));
 do {
  struct merge_list *VAR_1 = VAR_0->link;
  static const char *VAR_2[4] = { "result", "base", "our", "their" };
  FUNC_2("  %-6s %o %s %s\n", VAR_2[VAR_0->stage], VAR_0->mode, FUNC_1(&VAR_0->blob->object.oid), VAR_0->path);
  VAR_0 = VAR_1;
 } while (VAR_0);
}

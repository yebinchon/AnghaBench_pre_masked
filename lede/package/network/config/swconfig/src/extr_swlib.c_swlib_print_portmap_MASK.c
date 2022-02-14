
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int cpu_port; int ports; char* dev_name; char* name; TYPE_1__* maps; } ;
struct TYPE_2__ {char* segment; int virt; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;

void
FUNC_2(struct switch_dev *VAR_0, char *VAR_1)
{
 int VAR_2;

 if (VAR_1) {
  if (!FUNC_1(VAR_1, "cpu")) {
   FUNC_0("%d ", VAR_0->cpu_port);
  } else if (!FUNC_1(VAR_1, "disabled")) {
   for (VAR_2 = 0; VAR_2 < VAR_0->ports; VAR_2++)
    if (!VAR_0->maps[VAR_2].segment)
     FUNC_0("%d ", VAR_2);
  } else for (VAR_2 = 0; VAR_2 < VAR_0->ports; VAR_2++) {
   if (VAR_0->maps[VAR_2].segment && !FUNC_1(VAR_0->maps[VAR_2].segment, VAR_1))
    FUNC_0("%d ", VAR_2);
  }
 } else {
  FUNC_0("%s - %s\n", VAR_0->dev_name, VAR_0->name);
  for (VAR_2 = 0; VAR_2 < VAR_0->ports; VAR_2++)
   if (VAR_2 == VAR_0->cpu_port)
    FUNC_0("port%d:\tcpu\n", VAR_2);
   else if (VAR_0->maps[VAR_2].segment)
    FUNC_0("port%d:\t%s.%d\n", VAR_2, VAR_0->maps[VAR_2].segment, VAR_0->maps[VAR_2].virt);
   else
    FUNC_0("port%d:\tdisabled\n", VAR_2);
 }
}

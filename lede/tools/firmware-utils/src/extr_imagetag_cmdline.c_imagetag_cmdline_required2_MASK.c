
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gengetopt_args_info {int entry_given; int load_addr_given; int chipid_given; int boardid_given; int output_given; int rootfs_given; int kernel_given; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int VAR_0 ;

int
FUNC_2 (struct gengetopt_args_info *VAR_1, const char *VAR_2, const char *VAR_3)
{
  int VAR_4 = 0;
  FUNC_0 (VAR_3);


  if (! VAR_1->kernel_given)
    {
      FUNC_1 (VAR_0, "%s: '--kernel' ('-i') option required%s\n", VAR_2, (VAR_3 ? VAR_3 : ""));
      VAR_4 = 1;
    }

  if (! VAR_1->rootfs_given)
    {
      FUNC_1 (VAR_0, "%s: '--rootfs' ('-f') option required%s\n", VAR_2, (VAR_3 ? VAR_3 : ""));
      VAR_4 = 1;
    }

  if (! VAR_1->output_given)
    {
      FUNC_1 (VAR_0, "%s: '--output' ('-o') option required%s\n", VAR_2, (VAR_3 ? VAR_3 : ""));
      VAR_4 = 1;
    }

  if (! VAR_1->boardid_given)
    {
      FUNC_1 (VAR_0, "%s: '--boardid' ('-b') option required%s\n", VAR_2, (VAR_3 ? VAR_3 : ""));
      VAR_4 = 1;
    }

  if (! VAR_1->chipid_given)
    {
      FUNC_1 (VAR_0, "%s: '--chipid' ('-c') option required%s\n", VAR_2, (VAR_3 ? VAR_3 : ""));
      VAR_4 = 1;
    }

  if (! VAR_1->load_addr_given)
    {
      FUNC_1 (VAR_0, "%s: '--load-addr' ('-l') option required%s\n", VAR_2, (VAR_3 ? VAR_3 : ""));
      VAR_4 = 1;
    }

  if (! VAR_1->entry_given)
    {
      FUNC_1 (VAR_0, "%s: '--entry' ('-e') option required%s\n", VAR_2, (VAR_3 ? VAR_3 : ""));
      VAR_4 = 1;
    }




  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{

 if (VAR_0)
  (void)FUNC_1(VAR_2, "usage: groups [user]\n");
 else if (VAR_1)
  (void)FUNC_1(VAR_2, "usage: whoami\n");
 else
  (void)FUNC_1(VAR_2, "%s\n%s%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
      "usage: id [user]",



      "",

      "       id -G [-n] [user]",
      "       id -M",
      "       id -P [user]",
      "       id -c",
      "       id -g [-nr] [user]",
      "       id -p [user]",
      "       id -u [-nr] [user]");
 FUNC_0(1);
}

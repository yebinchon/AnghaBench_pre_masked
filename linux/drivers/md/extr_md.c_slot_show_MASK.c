
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {scalar_t__ raid_disk; int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct md_rdev *VAR_1, char *VAR_2)
{
 if (FUNC_1(VAR_0, &VAR_1->flags))
  return FUNC_0(VAR_2, "journal\n");
 else if (VAR_1->raid_disk < 0)
  return FUNC_0(VAR_2, "none\n");
 else
  return FUNC_0(VAR_2, "%d\n", VAR_1->raid_disk);
}

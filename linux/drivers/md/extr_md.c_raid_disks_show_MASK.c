
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ raid_disks; scalar_t__ reshape_position; scalar_t__ delta_disks; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_1, char *VAR_2)
{
 if (VAR_1->raid_disks == 0)
  return 0;
 if (VAR_1->reshape_position != VAR_0 &&
     VAR_1->delta_disks != 0)
  return FUNC_0(VAR_2, "%d (%d)\n", VAR_1->raid_disks,
          VAR_1->raid_disks - VAR_1->delta_disks);
 return FUNC_0(VAR_2, "%d\n", VAR_1->raid_disks);
}

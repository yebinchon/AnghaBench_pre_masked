
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int size; } ;
struct md_rdev {scalar_t__ raid_disk; TYPE_1__ ppl; TYPE_2__* mddev; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {scalar_t__ major_version; int external; scalar_t__ persistent; int flags; scalar_t__ pers; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned int*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct md_rdev *VAR_4, const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7;

 if (FUNC_0(VAR_5, 10, &VAR_7) < 0)
  return -VAR_1;

 if (VAR_4->mddev->pers && FUNC_1(VAR_2, &VAR_4->mddev->flags) &&
     VAR_4->raid_disk >= 0)
  return -VAR_0;

 if (VAR_4->mddev->persistent) {
  if (VAR_4->mddev->major_version == 0)
   return -VAR_1;
  if (VAR_7 > VAR_3)
   return -VAR_1;
 } else if (!VAR_4->mddev->external) {
  return -VAR_0;
 }
 VAR_4->ppl.size = VAR_7;
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long offset; unsigned long long sector; } ;
struct md_rdev {scalar_t__ raid_disk; unsigned long long sb_start; TYPE_2__ ppl; TYPE_1__* mddev; } ;
typedef size_t ssize_t ;
typedef unsigned long long sector_t ;
struct TYPE_3__ {scalar_t__ major_version; int external; scalar_t__ persistent; int flags; scalar_t__ pers; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct md_rdev *VAR_5, const char *VAR_6, size_t VAR_7)
{
 unsigned long long VAR_8;

 if (FUNC_0(VAR_6, 10, &VAR_8) < 0)
  return -VAR_1;
 if (VAR_8 != (sector_t)VAR_8)
  return -VAR_1;

 if (VAR_5->mddev->pers && FUNC_1(VAR_2, &VAR_5->mddev->flags) &&
     VAR_5->raid_disk >= 0)
  return -VAR_0;

 if (VAR_5->mddev->persistent) {
  if (VAR_5->mddev->major_version == 0)
   return -VAR_1;
  if ((VAR_8 > VAR_5->sb_start &&
       VAR_8 - VAR_5->sb_start > VAR_3) ||
      (VAR_8 < VAR_5->sb_start &&
       VAR_5->sb_start - VAR_8 > -VAR_4))
   return -VAR_1;
  VAR_5->ppl.offset = VAR_8 - VAR_5->sb_start;
 } else if (!VAR_5->mddev->external) {
  return -VAR_0;
 }
 VAR_5->ppl.sector = VAR_8;
 return VAR_7;
}

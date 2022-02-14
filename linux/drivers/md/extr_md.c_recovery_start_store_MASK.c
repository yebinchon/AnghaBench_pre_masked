
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_rdev {scalar_t__ raid_disk; unsigned long long recovery_offset; int flags; TYPE_1__* mddev; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ pers; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long long*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct md_rdev *VAR_4, const char *VAR_5, size_t VAR_6)
{
 unsigned long long VAR_7;

 if (FUNC_1(VAR_5, "none"))
  VAR_7 = VAR_3;
 else if (FUNC_2(VAR_5, 10, &VAR_7))
  return -VAR_1;

 if (VAR_4->mddev->pers &&
     VAR_4->raid_disk >= 0)
  return -VAR_0;

 VAR_4->recovery_offset = VAR_7;
 if (VAR_7 == VAR_3)
  FUNC_3(VAR_2, &VAR_4->flags);
 else
  FUNC_0(VAR_2, &VAR_4->flags);
 return VAR_6;
}

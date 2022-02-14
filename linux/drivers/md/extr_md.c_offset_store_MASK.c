
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_rdev {scalar_t__ raid_disk; unsigned long long data_offset; unsigned long long new_data_offset; TYPE_1__* mddev; scalar_t__ sectors; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ external; scalar_t__ pers; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct md_rdev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long long VAR_5;
 if (FUNC_0(VAR_3, 10, &VAR_5) < 0)
  return -VAR_1;
 if (VAR_2->mddev->pers && VAR_2->raid_disk >= 0)
  return -VAR_0;
 if (VAR_2->sectors && VAR_2->mddev->external)


  return -VAR_0;
 VAR_2->data_offset = VAR_5;
 VAR_2->new_data_offset = VAR_5;
 return VAR_4;
}

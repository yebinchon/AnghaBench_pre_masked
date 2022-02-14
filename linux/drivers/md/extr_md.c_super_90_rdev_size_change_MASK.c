
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct md_rdev {scalar_t__ sb_start; int sb_page; int sb_size; TYPE_2__* mddev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__ dev_sectors; int level; TYPE_1__ bitmap_info; } ;


 scalar_t__ FUNC_0 (struct md_rdev*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,struct md_rdev*,scalar_t__,int ,int ) ;

__attribute__((used)) static unsigned long long
FUNC_3(struct md_rdev *VAR_0, sector_t VAR_1)
{
 if (VAR_1 && VAR_1 < VAR_0->mddev->dev_sectors)
  return 0;
 if (VAR_0->mddev->bitmap_info.offset)
  return 0;
 VAR_0->sb_start = FUNC_0(VAR_0);
 if (!VAR_1 || VAR_1 > VAR_0->sb_start)
  VAR_1 = VAR_0->sb_start;



 if ((u64)VAR_1 >= (2ULL << 32) && VAR_0->mddev->level >= 1)
  VAR_1 = (sector_t)(2ULL << 32) - 2;
 do {
  FUNC_2(VAR_0->mddev, VAR_0, VAR_0->sb_start, VAR_0->sb_size,
         VAR_0->sb_page);
 } while (FUNC_1(VAR_0->mddev) < 0);
 return VAR_1;
}

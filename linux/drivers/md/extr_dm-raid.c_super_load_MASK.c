
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct md_rdev {int sb_page; TYPE_1__* mddev; int flags; int recovery_offset; int sb_size; } ;
struct dm_raid_superblock {scalar_t__ magic; int events; scalar_t__ compat_features; } ;
struct TYPE_2__ {int sb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct dm_raid_superblock* FUNC_2 (int ) ;
 int FUNC_3 (struct md_rdev*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*,struct md_rdev*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct md_rdev *VAR_5, struct md_rdev *VAR_6)
{
 int VAR_7;
 struct dm_raid_superblock *VAR_8;
 struct dm_raid_superblock *VAR_9;
 uint64_t VAR_10, VAR_11;

 VAR_7 = FUNC_3(VAR_5, VAR_5->sb_size, 0);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_2(VAR_5->sb_page);






 if ((VAR_8->magic != FUNC_0(VAR_0)) ||
     (!FUNC_6(VAR_3, &VAR_5->flags) && !VAR_5->recovery_offset)) {
  FUNC_5(VAR_5->mddev, VAR_5);

  FUNC_4(VAR_2, &VAR_5->flags);
  VAR_8->compat_features = FUNC_0(VAR_1);


  FUNC_4(VAR_4, &VAR_5->mddev->sb_flags);


  return VAR_6 ? 0 : 1;
 }

 if (!VAR_6)
  return 1;

 VAR_10 = FUNC_1(VAR_8->events);

 VAR_9 = FUNC_2(VAR_6->sb_page);
 VAR_11 = FUNC_1(VAR_9->events);

 return (VAR_10 > VAR_11) ? 1 : 0;
}

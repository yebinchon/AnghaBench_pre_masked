
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int sb_loaded; int flags; int mddev; int raid_disk; int sb_page; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct md_rdev*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct md_rdev*,int ,int,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct md_rdev *VAR_3, int VAR_4, bool VAR_5)
{
 FUNC_0(!VAR_3->sb_page);

 if (VAR_3->sb_loaded && !VAR_5)
  return 0;

 VAR_3->sb_loaded = 0;

 if (!FUNC_4(VAR_3, 0, VAR_4, VAR_3->sb_page, VAR_2, 0, 1)) {
  FUNC_1("Failed to read superblock of device at position %d",
        VAR_3->raid_disk);
  FUNC_2(VAR_3->mddev, VAR_3);
  FUNC_3(VAR_1, &VAR_3->flags);
  return -VAR_0;
 }

 VAR_3->sb_loaded = 1;

 return 0;
}

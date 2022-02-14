
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int sb_loaded; int bdev; int sb_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct md_rdev*,int ,int,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct md_rdev *VAR_3, int VAR_4)
{
 char VAR_5[VAR_0];

 if (VAR_3->sb_loaded)
  return 0;

 if (!FUNC_2(VAR_3, 0, VAR_4, VAR_3->sb_page, VAR_2, 0, 1))
  goto fail;
 VAR_3->sb_loaded = 1;
 return 0;

fail:
 FUNC_1("md: disabled device %s, could not read superblock.\n",
        FUNC_0(VAR_3->bdev,VAR_5));
 return -VAR_1;
}

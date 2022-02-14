
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int sb_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct md_rdev *VAR_2)
{
 VAR_2->sb_page = FUNC_0(VAR_1);
 if (!VAR_2->sb_page)
  return -VAR_0;
 return 0;
}

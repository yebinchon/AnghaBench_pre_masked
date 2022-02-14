
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(struct stat *VAR_0, struct stat *VAR_1)
{

 FUNC_0(VAR_0->st_dev == VAR_1->st_dev, "different device");
 FUNC_0(VAR_0->st_ino == VAR_1->st_ino, "different inode");
}

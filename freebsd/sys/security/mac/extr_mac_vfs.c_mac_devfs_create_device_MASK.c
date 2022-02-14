
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct mount {int dummy; } ;
struct devfs_dirent {int de_label; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (int ,struct ucred*,struct mount*,struct cdev*,struct devfs_dirent*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct ucred *VAR_1, struct mount *VAR_2,
    struct cdev *VAR_3, struct devfs_dirent *VAR_4)
{

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_4->de_label);
}

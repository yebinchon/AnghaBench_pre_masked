
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {TYPE_2__* v_mount; } ;
struct inode {scalar_t__ i_number; int i_effnlink; } ;
typedef int intmax_t ;
struct TYPE_3__ {int f_mntonname; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 struct inode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (char*,char const*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, struct vnode *VAR_1)
{
 struct inode *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1("%s: Bad link count %d on parent inode %jd in file system %s\n",
     VAR_0, VAR_2->i_effnlink, (intmax_t)VAR_2->i_number,
     VAR_1->v_mount->mnt_stat.f_mntonname);
}

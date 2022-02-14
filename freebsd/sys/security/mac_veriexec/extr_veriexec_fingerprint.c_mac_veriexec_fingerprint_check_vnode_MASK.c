
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct vnode {TYPE_2__* v_mount; scalar_t__ v_writecount; } ;
struct thread {int dummy; } ;
struct mac_veriexec_file_info {int gen; scalar_t__ fileid; } ;
typedef int off_t ;
struct TYPE_4__ {int mnt_flag; TYPE_1__* mnt_vfc; } ;
struct TYPE_3__ {int vfc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vnode*,struct mac_veriexec_file_info*,struct thread*,int ,unsigned char*) ;
 scalar_t__ FUNC_2 (struct mac_veriexec_file_info*,unsigned char*) ;

int
FUNC_3(struct vnode *VAR_3,
    struct mac_veriexec_file_info *VAR_4, struct thread *VAR_5, off_t VAR_6,
    unsigned char *VAR_7)
{
 int VAR_8;


 if (VAR_3->v_writecount)
  return (VAR_1);

 if ((VAR_3->v_mount->mnt_flag & VAR_2) != 0) {
  FUNC_0(2, ("file %ju.%lu on verified %s mount\n",
      (uintmax_t)VAR_4->fileid, VAR_4->gen,
      VAR_3->v_mount->mnt_vfc->vfc_name));





  return (0);
 }

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return (VAR_8);

 if (FUNC_2(VAR_4, VAR_7) != 0)
  return (VAR_0);

 return (0);
}

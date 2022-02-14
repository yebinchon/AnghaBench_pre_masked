
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode_au_info {int vn_gen; int vn_fileid; int vn_fsid; int vn_dev; int vn_gid; int vn_uid; int vn_mode; } ;
struct vnode {int dummy; } ;
struct vattr {int va_gen; int va_fileid; int va_fsid; int va_rdev; int va_gid; int va_uid; int va_mode; } ;
struct TYPE_2__ {int td_ucred; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (struct vnode*,struct vattr*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct vnode *VAR_1, struct vnode_au_info *VAR_2)
{
 struct vattr VAR_3;
 int VAR_4;

 FUNC_0(VAR_1, "audit_arg_vnode");

 VAR_4 = FUNC_1(VAR_1, &VAR_3, VAR_0->td_ucred);
 if (VAR_4) {

  return (VAR_4);
 }

 VAR_2->vn_mode = VAR_3.va_mode;
 VAR_2->vn_uid = VAR_3.va_uid;
 VAR_2->vn_gid = VAR_3.va_gid;
 VAR_2->vn_dev = VAR_3.va_rdev;
 VAR_2->vn_fsid = VAR_3.va_fsid;
 VAR_2->vn_fileid = VAR_3.va_fileid;
 VAR_2->vn_gen = VAR_3.va_gen;
 return (0);
}

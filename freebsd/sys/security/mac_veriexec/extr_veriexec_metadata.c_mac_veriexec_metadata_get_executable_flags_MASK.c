
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int va_gen; int va_fileid; int va_fsid; } ;
struct ucred {int dummy; } ;
struct proc {struct vnode* p_textvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_1 (int ,int ,int ,int*,int) ;

int
FUNC_2(struct ucred *VAR_2, struct proc *VAR_3,
    int *VAR_4, int VAR_5)
{
 struct vnode *VAR_6;
 struct vattr VAR_7;
 int VAR_8;


 VAR_6 = VAR_3->p_textvp;
 if (VAR_6 == ((void*)0))
  return VAR_0;


 VAR_8 = FUNC_0(VAR_6, &VAR_7, VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_7.va_fsid,
     VAR_7.va_fileid, VAR_7.va_gen, VAR_4,
     (VAR_5 == VAR_1));

 return (VAR_8);
}

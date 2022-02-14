
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct ucred {int dummy; } ;


 int FUNC_0 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_1 (struct ucred*,struct vnode*,struct vattr*,int) ;
 int VAR_0 ;

int
FUNC_2(struct ucred *VAR_1, struct vnode *VAR_2, int VAR_3)
{
 int VAR_4;
 struct vattr VAR_5;

 if (!VAR_0)
  return (0);
 VAR_4 = FUNC_0(VAR_2, &VAR_5, VAR_1);
 if (VAR_4)
  return (VAR_4);
 return (FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_3));
}

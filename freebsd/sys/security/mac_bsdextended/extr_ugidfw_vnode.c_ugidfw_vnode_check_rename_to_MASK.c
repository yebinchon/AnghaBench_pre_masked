
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct label {int dummy; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucred*,struct vnode*,int ) ;

int
FUNC_1(struct ucred *VAR_1, struct vnode *VAR_2,
    struct label *VAR_3, struct vnode *VAR_4, struct label *VAR_5,
    int VAR_6, struct componentname *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_8)
  return (VAR_8);
 if (VAR_4 != ((void*)0))
  VAR_8 = FUNC_0(VAR_1, VAR_4, VAR_0);
 return (VAR_8);
}

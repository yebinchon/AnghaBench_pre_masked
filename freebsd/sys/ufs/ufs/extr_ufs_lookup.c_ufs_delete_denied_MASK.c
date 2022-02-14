
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,struct thread*) ;
 int FUNC_1 (struct vnode*,int,struct ucred*,struct thread*) ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_8, struct vnode *VAR_9, struct ucred *VAR_10,
    struct thread *VAR_11)
{
 int VAR_12;
 VAR_12 = FUNC_0(VAR_8, VAR_7, VAR_10, VAR_11);
 if (VAR_12)
  return (VAR_12);







 if ((FUNC_2(VAR_8)->i_mode & VAR_1) &&
     FUNC_0(VAR_8, VAR_2, VAR_10, VAR_11) &&
     FUNC_0(VAR_9, VAR_2, VAR_10, VAR_11))
  return (VAR_0);

 return (0);
}

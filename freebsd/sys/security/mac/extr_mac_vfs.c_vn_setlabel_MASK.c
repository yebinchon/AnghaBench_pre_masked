
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct label {int dummy; } ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,int ) ;
 int FUNC_1 (struct vnode*,struct label*,struct ucred*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct ucred*,struct vnode*,struct label*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct vnode *VAR_6, struct label *VAR_7, struct ucred *VAR_8)
{
 int VAR_9;

 if (VAR_6->v_mount == ((void*)0)) {

  if (VAR_6->v_type != VAR_4)
   FUNC_3("vn_setlabel: null v_mount with non-VNON\n");
  return (VAR_0);
 }

 if ((VAR_6->v_mount->mnt_flag & VAR_2) == 0)
  return (VAR_1);
 VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_7);
 if (VAR_9)
  return (VAR_9);
 VAR_9 = FUNC_0(VAR_6, VAR_3, VAR_8, VAR_5);
 if (VAR_9)
  return (VAR_9);

 VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_5);
 if (VAR_9)
  return (VAR_9);

 return (0);
}

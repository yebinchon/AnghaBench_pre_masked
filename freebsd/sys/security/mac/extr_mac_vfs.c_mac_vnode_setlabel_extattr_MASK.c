
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct ucred {int dummy; } ;
struct label {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ucred*,struct vnode*,int ,struct label*) ;
 int VAR_1 ;
 int FUNC_2 (struct vnode*,int,int ,int ) ;
 int FUNC_3 (struct vnode*,struct ucred*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct ucred *VAR_5, struct vnode *VAR_6,
    struct label *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_6, "mac_vnode_setlabel_extattr");

 VAR_8 = FUNC_3(VAR_6, VAR_5, VAR_2);
 if (VAR_8 == VAR_0) {
  if (VAR_3 == 0) {
   FUNC_4("Warning: transactions not supported "
       "in EA write.\n");
   VAR_3 = 1;
  }
 } else if (VAR_8)
  return (VAR_8);

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_6->v_label,
     VAR_7);

 if (VAR_8) {
  FUNC_2(VAR_6, 0, VAR_1, VAR_2);
  return (VAR_8);
 }

 VAR_8 = FUNC_2(VAR_6, 1, VAR_1, VAR_2);
 if (VAR_8 == VAR_0)
  VAR_8 = 0;

 return (VAR_8);
}

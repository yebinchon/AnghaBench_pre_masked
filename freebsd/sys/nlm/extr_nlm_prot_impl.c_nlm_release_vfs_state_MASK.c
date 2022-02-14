
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_state {scalar_t__ vs_mp; scalar_t__ vs_vp; scalar_t__ vs_vnlocked; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct vfs_state *VAR_0)
{

 if (VAR_0->vs_vp) {
  if (VAR_0->vs_vnlocked)
   FUNC_1(VAR_0->vs_vp);
  else
   FUNC_2(VAR_0->vs_vp);
 }
 if (VAR_0->vs_mp)
  FUNC_0(VAR_0->vs_mp);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; int v_iflag; int v_rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct vnode*) ;
 int FUNC_4 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_5(struct vnode *VAR_5)
{
 int VAR_6;

 FUNC_4(VAR_5, VAR_1 | VAR_2);
 if (VAR_5->v_type != VAR_3 || (VAR_5->v_iflag & VAR_4) != 0) {
  VAR_6 = VAR_0;
 } else {
  FUNC_1();
  VAR_6 = FUNC_3(VAR_5->v_rdev, VAR_5);
  FUNC_2();
 }
 FUNC_0(VAR_5, 0);
 return (VAR_6);
}

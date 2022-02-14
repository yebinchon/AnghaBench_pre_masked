
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct denode* v_data; } ;
struct msdosfsmount {struct vnode* pm_devvp; } ;
struct denode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msdosfsmount*,int ,int ,struct denode**) ;
 int VAR_2 ;

int
FUNC_1(struct msdosfsmount *VAR_3, struct vnode *VAR_4) {
 struct denode *VAR_5;
 int VAR_6;

 *VAR_4 = *VAR_3->pm_devvp;
 if ((VAR_6 = FUNC_0(VAR_3, VAR_0, VAR_1, &VAR_5)) != 0) {
  VAR_2 = VAR_6;
  return -1;
 }
 VAR_4->v_data = VAR_5;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct label*) ;
 struct label* FUNC_1 () ;

void
FUNC_2(struct vnode *VAR_2,
    struct label **VAR_3)
{

 if (VAR_1 & VAR_0) {
  *VAR_3 = FUNC_1();
  FUNC_0(VAR_2->v_label, *VAR_3);
 } else
  *VAR_3 = ((void*)0);
}

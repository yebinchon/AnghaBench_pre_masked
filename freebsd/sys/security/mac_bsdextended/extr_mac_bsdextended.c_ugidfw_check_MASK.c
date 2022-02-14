
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct ucred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int ** VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct ucred*,struct vnode*,struct vattr*,int) ;

int
FUNC_3(struct ucred *VAR_6, struct vnode *VAR_7, struct vattr *VAR_8,
    int VAR_9)
{
 int VAR_10, VAR_11;




 if (VAR_9 & VAR_1) {
  VAR_9 &= ~VAR_1;
  VAR_9 |= VAR_2;
 }
 FUNC_0(&VAR_5);
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_4[VAR_11] == ((void*)0))
   continue;
  VAR_10 = FUNC_2(VAR_4[VAR_11], VAR_6,
      VAR_7, VAR_8, VAR_9);
  if (VAR_10 == VAR_0)
   break;
  if (VAR_10) {
   FUNC_1(&VAR_5);
   return (VAR_10);
  }
 }
 FUNC_1(&VAR_5);
 return (0);
}

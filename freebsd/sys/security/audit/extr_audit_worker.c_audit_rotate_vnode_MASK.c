
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_size; } ;
struct ucred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_4 (struct vnode*,int ) ;
 struct ucred* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 () ;
 int VAR_6 ;
 struct vnode* VAR_7 ;
 int FUNC_6 (struct ucred*) ;
 int VAR_8 ;
 int FUNC_7 (struct vnode*,int ,struct ucred*,int ) ;
 int FUNC_8 (struct vnode*,int) ;

void
FUNC_9(struct ucred *VAR_9, struct vnode *VAR_10)
{
 struct ucred *VAR_11;
 struct vnode *VAR_12;
 struct vattr VAR_13;

 FUNC_2((VAR_9 != ((void*)0) && VAR_10 != ((void*)0)) || (VAR_9 == ((void*)0) && VAR_10 == ((void*)0)),
     ("audit_rotate_vnode: cred %p vp %p", VAR_9, VAR_10));

 if (VAR_10 != ((void*)0)) {
  FUNC_8(VAR_10, VAR_2 | VAR_1);
  if (FUNC_3(VAR_10, &VAR_13, VAR_9) != 0)
   VAR_13.va_size = 0;
  FUNC_4(VAR_10, 0);
 } else {
  VAR_13.va_size = 0;
 }





 FUNC_0();
 VAR_11 = VAR_3;
 VAR_12 = VAR_7;
 VAR_3 = VAR_9;
 VAR_7 = VAR_10;
 VAR_5 = VAR_13.va_size;
 VAR_4 = 0;
 VAR_6 = (VAR_7 != ((void*)0));
 FUNC_5();
 FUNC_1();




 if (VAR_12 != ((void*)0)) {
  FUNC_7(VAR_12, VAR_0, VAR_11,
      VAR_8);
  FUNC_6(VAR_11);
 }
}

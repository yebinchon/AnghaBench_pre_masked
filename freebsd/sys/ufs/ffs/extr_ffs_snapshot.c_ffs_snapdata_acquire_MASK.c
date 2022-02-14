
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_rdev; } ;
struct snapdata {int sn_lock; } ;
struct TYPE_2__ {struct snapdata* si_snapdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnode*) ;
 int * FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 struct snapdata* FUNC_3 () ;
 int FUNC_4 (struct snapdata*) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static struct snapdata *
FUNC_7(struct vnode *VAR_4)
{
 struct snapdata *VAR_5, *VAR_6;
 int VAR_7;






 VAR_5 = FUNC_3();

 for (;;) {
  FUNC_0(VAR_4);
  VAR_6 = VAR_4->v_rdev->si_snapdata;
  if (VAR_6 == ((void*)0)) {






   VAR_7 = FUNC_5(&VAR_5->sn_lock, VAR_0 |
       VAR_2, ((void*)0));
   if (VAR_7 != 0)
    FUNC_6("leaked sn, lockmgr error %d", VAR_7);
   VAR_6 = VAR_4->v_rdev->si_snapdata = VAR_5;
   FUNC_2(VAR_4);
   VAR_5 = ((void*)0);
   break;
  }





  VAR_7 = FUNC_5(&VAR_6->sn_lock, VAR_1 |
      VAR_0 | VAR_3, FUNC_1(VAR_4));
  if (VAR_7 == 0)
   break;
 }




 if (VAR_5 != ((void*)0))
  FUNC_4(VAR_5);

 return (VAR_6);
}

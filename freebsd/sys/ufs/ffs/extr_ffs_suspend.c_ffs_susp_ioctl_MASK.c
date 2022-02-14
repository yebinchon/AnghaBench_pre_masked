
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int td_ucred; } ;
struct mount {int dummy; } ;
struct cdev {int dummy; } ;
typedef int fsid_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 () ;
 int FUNC_1 (void**) ;
 int FUNC_2 (struct mount*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mount*,int ) ;
 struct mount* FUNC_9 (int *) ;
 int FUNC_10 (struct mount*) ;
 int FUNC_11 (struct mount*) ;

__attribute__((used)) static int
FUNC_12(struct cdev *VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8,
    struct thread *VAR_9)
{
 struct mount *VAR_10;
 fsid_t *VAR_11;
 int VAR_12;






 if (FUNC_5(VAR_9->td_ucred))
  return (VAR_2);

 FUNC_6(&VAR_4);

 switch (VAR_6) {
 case 128:
  VAR_11 = (fsid_t *)VAR_7;
  VAR_10 = FUNC_9(VAR_11);
  if (VAR_10 == ((void*)0)) {
   VAR_12 = VAR_0;
   break;
  }
  VAR_12 = FUNC_8(VAR_10, 0);
  FUNC_10(VAR_10);
  if (VAR_12 != 0)
   break;
  VAR_12 = FUNC_3(VAR_10);
  if (VAR_12 != 0) {
   FUNC_11(VAR_10);
   break;
  }
  VAR_12 = FUNC_2(VAR_10, VAR_3);
  if (VAR_12 != 0)
   FUNC_4(VAR_10);
  break;
 case 129:
  VAR_12 = FUNC_1((void **)&VAR_10);
  if (VAR_12 != 0)
   break;






  FUNC_7(&VAR_4);
  FUNC_0();
  return (0);
 default:
  VAR_12 = VAR_1;
  break;
 }

 FUNC_7(&VAR_4);

 return (VAR_12);
}

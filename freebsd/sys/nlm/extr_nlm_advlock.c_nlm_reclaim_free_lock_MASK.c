
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct flock {int l_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucred*) ;
 struct thread* VAR_3 ;
 int FUNC_1 (struct vnode*,int *,int ,struct flock*,int ,int ,int ) ;
 int FUNC_2 (struct thread*,struct flock*) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_4, struct flock *VAR_5, void *VAR_6)
{
 struct flock VAR_7;
 struct thread *VAR_8 = VAR_3;
 struct ucred *VAR_9;
 int VAR_10;

 VAR_7 = *VAR_5;
 VAR_7.l_type = VAR_2;

 VAR_9 = VAR_8->td_ucred;
 FUNC_2(VAR_8, &VAR_7);

 VAR_10 = FUNC_1(VAR_4, ((void*)0), VAR_2, &VAR_7, VAR_1,
     VAR_0, VAR_0);

 FUNC_0(VAR_8->td_ucred);
 VAR_8->td_ucred = VAR_9;

 return (VAR_10);
}

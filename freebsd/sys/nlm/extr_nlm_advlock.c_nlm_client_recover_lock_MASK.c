
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct nlm_recovery_context {int nr_state; int nr_host; } ;
struct flock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ucred*) ;
 struct thread* VAR_5 ;
 int FUNC_1 (struct vnode*,int *,int ,struct flock*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct thread*,struct flock*) ;
 int FUNC_4 (struct vnode*,int ) ;

__attribute__((used)) static int
FUNC_5(struct vnode *VAR_6, struct flock *VAR_7, void *VAR_8)
{
 struct nlm_recovery_context *VAR_9 = (struct nlm_recovery_context *) VAR_8;
 struct thread *VAR_10 = VAR_5;
 struct ucred *VAR_11;
 int VAR_12, VAR_13;






 VAR_12 = FUNC_2(VAR_9->nr_host);
 if (VAR_9->nr_state != VAR_12)
  return (VAR_0);

 VAR_13 = FUNC_4(VAR_6, VAR_3);
 if (VAR_13)
  return (VAR_13);

 VAR_11 = VAR_10->td_ucred;
 FUNC_3(VAR_10, VAR_7);

 VAR_13 = FUNC_1(VAR_6, ((void*)0), VAR_2, VAR_7, VAR_1,
     VAR_4, VAR_4);

 FUNC_0(VAR_10->td_ucred);
 VAR_10->td_ucred = VAR_11;

 return (VAR_13);
}

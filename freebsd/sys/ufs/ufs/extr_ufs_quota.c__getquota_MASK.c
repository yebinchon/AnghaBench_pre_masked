
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {TYPE_1__* td_ucred; } ;
struct mount {int dummy; } ;
struct dqblk64 {int dummy; } ;
struct dquot {struct dqblk64 dq_dqb; } ;
struct TYPE_2__ {int cr_uid; } ;


 int VAR_0 ;

 struct dquot* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (struct mount*) ;
 int FUNC_1 (int ,int ,int ,int,struct dquot**) ;
 int FUNC_2 (int ,struct dquot*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (struct thread*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_5, struct mount *VAR_6, u_long VAR_7, int VAR_8,
    struct dqblk64 *VAR_9)
{
 struct dquot *VAR_10;
 int VAR_11;

 switch (VAR_8) {
 case 128:
  if ((VAR_5->td_ucred->cr_uid != VAR_7) && !VAR_4) {
   VAR_11 = FUNC_4(VAR_5, VAR_3);
   if (VAR_11)
    return (VAR_11);
  }
  break;

 case 129:
  if (!FUNC_3(VAR_7, VAR_5->td_ucred) &&
      !VAR_4) {
   VAR_11 = FUNC_4(VAR_5, VAR_3);
   if (VAR_11)
    return (VAR_11);
  }
  break;

 default:
  return (VAR_0);
 }

 VAR_10 = VAR_1;
 VAR_11 = FUNC_1(VAR_2, VAR_7, FUNC_0(VAR_6), VAR_8, &VAR_10);
 if (VAR_11)
  return (VAR_11);
 *VAR_9 = VAR_10->dq_dqb;
 FUNC_2(VAR_2, VAR_10);
 return (VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msc_window {int lockout; int lo_lock; TYPE_1__* msc; } ;
typedef enum lockout_state { ____Placeholder_lockout_state } lockout_state ;
struct TYPE_2__ {int user_count; int mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct msc_window *VAR_4,
          enum lockout_state VAR_5,
          enum lockout_state VAR_6)
{
 enum lockout_state VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (!VAR_4->msc->mbuf)
  return 0;

 FUNC_4(&VAR_4->lo_lock, VAR_8);
 VAR_7 = VAR_4->lockout;

 if (VAR_7 != VAR_5) {
  VAR_9 = -VAR_1;
  FUNC_2(FUNC_3(VAR_4->msc),
         "expected lockout state %d, got %d\n",
         VAR_5, VAR_7);
  goto unlock;
 }

 VAR_4->lockout = VAR_6;

 if (VAR_7 == VAR_5 && VAR_6 == VAR_2)
  FUNC_1(&VAR_4->msc->user_count);
 else if (VAR_7 == VAR_5 && VAR_7 == VAR_2)
  FUNC_0(&VAR_4->msc->user_count);

unlock:
 FUNC_5(&VAR_4->lo_lock, VAR_8);

 if (VAR_9) {
  if (VAR_5 == VAR_3 && VAR_7 == VAR_2)
   return -VAR_0;


  if (VAR_5 == VAR_2 && VAR_7 == VAR_6)
   return 0;
 }

 return VAR_9;
}

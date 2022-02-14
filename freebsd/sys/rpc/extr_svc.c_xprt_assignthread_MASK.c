
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sg_state; scalar_t__ sg_lastcreatetime; scalar_t__ sg_threadcount; scalar_t__ sg_maxthreads; int sg_idlethreads; int sg_lock; } ;
struct TYPE_9__ {int st_cond; TYPE_1__* st_xprt; } ;
struct TYPE_8__ {TYPE_2__* xp_thread; TYPE_3__* xp_group; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ SVCTHREAD ;
typedef TYPE_3__ SVCGROUP ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_5(SVCXPRT *VAR_7)
{
 SVCGROUP *VAR_8 = VAR_7->xp_group;
 SVCTHREAD *VAR_9;

 FUNC_4(&VAR_8->sg_lock, VAR_1);
 VAR_9 = FUNC_0(&VAR_8->sg_idlethreads);
 if (VAR_9) {
  FUNC_1(VAR_9, VAR_5);
  FUNC_2(VAR_7);
  VAR_7->xp_thread = VAR_9;
  VAR_9->st_xprt = VAR_7;
  FUNC_3(&VAR_9->st_cond);
  return (VAR_4);
 } else {
  if (VAR_8->sg_state == VAR_2
      && VAR_8->sg_lastcreatetime < VAR_6
      && VAR_8->sg_threadcount < VAR_8->sg_maxthreads) {
   VAR_8->sg_state = VAR_3;
  }
 }
 return (VAR_0);
}

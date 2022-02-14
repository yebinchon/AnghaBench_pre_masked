
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct svc_req {long rq_size; TYPE_2__* rq_thread; } ;
struct proc {int p_flag; } ;
typedef enum xprt_stat { ____Placeholder_xprt_stat } xprt_stat ;
typedef scalar_t__ bool_t ;
struct TYPE_28__ {scalar_t__ sg_state; scalar_t__ sg_lastidlecheck; scalar_t__ sg_threadcount; scalar_t__ sg_maxthreads; scalar_t__ sg_minthreads; int sg_lock; int sg_active; int sg_idlethreads; scalar_t__ sg_lastcreatetime; TYPE_3__* sg_pool; } ;
struct TYPE_27__ {TYPE_2__* (* sp_assign ) (TYPE_2__*,struct svc_req*) ;} ;
struct TYPE_26__ {int st_cond; int st_lock; int st_reqs; TYPE_1__* st_xprt; TYPE_3__* st_pool; } ;
struct TYPE_25__ {scalar_t__ xp_active; TYPE_2__* xp_thread; scalar_t__ xp_lastactive; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ SVCTHREAD ;
typedef TYPE_3__ SVCPOOL ;
typedef TYPE_4__ SVCGROUP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 scalar_t__ FUNC_5 (struct proc*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 struct svc_req* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct svc_req*,int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_1__*,int ) ;
 int FUNC_15 (int *,TYPE_1__*,int ) ;
 int VAR_9 ;
 struct proc* VAR_10 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (int *,int *) ;
 int VAR_11 ;
 TYPE_2__* FUNC_20 (int) ;
 int FUNC_21 (TYPE_2__*,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,char*,int *,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* FUNC_26 (TYPE_2__*,struct svc_req*) ;
 int FUNC_27 (TYPE_3__*,long) ;
 int FUNC_28 (TYPE_4__*) ;
 int FUNC_29 (struct svc_req*) ;
 int FUNC_30 (TYPE_3__*) ;
 int FUNC_31 (TYPE_1__*,struct svc_req**) ;
 int FUNC_32 (TYPE_4__*) ;
 scalar_t__ FUNC_33 (TYPE_3__*) ;
 int FUNC_34 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_35 (TYPE_4__*) ;
 int VAR_15 ;
 int FUNC_36 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_37(SVCGROUP *VAR_16, bool_t VAR_17)
{
 SVCPOOL *VAR_18 = VAR_16->sg_pool;
 SVCTHREAD *VAR_19, *VAR_20;
 SVCXPRT *VAR_21;
 enum xprt_stat VAR_22;
 struct svc_req *VAR_23;
 struct proc *VAR_24;
 long VAR_25;
 int VAR_26;

 VAR_19 = FUNC_20(sizeof(*VAR_19));
 FUNC_23(&VAR_19->st_lock, "st_lock", ((void*)0), VAR_3);
 VAR_19->st_pool = VAR_18;
 VAR_19->st_xprt = ((void*)0);
 FUNC_8(&VAR_19->st_reqs);
 FUNC_17(&VAR_19->st_cond, "rpcsvc");

 FUNC_24(&VAR_16->sg_lock);





 if (VAR_16->sg_state == VAR_7)
  VAR_16->sg_state = VAR_5;

 while (VAR_16->sg_state != VAR_6) {



  if (VAR_16->sg_state == VAR_8) {
   VAR_16->sg_state = VAR_7;
   VAR_16->sg_lastcreatetime = VAR_14;
   FUNC_25(&VAR_16->sg_lock);
   FUNC_32(VAR_16);
   FUNC_24(&VAR_16->sg_lock);
   continue;
  }




  if (VAR_14 > VAR_16->sg_lastidlecheck) {
   VAR_16->sg_lastidlecheck = VAR_14;
   FUNC_28(VAR_16);
  }

  VAR_21 = VAR_19->st_xprt;
  if (!VAR_21) {



   if (!VAR_17 && VAR_16->sg_threadcount >
       VAR_16->sg_maxthreads)
    break;






   if (FUNC_33(VAR_18) &&
       (VAR_21 = FUNC_13(&VAR_16->sg_active)) != ((void*)0)) {
    FUNC_15(&VAR_16->sg_active, VAR_21, VAR_15);
    FUNC_11(VAR_21);
    VAR_21->xp_thread = VAR_19;
    VAR_19->st_xprt = VAR_21;
    continue;
   }

   FUNC_1(&VAR_16->sg_idlethreads, VAR_19, VAR_13);
   if (VAR_17 || (!VAR_17 &&
       VAR_16->sg_threadcount > VAR_16->sg_minthreads))
    VAR_26 = FUNC_18(&VAR_19->st_cond,
        &VAR_16->sg_lock, 5 * VAR_11);
   else
    VAR_26 = FUNC_19(&VAR_19->st_cond,
        &VAR_16->sg_lock);
   if (VAR_19->st_xprt == ((void*)0))
    FUNC_2(VAR_19, VAR_13);




   if (VAR_26 == VAR_2) {
    if (!VAR_17
        && (VAR_16->sg_threadcount
     > VAR_16->sg_minthreads)
     && !VAR_19->st_xprt)
     break;
   } else if (VAR_26 != 0) {
    FUNC_0(VAR_26 == VAR_0 || VAR_26 == VAR_1,
        ("non-signal error %d", VAR_26));
    FUNC_25(&VAR_16->sg_lock);
    VAR_24 = VAR_10;
    FUNC_3(VAR_24);
    if (FUNC_5(VAR_24) ||
        (VAR_24->p_flag & VAR_4) != 0) {
     FUNC_34(0);
     FUNC_4(VAR_24);
     FUNC_24(&VAR_16->sg_lock);
    } else {
     FUNC_4(VAR_24);
     FUNC_30(VAR_18);
     FUNC_24(&VAR_16->sg_lock);
     break;
    }
   }
   continue;
  }
  FUNC_25(&VAR_16->sg_lock);




  VAR_21->xp_lastactive = VAR_14;
  do {
   if (!FUNC_33(VAR_18))
    break;
   VAR_23 = ((void*)0);
   VAR_22 = FUNC_31(VAR_21, &VAR_23);
   if (VAR_23) {
    FUNC_27(VAR_18, VAR_23->rq_size);




    if (VAR_18->sp_assign) {
     VAR_20 = VAR_18->sp_assign(VAR_19, VAR_23);
     VAR_23->rq_thread = VAR_20;
     FUNC_9(&VAR_20->st_reqs,
         VAR_23, VAR_12);
     FUNC_25(&VAR_20->st_lock);
     if (VAR_20 != VAR_19)
      VAR_23 = ((void*)0);
    } else {
     VAR_23->rq_thread = VAR_19;
     FUNC_9(&VAR_19->st_reqs,
         VAR_23, VAR_12);
    }
   }
  } while (VAR_23 == ((void*)0) && VAR_22 == VAR_9
      && VAR_16->sg_state != VAR_6);







  FUNC_24(&VAR_16->sg_lock);
  VAR_21->xp_thread = ((void*)0);
  VAR_19->st_xprt = ((void*)0);
  if (VAR_21->xp_active) {
   if (!FUNC_33(VAR_18) ||
       !FUNC_36(VAR_21))
    FUNC_14(&VAR_16->sg_active,
        VAR_21, VAR_15);
  }
  FUNC_25(&VAR_16->sg_lock);
  FUNC_12(VAR_21);




  FUNC_24(&VAR_19->st_lock);
  while ((VAR_23 = FUNC_7(&VAR_19->st_reqs)) != ((void*)0)) {
   FUNC_10(&VAR_19->st_reqs, VAR_12);
   FUNC_25(&VAR_19->st_lock);
   VAR_25 = (long)VAR_23->rq_size;
   FUNC_29(VAR_23);
   FUNC_27(VAR_18, -VAR_25);
   FUNC_24(&VAR_19->st_lock);
  }
  FUNC_25(&VAR_19->st_lock);
  FUNC_24(&VAR_16->sg_lock);
 }

 if (VAR_19->st_xprt) {
  VAR_21 = VAR_19->st_xprt;
  VAR_19->st_xprt = ((void*)0);
  FUNC_12(VAR_21);
 }
 FUNC_0(FUNC_6(&VAR_19->st_reqs), ("stray reqs on exit"));
 FUNC_22(&VAR_19->st_lock);
 FUNC_16(&VAR_19->st_cond);
 FUNC_21(VAR_19, sizeof(*VAR_19));

 VAR_16->sg_threadcount--;
 if (!VAR_17)
  FUNC_35(VAR_16);
 FUNC_25(&VAR_16->sg_lock);
}

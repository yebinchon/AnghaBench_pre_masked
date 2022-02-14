
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {unsigned int pending_crtc_mask; TYPE_1__* funcs; int commit_lock; } ;
struct TYPE_2__ {int (* disable_commit ) (struct msm_kms*) ;int (* complete_commit ) (struct msm_kms*,unsigned int) ;int (* wait_flush ) (struct msm_kms*,unsigned int) ;int (* flush_commit ) (struct msm_kms*,unsigned int) ;int (* enable_commit ) (struct msm_kms*) ;} ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct msm_kms*) ;
 int FUNC_4 (struct msm_kms*,unsigned int) ;
 int FUNC_5 (struct msm_kms*,unsigned int) ;
 int FUNC_6 (struct msm_kms*,unsigned int) ;
 int FUNC_7 (struct msm_kms*) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;

__attribute__((used)) static void FUNC_13(struct msm_kms *VAR_0, int VAR_1)
{
 unsigned VAR_2 = FUNC_0(VAR_1);

 FUNC_9(VAR_2);

 FUNC_1(&VAR_0->commit_lock);

 if (!(VAR_0->pending_crtc_mask & VAR_2)) {
  FUNC_2(&VAR_0->commit_lock);
  goto out;
 }

 VAR_0->pending_crtc_mask &= ~VAR_2;

 VAR_0->funcs->enable_commit(VAR_0);




 FUNC_10(VAR_2);
 VAR_0->funcs->flush_commit(VAR_0, VAR_2);
 FUNC_2(&VAR_0->commit_lock);




 FUNC_12(VAR_2);
 VAR_0->funcs->wait_flush(VAR_0, VAR_2);
 FUNC_11(VAR_2);

 FUNC_1(&VAR_0->commit_lock);
 VAR_0->funcs->complete_commit(VAR_0, VAR_2);
 FUNC_2(&VAR_0->commit_lock);
 VAR_0->funcs->disable_commit(VAR_0);

out:
 FUNC_8(VAR_2);
}

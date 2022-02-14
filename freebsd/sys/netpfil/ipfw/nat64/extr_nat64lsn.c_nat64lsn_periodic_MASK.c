
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nat64lsn_job_item {int epoch_ctx; int pgchunk; int portgroups; int hosts; int jtype; } ;
struct TYPE_2__ {int stats; } ;
struct nat64lsn_cfg {scalar_t__ hosts_count; int periodic; TYPE_1__ base; int vp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct nat64lsn_cfg*,int *) ;
 int FUNC_7 (struct nat64lsn_cfg*) ;
 int FUNC_8 (struct nat64lsn_cfg*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 struct nat64lsn_job_item* FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_7)
{
 struct nat64lsn_job_item *VAR_8;
 struct nat64lsn_cfg *VAR_9;

 VAR_9 = (struct nat64lsn_cfg *) VAR_7;
 FUNC_2(VAR_9->vp);
 if (VAR_9->hosts_count > 0) {
  VAR_8 = FUNC_9(VAR_6, VAR_1);
  if (VAR_8 != ((void*)0)) {
   VAR_8->jtype = VAR_0;
   FUNC_0(&VAR_8->hosts);
   FUNC_0(&VAR_8->portgroups);
   FUNC_6(VAR_9, &VAR_8->hosts);
   FUNC_8(VAR_9, &VAR_8->portgroups);
   VAR_8->pgchunk = FUNC_7(VAR_9);
   FUNC_3(&VAR_8->epoch_ctx,
       VAR_5);
  } else
   FUNC_4(&VAR_9->base.stats, VAR_4);
 }
 FUNC_5(&VAR_9->periodic, VAR_3 * VAR_2);
 FUNC_1();
}

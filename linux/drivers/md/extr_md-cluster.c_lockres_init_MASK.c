
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int lockspace; } ;
struct TYPE_2__ {struct dlm_lock_resource* sb_lvbptr; } ;
struct dlm_lock_resource {int sync_locking_done; void (* bast ) (void*,int) ;struct dlm_lock_resource* name; TYPE_1__ lksb; int flags; int mode; struct mddev* mddev; int ls; int sync_locking; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dlm_lock_resource*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dlm_lock_resource*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (struct dlm_lock_resource*,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static struct dlm_lock_resource *FUNC_7(struct mddev *VAR_7,
  char *VAR_8, void (*VAR_9)(void *VAR_10, int VAR_11), int VAR_12)
{
 struct dlm_lock_resource *VAR_13 = ((void*)0);
 int VAR_14, VAR_15;
 struct md_cluster_info *VAR_16 = VAR_7->cluster_info;

 VAR_13 = FUNC_3(sizeof(struct dlm_lock_resource), VAR_5);
 if (!VAR_13)
  return ((void*)0);
 FUNC_1(&VAR_13->sync_locking);
 VAR_13->sync_locking_done = 0;
 VAR_13->ls = VAR_16->lockspace;
 VAR_13->mddev = VAR_7;
 VAR_13->mode = VAR_3;
 VAR_15 = FUNC_6(VAR_8);
 VAR_13->name = FUNC_3(VAR_15 + 1, VAR_5);
 if (!VAR_13->name) {
  FUNC_4("md-cluster: Unable to allocate resource name for resource %s\n", VAR_8);
  goto out_err;
 }
 FUNC_5(VAR_13->name, VAR_8, VAR_15 + 1);
 if (VAR_12) {
  VAR_13->lksb.sb_lvbptr = FUNC_3(VAR_6, VAR_5);
  if (!VAR_13->lksb.sb_lvbptr) {
   FUNC_4("md-cluster: Unable to allocate LVB for resource %s\n", VAR_8);
   goto out_err;
  }
  VAR_13->flags = VAR_2;
 }

 if (VAR_9)
  VAR_13->bast = VAR_9;

 VAR_13->flags |= VAR_1;

 VAR_14 = FUNC_0(VAR_13, VAR_4);
 if (VAR_14) {
  FUNC_4("md-cluster: Unable to lock NL on new lock resource %s\n", VAR_8);
  goto out_err;
 }
 VAR_13->flags &= ~VAR_1;
 VAR_13->flags |= VAR_0;

 return VAR_13;
out_err:
 FUNC_2(VAR_13->lksb.sb_lvbptr);
 FUNC_2(VAR_13->name);
 FUNC_2(VAR_13);
 return ((void*)0);
}

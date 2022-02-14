
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mddev {scalar_t__ reshape_position; scalar_t__ recovery_cp; int thread; scalar_t__ recovery; int sync_thread; struct md_cluster_info* cluster_info; } ;
struct md_thread {struct mddev* mddev; } ;
struct md_cluster_info {int suspend_from; scalar_t__ recovery_map; int suspend_lock; scalar_t__ suspend_lo; scalar_t__ suspend_hi; } ;
struct dlm_lock_resource {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (struct dlm_lock_resource*,int ,struct mddev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dlm_lock_resource*) ;
 struct dlm_lock_resource* FUNC_4 (struct mddev*,char*,int *,int) ;
 int FUNC_5 (struct mddev*,int,scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,scalar_t__*) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int,scalar_t__*) ;

__attribute__((used)) static void FUNC_13(struct md_thread *VAR_5)
{
 struct mddev *VAR_6 = VAR_5->mddev;
 struct md_cluster_info *VAR_7 = VAR_6->cluster_info;
 struct dlm_lock_resource *VAR_8;
 char VAR_9[64];
 int VAR_10, VAR_11;
 sector_t VAR_12, VAR_13;

 while (VAR_7->recovery_map) {
  VAR_10 = FUNC_2((u64)VAR_7->recovery_map) - 1;

  FUNC_9(VAR_9, 64, "bitmap%04d", VAR_10);
  VAR_8 = FUNC_4(VAR_6, VAR_9, ((void*)0), 1);
  if (!VAR_8) {
   FUNC_7("md-cluster: Cannot initialize bitmaps\n");
   goto clear_bit;
  }

  VAR_11 = FUNC_1(VAR_8, VAR_0, VAR_6);
  if (VAR_11) {
   FUNC_7("md-cluster: Could not DLM lock %s: %d\n",
     VAR_9, VAR_11);
   goto clear_bit;
  }
  VAR_11 = FUNC_5(VAR_6, VAR_10, &VAR_12, &VAR_13, 1);
  if (VAR_11) {
   FUNC_7("md-cluster: Could not copy data from bitmap %d\n", VAR_10);
   goto clear_bit;
  }


  FUNC_10(&VAR_7->suspend_lock);
  VAR_7->suspend_hi = 0;
  VAR_7->suspend_lo = 0;
  VAR_7->suspend_from = -1;
  FUNC_11(&VAR_7->suspend_lock);


  if (FUNC_12(VAR_3, &VAR_6->recovery) &&
      FUNC_12(VAR_2, &VAR_6->recovery) &&
      VAR_6->reshape_position != VAR_4)
   FUNC_6(VAR_6->sync_thread);

  if (VAR_13 > 0) {
   if (VAR_12 < VAR_6->recovery_cp)
    VAR_6->recovery_cp = VAR_12;


   if (VAR_6->recovery_cp != VAR_4) {




    FUNC_0(VAR_3,
       &VAR_6->recovery);
    FUNC_8(VAR_1, &VAR_6->recovery);
    FUNC_6(VAR_6->thread);
   }
  }
clear_bit:
  FUNC_3(VAR_8);
  FUNC_0(VAR_10, &VAR_7->recovery_map);
 }
}

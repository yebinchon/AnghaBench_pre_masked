
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_domain {int vmd_interrupt_free_min; int vmd_page_count; int vmd_free_min; int vmd_pageout_free_min; int vmd_free_reserved; int vmd_free_severe; int vmd_free_target; int vmd_inactive_target; int vmd_free_count; int vmd_pageout_wakeup_thresh; int vmd_background_launder_target; int vmd_pid; struct sysctl_oid* vmd_oid; } ;
struct sysctl_oid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sysctl_oid* FUNC_0 (int *,int ,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 struct vm_domain* FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,int,int,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_5(int VAR_11)
{
 struct vm_domain *VAR_12;
 struct sysctl_oid *VAR_13;

 VAR_12 = FUNC_2(VAR_11);
 VAR_12->vmd_interrupt_free_min = 2;






 if (VAR_12->vmd_page_count > 1024)
  VAR_12->vmd_free_min = 4 + (VAR_12->vmd_page_count - 1024) / 200;
 else
  VAR_12->vmd_free_min = 4;
 VAR_12->vmd_pageout_free_min = 2 * VAR_1 / VAR_3 +
     VAR_12->vmd_interrupt_free_min;
 VAR_12->vmd_free_reserved = VAR_10 +
     VAR_12->vmd_pageout_free_min + (VAR_12->vmd_page_count / 768);
 VAR_12->vmd_free_severe = VAR_12->vmd_free_min / 2;
 VAR_12->vmd_free_target = 4 * VAR_12->vmd_free_min + VAR_12->vmd_free_reserved;
 VAR_12->vmd_free_min += VAR_12->vmd_free_reserved;
 VAR_12->vmd_free_severe += VAR_12->vmd_free_reserved;
 VAR_12->vmd_inactive_target = (3 * VAR_12->vmd_free_target) / 2;
 if (VAR_12->vmd_inactive_target > VAR_12->vmd_free_count / 3)
  VAR_12->vmd_inactive_target = VAR_12->vmd_free_count / 3;





 VAR_12->vmd_pageout_wakeup_thresh = (VAR_12->vmd_free_target / 10) * 9;






 VAR_12->vmd_background_launder_target = (VAR_12->vmd_free_target -
     VAR_12->vmd_free_min) / 10;


 FUNC_3(&VAR_12->vmd_pid, VAR_9 / VAR_8,
     VAR_12->vmd_free_target, VAR_4,
     VAR_7, VAR_6, VAR_5);
 VAR_13 = FUNC_0(((void*)0), FUNC_1(VAR_12->vmd_oid), VAR_2,
     "pidctrl", VAR_0, ((void*)0), "");
 FUNC_4(&VAR_12->vmd_pid, FUNC_1(VAR_13));
}

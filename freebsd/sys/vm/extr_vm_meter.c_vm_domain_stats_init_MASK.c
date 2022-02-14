
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_domain {char* vmd_name; int vmd_free_severe; int vmd_free_min; int vmd_free_reserved; int vmd_free_target; int vmd_inactive_target; TYPE_1__* vmd_pagequeues; int vmd_free_count; struct sysctl_oid* vmd_oid; } ;
struct sysctl_oid {int dummy; } ;
struct TYPE_2__ {int pq_pdpages; int pq_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (int *,int ,int ,char*,int ,int *,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;

__attribute__((used)) static void
FUNC_4(struct vm_domain *VAR_6, struct sysctl_oid *VAR_7)
{
 struct sysctl_oid *VAR_8;

 VAR_6->vmd_oid = FUNC_0(((void*)0), FUNC_3(VAR_7), VAR_1,
     VAR_6->vmd_name, VAR_0, ((void*)0), "");
 VAR_8 = FUNC_0(((void*)0), FUNC_3(VAR_6->vmd_oid), VAR_1,
     "stats", VAR_0, ((void*)0), "");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "free_count", VAR_0, &VAR_6->vmd_free_count, 0,
     "Free pages");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "active", VAR_0, &VAR_6->vmd_pagequeues[VAR_2].pq_cnt, 0,
     "Active pages");
 FUNC_1(((void*)0), FUNC_3(VAR_8), VAR_1,
     "actpdpgs", VAR_0,
     &VAR_6->vmd_pagequeues[VAR_2].pq_pdpages, 0,
     "Active pages scanned by the page daemon");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "inactive", VAR_0, &VAR_6->vmd_pagequeues[VAR_3].pq_cnt, 0,
     "Inactive pages");
 FUNC_1(((void*)0), FUNC_3(VAR_8), VAR_1,
     "inactpdpgs", VAR_0,
     &VAR_6->vmd_pagequeues[VAR_3].pq_pdpages, 0,
     "Inactive pages scanned by the page daemon");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "laundry", VAR_0, &VAR_6->vmd_pagequeues[VAR_4].pq_cnt, 0,
     "laundry pages");
 FUNC_1(((void*)0), FUNC_3(VAR_8), VAR_1,
     "laundpdpgs", VAR_0,
     &VAR_6->vmd_pagequeues[VAR_4].pq_pdpages, 0,
     "Laundry pages scanned by the page daemon");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1, "unswappable",
     VAR_0, &VAR_6->vmd_pagequeues[VAR_5].pq_cnt, 0,
     "Unswappable pages");
 FUNC_1(((void*)0), FUNC_3(VAR_8), VAR_1,
     "unswppdpgs", VAR_0,
     &VAR_6->vmd_pagequeues[VAR_5].pq_pdpages, 0,
     "Unswappable pages scanned by the page daemon");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "inactive_target", VAR_0, &VAR_6->vmd_inactive_target, 0,
     "Target inactive pages");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "free_target", VAR_0, &VAR_6->vmd_free_target, 0,
     "Target free pages");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "free_reserved", VAR_0, &VAR_6->vmd_free_reserved, 0,
     "Reserved free pages");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "free_min", VAR_0, &VAR_6->vmd_free_min, 0,
     "Minimum free pages");
 FUNC_2(((void*)0), FUNC_3(VAR_8), VAR_1,
     "free_severe", VAR_0, &VAR_6->vmd_free_severe, 0,
     "Severe free pages");

}

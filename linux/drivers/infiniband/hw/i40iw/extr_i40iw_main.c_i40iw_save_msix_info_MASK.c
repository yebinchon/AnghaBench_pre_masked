
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i40iw_msix_vector {int dummy; } ;
struct i40iw_device {int msix_count; int msix_shared; TYPE_2__* iw_msixtbl; struct i40e_qvlist_info* iw_qvlist; } ;
struct i40e_qvlist_info {size_t num_vectors; struct i40e_qv_info* qv_info; } ;
struct i40e_qv_info {int itr_idx; int v_idx; void* ceq_idx; void* aeq_idx; } ;
struct i40e_info {int msix_count; TYPE_1__* msix_entries; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {int cpu_affinity; int idx; int irq; } ;
struct TYPE_3__ {int vector; int entry; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 size_t FUNC_2 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_3(struct i40iw_device *VAR_4,
         struct i40e_info *VAR_5)
{
 struct i40e_qvlist_info *VAR_6;
 struct i40e_qv_info *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 if (!VAR_5->msix_count) {
  FUNC_0("No MSI-X vectors\n");
  return VAR_2;
 }

 VAR_4->msix_count = VAR_5->msix_count;

 VAR_10 = sizeof(struct i40iw_msix_vector) * VAR_4->msix_count;
 VAR_10 += sizeof(struct i40e_qvlist_info);
 VAR_10 += sizeof(struct i40e_qv_info) * VAR_4->msix_count - 1;
 VAR_4->iw_msixtbl = FUNC_1(VAR_10, VAR_0);

 if (!VAR_4->iw_msixtbl)
  return VAR_3;
 VAR_4->iw_qvlist = (struct i40e_qvlist_info *)(&VAR_4->iw_msixtbl[VAR_4->msix_count]);
 VAR_6 = VAR_4->iw_qvlist;
 VAR_7 = VAR_6->qv_info;
 VAR_6->num_vectors = VAR_4->msix_count;
 if (VAR_4->msix_count <= FUNC_2())
  VAR_4->msix_shared = 1;
 for (VAR_9 = 0, VAR_8 = 0; VAR_9 < VAR_4->msix_count; VAR_9++, VAR_7++) {
  VAR_4->iw_msixtbl[VAR_9].idx = VAR_5->msix_entries[VAR_9].entry;
  VAR_4->iw_msixtbl[VAR_9].irq = VAR_5->msix_entries[VAR_9].vector;
  VAR_4->iw_msixtbl[VAR_9].cpu_affinity = VAR_8;
  if (VAR_9 == 0) {
   VAR_7->aeq_idx = 0;
   if (VAR_4->msix_shared)
    VAR_7->ceq_idx = VAR_8++;
   else
    VAR_7->ceq_idx = VAR_1;
  } else {
   VAR_7->aeq_idx = VAR_1;
   VAR_7->ceq_idx = VAR_8++;
  }
  VAR_7->itr_idx = 3;
  VAR_7->v_idx = VAR_4->iw_msixtbl[VAR_9].idx;
 }
 return 0;
}

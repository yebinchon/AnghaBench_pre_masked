
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40iw_msix_vector {scalar_t__ ceq_id; int mask; int irq; int cpu_affinity; } ;
struct i40iw_device {int dpc_tasklet; scalar_t__ msix_shared; } ;
struct i40iw_ceq {int dpc_tasklet; scalar_t__ msix_shared; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,char*,struct i40iw_device*) ;
 int FUNC_5 (int *,int ,unsigned long) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_device *VAR_5,
        struct i40iw_ceq *VAR_6,
        u32 VAR_7,
        struct i40iw_msix_vector *VAR_8)
{
 enum i40iw_status_code VAR_9;

 if (VAR_5->msix_shared && !VAR_7) {
  FUNC_5(&VAR_5->dpc_tasklet, VAR_3, (unsigned long)VAR_5);
  VAR_9 = FUNC_4(VAR_8->irq, VAR_4, 0, "AEQCEQ", VAR_5);
 } else {
  FUNC_5(&VAR_6->dpc_tasklet, VAR_1, (unsigned long)VAR_6);
  VAR_9 = FUNC_4(VAR_8->irq, VAR_2, 0, "CEQ", VAR_6);
 }

 FUNC_0(&VAR_8->mask);
 FUNC_1(VAR_8->cpu_affinity, &VAR_8->mask);
 FUNC_3(VAR_8->irq, &VAR_8->mask);

 if (VAR_9) {
  FUNC_2("ceq irq config fail\n");
  return VAR_0;
 }
 VAR_8->ceq_id = VAR_7;

 return 0;
}

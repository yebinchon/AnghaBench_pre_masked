
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * enable_counts; } ;
struct dpu_kms {TYPE_1__ irq_obj; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct dpu_kms*,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct dpu_kms *VAR_1, int *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6;

 if (!VAR_1 || !VAR_2 || !VAR_3) {
  FUNC_0("invalid params\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(&VAR_1->irq_obj.enable_counts[VAR_2[0]]);
 if (VAR_6)
  FUNC_1("irq_idx=%d enable_count=%d\n", VAR_2[0], VAR_6);

 for (VAR_4 = 0; (VAR_4 < VAR_3) && !VAR_5; VAR_4++)
  VAR_5 = FUNC_2(VAR_1, VAR_2[VAR_4]);

 return VAR_5;
}

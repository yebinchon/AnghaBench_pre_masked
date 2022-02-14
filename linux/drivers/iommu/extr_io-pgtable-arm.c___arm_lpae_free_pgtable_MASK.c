
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cfg; int fmt; } ;
struct arm_lpae_io_pgtable {unsigned long pgd_size; TYPE_1__ iop; } ;
typedef int arm_lpae_iopte ;


 unsigned long FUNC_0 (struct arm_lpae_io_pgtable*) ;
 int VAR_0 ;
 int FUNC_1 (struct arm_lpae_io_pgtable*) ;
 int FUNC_2 (int *,unsigned long,int *) ;
 int * FUNC_3 (int ,struct arm_lpae_io_pgtable*) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void FUNC_5(struct arm_lpae_io_pgtable *VAR_1, int VAR_2,
        arm_lpae_iopte *VAR_3)
{
 arm_lpae_iopte *VAR_4, *VAR_5;
 unsigned long VAR_6;

 if (VAR_2 == FUNC_1(VAR_1))
  VAR_6 = VAR_1->pgd_size;
 else
  VAR_6 = FUNC_0(VAR_1);

 VAR_4 = VAR_3;


 if (VAR_2 == VAR_0 - 1)
  VAR_5 = VAR_3;
 else
  VAR_5 = (void *)VAR_3 + VAR_6;

 while (VAR_3 != VAR_5) {
  arm_lpae_iopte VAR_7 = *VAR_3++;

  if (!VAR_7 || FUNC_4(VAR_7, VAR_2, VAR_1->iop.fmt))
   continue;

  FUNC_5(VAR_1, VAR_2 + 1, FUNC_3(VAR_7, VAR_1));
 }

 FUNC_2(VAR_4, VAR_6, &VAR_1->iop.cfg);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fmt; } ;
struct arm_lpae_io_pgtable {TYPE_1__ iop; } ;
typedef int phys_addr_t ;
typedef int arm_lpae_iopte ;


 size_t FUNC_0 (int,struct arm_lpae_io_pgtable*) ;
 int * FUNC_1 (unsigned long,int,struct arm_lpae_io_pgtable*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct arm_lpae_io_pgtable*,int ,int ,int,int *) ;
 size_t FUNC_4 (struct arm_lpae_io_pgtable*,int *,unsigned long,size_t,int,int *) ;
 scalar_t__ FUNC_5 (int ,int,int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct arm_lpae_io_pgtable *VAR_4,
        unsigned long VAR_5, phys_addr_t VAR_6,
        arm_lpae_iopte VAR_7, int VAR_8,
        arm_lpae_iopte *VAR_9)
{
 arm_lpae_iopte VAR_10 = *VAR_9;

 if (FUNC_5(VAR_10, VAR_8, VAR_4->iop.fmt)) {

  FUNC_2(!VAR_3);
  return -VAR_1;
 } else if (FUNC_6(VAR_10, VAR_8) == VAR_0) {




  arm_lpae_iopte *VAR_11;
  size_t VAR_12 = FUNC_0(VAR_8, VAR_4);

  VAR_11 = VAR_9 - FUNC_1(VAR_5, VAR_8, VAR_4);
  if (FUNC_4(VAR_4, ((void*)0), VAR_5, VAR_12, VAR_8, VAR_11) != VAR_12) {
   FUNC_2(1);
   return -VAR_2;
  }
 }

 FUNC_3(VAR_4, VAR_6, VAR_7, VAR_8, VAR_9);
 return 0;
}

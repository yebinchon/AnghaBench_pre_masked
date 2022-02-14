
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_pgtable_cfg {size_t pgsize_bitmap; int coherent_walk; } ;
struct TYPE_2__ {int fmt; struct io_pgtable_cfg cfg; } ;
struct arm_lpae_io_pgtable {TYPE_1__ iop; } ;
typedef int phys_addr_t ;
typedef int arm_lpae_iopte ;


 size_t FUNC_0 (int,struct arm_lpae_io_pgtable*) ;
 size_t FUNC_1 (struct arm_lpae_io_pgtable*) ;
 int FUNC_2 (unsigned long,int,struct arm_lpae_io_pgtable*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int* FUNC_5 (size_t,int ,struct io_pgtable_cfg*) ;
 int FUNC_6 (int*,size_t,struct io_pgtable_cfg*) ;
 int FUNC_7 (int*,struct io_pgtable_cfg*) ;
 int FUNC_8 (struct arm_lpae_io_pgtable*,unsigned long,int ,int,int,int*) ;
 int FUNC_9 (int*,int*,int ,struct io_pgtable_cfg*) ;
 int* FUNC_10 (int,struct arm_lpae_io_pgtable*) ;
 int FUNC_11 (int,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(struct arm_lpae_io_pgtable *VAR_7, unsigned long VAR_8,
     phys_addr_t VAR_9, size_t VAR_10, arm_lpae_iopte VAR_11,
     int VAR_12, arm_lpae_iopte *VAR_13)
{
 arm_lpae_iopte *VAR_14, VAR_15;
 size_t VAR_16 = FUNC_0(VAR_12, VAR_7);
 size_t VAR_17 = FUNC_1(VAR_7);
 struct io_pgtable_cfg *VAR_18 = &VAR_7->iop.cfg;


 VAR_13 += FUNC_2(VAR_8, VAR_12, VAR_7);


 if (VAR_10 == VAR_16 && (VAR_10 & VAR_18->pgsize_bitmap))
  return FUNC_8(VAR_7, VAR_8, VAR_9, VAR_11, VAR_12, VAR_13);


 if (FUNC_4(VAR_12 >= VAR_0 - 1))
  return -VAR_3;


 VAR_15 = FUNC_3(*VAR_13);
 if (!VAR_15) {
  VAR_14 = FUNC_5(VAR_17, VAR_5, VAR_18);
  if (!VAR_14)
   return -VAR_4;

  VAR_15 = FUNC_9(VAR_14, VAR_13, 0, VAR_18);
  if (VAR_15)
   FUNC_6(VAR_14, VAR_17, VAR_18);
 } else if (!VAR_18->coherent_walk && !(VAR_15 & VAR_1)) {
  FUNC_7(VAR_13, VAR_18);
 }

 if (VAR_15 && !FUNC_11(VAR_15, VAR_12, VAR_7->iop.fmt)) {
  VAR_14 = FUNC_10(VAR_15, VAR_7);
 } else if (VAR_15) {

  FUNC_4(!VAR_6);
  return -VAR_2;
 }


 return FUNC_12(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 + 1, VAR_14);
}

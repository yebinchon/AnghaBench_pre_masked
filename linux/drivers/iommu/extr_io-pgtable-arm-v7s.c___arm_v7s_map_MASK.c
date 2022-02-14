
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_pgtable_cfg {int dummy; } ;
struct TYPE_2__ {struct io_pgtable_cfg cfg; } ;
struct arm_v7s_io_pgtable {TYPE_1__ iop; } ;
typedef int phys_addr_t ;
typedef scalar_t__ arm_v7s_iopte ;


 int FUNC_0 (unsigned long,int) ;
 size_t FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__* FUNC_5 (int,int ,struct arm_v7s_io_pgtable*) ;
 int FUNC_6 (scalar_t__*,int,struct arm_v7s_io_pgtable*) ;
 int FUNC_7 (scalar_t__*,int,struct io_pgtable_cfg*) ;
 int FUNC_8 (struct arm_v7s_io_pgtable*,unsigned long,int ,int,int,int,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__*,scalar_t__*,int ,struct io_pgtable_cfg*) ;
 scalar_t__* FUNC_10 (scalar_t__,int,struct arm_v7s_io_pgtable*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct arm_v7s_io_pgtable *VAR_5, unsigned long VAR_6,
    phys_addr_t VAR_7, size_t VAR_8, int VAR_9,
    int VAR_10, arm_v7s_iopte *VAR_11)
{
 struct io_pgtable_cfg *VAR_12 = &VAR_5->iop.cfg;
 arm_v7s_iopte VAR_13, *VAR_14;
 int VAR_15 = VAR_8 >> FUNC_1(VAR_10);


 VAR_11 += FUNC_0(VAR_6, VAR_10);


 if (VAR_15)
  return FUNC_8(VAR_5, VAR_6, VAR_7, VAR_9,
     VAR_10, VAR_15, VAR_11);


 if (FUNC_4(VAR_10 == 2))
  return -VAR_1;


 VAR_13 = FUNC_3(*VAR_11);
 if (!VAR_13) {
  VAR_14 = FUNC_5(VAR_10 + 1, VAR_3, VAR_5);
  if (!VAR_14)
   return -VAR_2;

  VAR_13 = FUNC_9(VAR_14, VAR_11, 0, VAR_12);
  if (VAR_13)
   FUNC_6(VAR_14, VAR_10 + 1, VAR_5);
 } else {

  FUNC_7(VAR_11, 1, VAR_12);
 }

 if (FUNC_2(VAR_13, VAR_10)) {
  VAR_14 = FUNC_10(VAR_13, VAR_10, VAR_5);
 } else if (VAR_13) {

  FUNC_4(!VAR_4);
  return -VAR_0;
 }


 return FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1, VAR_14);
}

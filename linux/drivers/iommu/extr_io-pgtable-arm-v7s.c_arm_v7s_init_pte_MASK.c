
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


 size_t FUNC_0 (int) ;
 scalar_t__* FUNC_1 (unsigned long,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,scalar_t__,int,struct io_pgtable_cfg*) ;
 size_t FUNC_5 (struct arm_v7s_io_pgtable*,int *,unsigned long,size_t,int,scalar_t__*) ;
 scalar_t__ FUNC_6 (int,int,struct io_pgtable_cfg*) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ,int,struct io_pgtable_cfg*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct arm_v7s_io_pgtable *VAR_3,
       unsigned long VAR_4, phys_addr_t VAR_5, int VAR_6,
       int VAR_7, int VAR_8, arm_v7s_iopte *VAR_9)
{
 struct io_pgtable_cfg *VAR_10 = &VAR_3->iop.cfg;
 arm_v7s_iopte VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  if (FUNC_2(VAR_9[VAR_12], VAR_7)) {




   arm_v7s_iopte *VAR_13;
   size_t VAR_14 = FUNC_0(VAR_7);

   VAR_13 = VAR_9 - FUNC_1(VAR_4, VAR_7);
   if (FUNC_3(FUNC_5(VAR_3, ((void*)0), VAR_4 + VAR_12 * VAR_14,
          VAR_14, VAR_7, VAR_13) != VAR_14))
    return -VAR_1;
  } else if (VAR_9[VAR_12]) {

   FUNC_3(!VAR_2);
   return -VAR_0;
  }

 VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_10);
 if (VAR_8 > 1)
  VAR_11 = FUNC_7(VAR_11, VAR_7);

 VAR_11 |= FUNC_8(VAR_5, VAR_7, VAR_10);

 FUNC_4(VAR_9, VAR_11, VAR_8, VAR_10);
 return 0;
}

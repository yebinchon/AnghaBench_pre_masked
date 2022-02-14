
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_rd_err; int over_fetch_err; int cam_inval_abort; int cam_hard_err; } ;
union lbc_int_ena_w1s {unsigned long long value; TYPE_1__ s; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nitrox_device*) ;
 int FUNC_1 (struct nitrox_device*,int ,unsigned long long) ;

void FUNC_2(struct nitrox_device *VAR_5)
{
 union lbc_int_ena_w1s VAR_6;
 u64 VAR_7;

 FUNC_0(VAR_5);


 VAR_7 = VAR_2;
 VAR_6.value = 0;
 VAR_6.s.dma_rd_err = 1;
 VAR_6.s.over_fetch_err = 1;
 VAR_6.s.cam_inval_abort = 1;
 VAR_6.s.cam_hard_err = 1;
 FUNC_1(VAR_5, VAR_7, VAR_6.value);

 VAR_7 = VAR_3;
 FUNC_1(VAR_5, VAR_7, (~0ULL));
 VAR_7 = VAR_4;
 FUNC_1(VAR_5, VAR_7, (~0ULL));

 VAR_7 = VAR_0;
 FUNC_1(VAR_5, VAR_7, (~0ULL));
 VAR_7 = VAR_1;
 FUNC_1(VAR_5, VAR_7, (~0ULL));
}

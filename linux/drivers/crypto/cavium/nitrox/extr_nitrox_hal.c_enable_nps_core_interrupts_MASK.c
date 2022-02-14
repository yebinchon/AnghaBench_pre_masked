
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int host_wr_err; int host_wr_timeout; int exec_wr_timeout; int npco_dma_malform; int host_nps_wr_err; } ;
union nps_core_int_ena_w1s {scalar_t__ value; TYPE_1__ s; } ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nitrox_device*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nitrox_device *VAR_1)
{
 union nps_core_int_ena_w1s VAR_2;


 VAR_2.value = 0;
 VAR_2.s.host_wr_err = 1;
 VAR_2.s.host_wr_timeout = 1;
 VAR_2.s.exec_wr_timeout = 1;
 VAR_2.s.npco_dma_malform = 1;
 VAR_2.s.host_nps_wr_err = 1;
 FUNC_0(VAR_1, VAR_0, VAR_2.value);
}

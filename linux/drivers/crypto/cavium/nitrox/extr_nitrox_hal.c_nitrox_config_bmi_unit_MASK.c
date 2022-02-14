
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_len_err_nps; int pkt_rcv_err_nps; int fpf_undrrn; } ;
union bmi_int_ena_w1s {scalar_t__ value; TYPE_1__ s; } ;
struct TYPE_4__ {int max_pkt_len; int nps_free_thrsh; int nps_hdrq_thrsh; } ;
union bmi_ctl {scalar_t__ value; TYPE_2__ s; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nitrox_device*,int ) ;
 int FUNC_1 (struct nitrox_device*,int ,scalar_t__) ;

void FUNC_2(struct nitrox_device *VAR_2)
{
 union bmi_ctl VAR_3;
 union bmi_int_ena_w1s VAR_4;
 u64 VAR_5;


 VAR_5 = VAR_0;
 VAR_3.value = FUNC_0(VAR_2, VAR_5);
 VAR_3.s.max_pkt_len = 0xff;
 VAR_3.s.nps_free_thrsh = 0xff;
 VAR_3.s.nps_hdrq_thrsh = 0x7a;
 FUNC_1(VAR_2, VAR_5, VAR_3.value);


 VAR_5 = VAR_1;
 VAR_4.value = 0;
 VAR_4.s.max_len_err_nps = 1;
 VAR_4.s.pkt_rcv_err_nps = 1;
 VAR_4.s.fpf_undrrn = 1;
 FUNC_1(VAR_2, VAR_5, VAR_4.value);
}

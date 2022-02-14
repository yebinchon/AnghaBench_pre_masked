
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sec_err; int ded_err; } ;
union cvmx_l2t_err {void* u64; TYPE_1__ s; } ;
struct TYPE_4__ {int sec_err; int ded_err; } ;
union cvmx_l2d_err {void* u64; TYPE_2__ s; } ;
struct edac_device_ctl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (struct edac_device_ctl_info*,int ,int,char*) ;
 int FUNC_3 (struct edac_device_ctl_info*,int ,int,char*) ;

__attribute__((used)) static void FUNC_4(struct edac_device_ctl_info *VAR_2)
{
 union cvmx_l2t_err VAR_3, VAR_4;
 union cvmx_l2d_err VAR_5, VAR_6;

 VAR_4.u64 = 0;
 VAR_3.u64 = FUNC_0(VAR_1);
 if (VAR_3.s.sec_err) {
  FUNC_2(VAR_2, 0, 0,
          "Tag Single bit error (corrected)");
  VAR_4.s.sec_err = 1;
 }
 if (VAR_3.s.ded_err) {
  FUNC_3(VAR_2, 0, 0,
          "Tag Double bit error (detected)");
  VAR_4.s.ded_err = 1;
 }
 if (VAR_4.u64)
  FUNC_1(VAR_1, VAR_4.u64);

 VAR_6.u64 = 0;
 VAR_5.u64 = FUNC_0(VAR_0);
 if (VAR_5.s.sec_err) {
  FUNC_2(VAR_2, 0, 1,
          "Data Single bit error (corrected)");
  VAR_6.s.sec_err = 1;
 }
 if (VAR_5.s.ded_err) {
  FUNC_3(VAR_2, 0, 1,
          "Data Double bit error (detected)");
  VAR_6.s.ded_err = 1;
 }
 if (VAR_6.u64)
  FUNC_1(VAR_0, VAR_6.u64);

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dbe; int sbe; int type; int syn; int wayidx; } ;
union cvmx_l2c_err_ttgx {void* u64; TYPE_2__ s; } ;
struct TYPE_3__ {int dbe; int sbe; int vdbe; int vsbe; int type; int syn; int wayidx; } ;
union cvmx_l2c_err_tdtx {void* u64; TYPE_1__ s; } ;
struct edac_device_ctl_info {int dummy; } ;
typedef int buf2 ;
typedef int buf1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (struct edac_device_ctl_info*,int,int,char*) ;
 int FUNC_5 (struct edac_device_ctl_info*,int,int,char*) ;
 int FUNC_6 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_7(struct edac_device_ctl_info *VAR_0, int VAR_1)
{
 union cvmx_l2c_err_tdtx VAR_2, VAR_3;
 union cvmx_l2c_err_ttgx VAR_4, VAR_5;
 char VAR_6[64];
 char VAR_7[80];

 VAR_3.u64 = 0;
 VAR_2.u64 = FUNC_2(FUNC_0(VAR_1));
 if (VAR_2.s.dbe || VAR_2.s.sbe ||
     VAR_2.s.vdbe || VAR_2.s.vsbe)
  FUNC_6(VAR_6, sizeof(VAR_6),
    "type:%d, syn:0x%x, way:%d",
    VAR_2.s.type, VAR_2.s.syn, VAR_2.s.wayidx);

 if (VAR_2.s.dbe) {
  FUNC_6(VAR_7, sizeof(VAR_7),
    "L2D Double bit error (detected):%s", VAR_6);
  VAR_3.s.dbe = 1;
  FUNC_5(VAR_0, VAR_1, 1, VAR_7);
 }
 if (VAR_2.s.sbe) {
  FUNC_6(VAR_7, sizeof(VAR_7),
    "L2D Single bit error (corrected):%s", VAR_6);
  VAR_3.s.sbe = 1;
  FUNC_4(VAR_0, VAR_1, 1, VAR_7);
 }
 if (VAR_2.s.vdbe) {
  FUNC_6(VAR_7, sizeof(VAR_7),
    "VBF Double bit error (detected):%s", VAR_6);
  VAR_3.s.vdbe = 1;
  FUNC_5(VAR_0, VAR_1, 1, VAR_7);
 }
 if (VAR_2.s.vsbe) {
  FUNC_6(VAR_7, sizeof(VAR_7),
    "VBF Single bit error (corrected):%s", VAR_6);
  VAR_3.s.vsbe = 1;
  FUNC_4(VAR_0, VAR_1, 1, VAR_7);
 }
 if (VAR_3.u64)
  FUNC_3(FUNC_0(VAR_1), VAR_3.u64);

 VAR_5.u64 = 0;
 VAR_4.u64 = FUNC_2(FUNC_1(VAR_1));

 if (VAR_4.s.dbe || VAR_4.s.sbe)
  FUNC_6(VAR_6, sizeof(VAR_6),
    "type:%d, syn:0x%x, way:%d",
    VAR_4.s.type, VAR_4.s.syn, VAR_4.s.wayidx);

 if (VAR_4.s.dbe) {
  FUNC_6(VAR_7, sizeof(VAR_7),
    "Tag Double bit error (detected):%s", VAR_6);
  VAR_5.s.dbe = 1;
  FUNC_5(VAR_0, VAR_1, 0, VAR_7);
 }
 if (VAR_4.s.sbe) {
  FUNC_6(VAR_7, sizeof(VAR_7),
    "Tag Single bit error (corrected):%s", VAR_6);
  VAR_5.s.sbe = 1;
  FUNC_4(VAR_0, VAR_1, 0, VAR_7);
 }
 if (VAR_5.u64)
  FUNC_3(FUNC_1(VAR_1), VAR_5.u64);
}

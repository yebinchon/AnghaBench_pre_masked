
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sec_err; int ded_err; } ;
union cvmx_lmcx_mem_cfg0 {void* u64; TYPE_2__ s; } ;
struct TYPE_3__ {int fdimm; int fbunk; int fbank; int frow; int fcol; } ;
union cvmx_lmcx_fadr {TYPE_1__ cn30xx; void* u64; } ;
struct mem_ctl_info {int mc_idx; } ;
typedef int msg ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int,int,char*,char*) ;
 int FUNC_5 (char*,int,char*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_2)
{
 union cvmx_lmcx_mem_cfg0 VAR_3;
 bool VAR_4 = 0;
 char VAR_5[64];

 VAR_3 = FUNC_2(FUNC_1(VAR_2->mc_idx));
 if (VAR_3 || VAR_3) {
  union cvmx_lmcx_fadr VAR_6;
  VAR_6.u64 = FUNC_2(FUNC_0(VAR_2->mc_idx));
  FUNC_5(VAR_5, sizeof(VAR_5),
    "DIMM %d rank %d bank %d row %d col %d",
    VAR_6.cn30xx.fdimm, VAR_6.cn30xx.fbunk,
    VAR_6.cn30xx.fbank, VAR_6.cn30xx.frow, VAR_6.cn30xx.fcol);
 }

 if (VAR_3) {
  FUNC_4(VAR_0, VAR_2, 1, 0, 0, 0,
         -1, -1, -1, VAR_5, "");
  VAR_3 = -1;
  VAR_4 = 1;
 }

 if (VAR_3) {
  FUNC_4(VAR_1, VAR_2, 1, 0, 0, 0,
         -1, -1, -1, VAR_5, "");
  VAR_3 = -1;
  VAR_4 = 1;
 }
 if (VAR_4)
  FUNC_3(FUNC_1(VAR_2->mc_idx), VAR_3);
}

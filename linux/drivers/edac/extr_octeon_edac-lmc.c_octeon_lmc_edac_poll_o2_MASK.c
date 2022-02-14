
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sec_err; int ded_err; } ;
union cvmx_lmcx_int {void* u64; TYPE_2__ s; } ;
struct TYPE_3__ {int fdimm; int fbunk; int fbank; int frow; int fcol; } ;
union cvmx_lmcx_fadr {TYPE_1__ cn61xx; void* u64; } ;
struct octeon_lmc_pvt {int error_type; int dimm; int rank; int bank; int row; int col; scalar_t__ inject; } ;
struct mem_ctl_info {int mc_idx; struct octeon_lmc_pvt* pvt_info; } ;
typedef int msg ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int,int,char*,char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct mem_ctl_info *VAR_2)
{
 struct octeon_lmc_pvt *VAR_3 = VAR_2->pvt_info;
 union cvmx_lmcx_int VAR_4;
 bool VAR_5 = 0;
 char VAR_6[64];

 if (!VAR_3->inject)
  VAR_4.u64 = FUNC_2(FUNC_1(VAR_2->mc_idx));
 else {
  VAR_4.u64 = 0;
  if (VAR_3->error_type == 1)
   VAR_4.s.sec_err = 1;
  if (VAR_3->error_type == 2)
   VAR_4.s.ded_err = 1;
 }

 if (VAR_4.s.sec_err || VAR_4.s.ded_err) {
  union cvmx_lmcx_fadr VAR_7;
  if (FUNC_5(!VAR_3->inject))
   VAR_7.u64 = FUNC_2(FUNC_0(VAR_2->mc_idx));
  else {
   VAR_7.cn61xx.fdimm = VAR_3->dimm;
   VAR_7.cn61xx.fbunk = VAR_3->rank;
   VAR_7.cn61xx.fbank = VAR_3->bank;
   VAR_7.cn61xx.frow = VAR_3->row;
   VAR_7.cn61xx.fcol = VAR_3->col;
  }
  FUNC_6(VAR_6, sizeof(VAR_6),
    "DIMM %d rank %d bank %d row %d col %d",
    VAR_7.cn61xx.fdimm, VAR_7.cn61xx.fbunk,
    VAR_7.cn61xx.fbank, VAR_7.cn61xx.frow, VAR_7.cn61xx.fcol);
 }

 if (VAR_4.s.sec_err) {
  FUNC_4(VAR_0, VAR_2, 1, 0, 0, 0,
         -1, -1, -1, VAR_6, "");
  VAR_4.s.sec_err = -1;
  VAR_5 = 1;
 }

 if (VAR_4.s.ded_err) {
  FUNC_4(VAR_1, VAR_2, 1, 0, 0, 0,
         -1, -1, -1, VAR_6, "");
  VAR_4.s.ded_err = -1;
  VAR_5 = 1;
 }

 if (VAR_5) {
  if (FUNC_5(!VAR_3->inject))
   FUNC_3(FUNC_1(VAR_2->mc_idx), VAR_4.u64);
  else
   VAR_3->inject = 0;
 }
}

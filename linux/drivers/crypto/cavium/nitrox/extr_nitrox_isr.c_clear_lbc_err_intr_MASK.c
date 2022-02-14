
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rd_dat_len_mismatch_err; scalar_t__ pref_dat_len_mismatch_err; scalar_t__ cam_soft_err; scalar_t__ dma_rd_err; } ;
union lbc_int {void* value; TYPE_1__ s; } ;
typedef void* u64 ;
struct nitrox_device {int dummy; } ;


 int FUNC_0 (struct nitrox_device*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct nitrox_device*) ;
 void* FUNC_5 (struct nitrox_device*,void*) ;
 int FUNC_6 (struct nitrox_device*,void*,void*) ;

__attribute__((used)) static void FUNC_7(struct nitrox_device *VAR_6)
{
 union lbc_int VAR_7;
 u64 VAR_8, VAR_9;
 int VAR_10;

 VAR_7.value = FUNC_5(VAR_6, VAR_2);
 FUNC_3(FUNC_0(VAR_6), "LBC_INT  0x%016llx\n", VAR_7.value);

 if (VAR_7.s.dma_rd_err) {
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   VAR_9 = FUNC_1(VAR_10);
   VAR_8 = FUNC_5(VAR_6, VAR_9);
   FUNC_6(VAR_6, VAR_9, VAR_8);
   VAR_9 = FUNC_2(VAR_10);
   VAR_8 = FUNC_5(VAR_6, VAR_9);
   FUNC_6(VAR_6, VAR_9, VAR_8);
  }
 }

 if (VAR_7.s.cam_soft_err) {
  FUNC_3(FUNC_0(VAR_6), "CAM_SOFT_ERR, invalidating LBC\n");
  FUNC_4(VAR_6);
 }

 if (VAR_7.s.pref_dat_len_mismatch_err) {
  VAR_9 = VAR_3;
  VAR_8 = FUNC_5(VAR_6, VAR_9);
  FUNC_6(VAR_6, VAR_9, VAR_8);
  VAR_9 = VAR_4;
  VAR_8 = FUNC_5(VAR_6, VAR_9);
  FUNC_6(VAR_6, VAR_9, VAR_8);
 }

 if (VAR_7.s.rd_dat_len_mismatch_err) {
  VAR_9 = VAR_0;
  VAR_8 = FUNC_5(VAR_6, VAR_9);
  FUNC_6(VAR_6, VAR_9, VAR_8);
  VAR_9 = VAR_1;
  VAR_8 = FUNC_5(VAR_6, VAR_9);
  FUNC_6(VAR_6, VAR_9, VAR_8);
 }
 FUNC_6(VAR_6, VAR_2, VAR_7.value);
}

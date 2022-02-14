
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_falcon {scalar_t__ debug; } ;
struct hsf_fw_header {int patch_loc; int patch_sig; int sig_dbg_offset; int sig_dbg_size; int sig_prod_offset; int sig_prod_size; } ;
struct fw_bin_header {int header_offset; int data_offset; } ;


 int FUNC_0 (void*,void*,int) ;

__attribute__((used)) static void
FUNC_1(const struct nvkm_falcon *VAR_0, void *VAR_1,
    bool VAR_2)
{
 struct fw_bin_header *VAR_3 = VAR_1;
 struct hsf_fw_header *VAR_4 = VAR_1 + VAR_3->header_offset;
 void *VAR_5 = VAR_1 + VAR_3->data_offset;
 void *VAR_6;
 u32 VAR_7;
 u32 VAR_8, VAR_9;






 if (VAR_2) {
  VAR_8 = VAR_4->patch_loc;
  VAR_9 = VAR_4->patch_sig;
 } else {
  VAR_8 = *(u32 *)(VAR_1 + VAR_4->patch_loc);
  VAR_9 = *(u32 *)(VAR_1 + VAR_4->patch_sig);
 }


 if (VAR_0->debug) {
  VAR_6 = VAR_1 + VAR_4->sig_dbg_offset;
  VAR_7 = VAR_4->sig_dbg_size;
 } else {
  VAR_6 = VAR_1 + VAR_4->sig_prod_offset;
  VAR_7 = VAR_4->sig_prod_size;
 }


 FUNC_0(VAR_5 + VAR_8, VAR_6 + VAR_9, VAR_7);
}

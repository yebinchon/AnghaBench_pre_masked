
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mac_iv; int mac_digest; int mac_src_p; int enc_iv; int enc_key_p; int enc_p; } ;
struct mv_cesa_op_ctx {TYPE_1__ desc; } ;
struct mv_cesa_engine {int sram_dma; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_6(struct mv_cesa_engine *VAR_3,
         struct mv_cesa_op_ctx *VAR_4)
{
 u32 VAR_5 = VAR_3->sram_dma & VAR_2;

 VAR_4->desc.enc_p = FUNC_0(VAR_5);
 VAR_4->desc.enc_key_p = FUNC_2(VAR_5);
 VAR_4->desc.enc_iv = FUNC_1(VAR_5);
 VAR_4->desc.mac_src_p &= ~VAR_0;
 VAR_4->desc.mac_src_p |= FUNC_3(VAR_5);
 VAR_4->desc.mac_digest &= ~VAR_1;
 VAR_4->desc.mac_digest |= FUNC_4(VAR_5);
 VAR_4->desc.mac_iv = FUNC_5(VAR_5);
}

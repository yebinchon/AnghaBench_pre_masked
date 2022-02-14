
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct e82545_softc {int esc_tdba; int esc_TDBAL; int esc_TDLEN; int esc_ctx; int esc_txdesc; scalar_t__ esc_TDBAH; } ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_0)
{


 VAR_0->esc_tdba = (uint64_t)VAR_0->esc_TDBAH << 32 | VAR_0->esc_TDBAL;


 VAR_0->esc_txdesc = FUNC_0(VAR_0->esc_ctx, VAR_0->esc_tdba,
            VAR_0->esc_TDLEN);
}

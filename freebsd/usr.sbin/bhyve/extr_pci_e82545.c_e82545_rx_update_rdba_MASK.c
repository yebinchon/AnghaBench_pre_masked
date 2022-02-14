
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct e82545_softc {int esc_rdba; int esc_RDBAL; int esc_RDLEN; int esc_ctx; int esc_rxdesc; scalar_t__ esc_RDBAH; } ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_0)
{


 VAR_0->esc_rdba = (uint64_t)VAR_0->esc_RDBAH << 32 |
     VAR_0->esc_RDBAL;


 VAR_0->esc_rxdesc = FUNC_0(VAR_0->esc_ctx,
     VAR_0->esc_rdba, VAR_0->esc_RDLEN);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct aes_cbc_mac_ctx {int keysched; int rounds; } ;


 int FUNC_0 (int ,int const*,int) ;

void
FUNC_1(struct aes_cbc_mac_ctx *VAR_0, const uint8_t *VAR_1, uint16_t VAR_2)
{
 VAR_0->rounds = FUNC_0(VAR_0->keysched, VAR_1, VAR_2 * 8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct aes_gmac_ctx {int counter; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int const*,int ,int) ;

void
FUNC_2(struct aes_gmac_ctx *VAR_0, const uint8_t *VAR_1, uint16_t VAR_2)
{

 FUNC_0(VAR_2 <= sizeof VAR_0->counter, ("passed ivlen too large!"));
 FUNC_1(VAR_1, VAR_0->counter, VAR_2);
}

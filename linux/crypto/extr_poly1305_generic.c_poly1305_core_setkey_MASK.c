
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct poly1305_key {int* r; } ;


 int FUNC_0 (int const*) ;

void FUNC_1(struct poly1305_key *VAR_0, const u8 *VAR_1)
{

 VAR_0->r[0] = (FUNC_0(VAR_1 + 0) >> 0) & 0x3ffffff;
 VAR_0->r[1] = (FUNC_0(VAR_1 + 3) >> 2) & 0x3ffff03;
 VAR_0->r[2] = (FUNC_0(VAR_1 + 6) >> 4) & 0x3ffc0ff;
 VAR_0->r[3] = (FUNC_0(VAR_1 + 9) >> 6) & 0x3f03fff;
 VAR_0->r[4] = (FUNC_0(VAR_1 + 12) >> 8) & 0x00fffff;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sbp2_target {int guid; } ;



__attribute__((used)) static void FUNC_0(struct sbp2_target *VAR_0,
        const u32 *VAR_1)
{
 if ((VAR_1[0] & 0xffff0000) == 0x00020000)
  VAR_0->guid = (u64)VAR_1[1] << 32 | VAR_1[2];
}

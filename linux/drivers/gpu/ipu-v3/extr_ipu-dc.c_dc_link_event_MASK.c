
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_dc {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ipu_dc *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_0->base + FUNC_0(VAR_1));
 VAR_4 &= ~(0xffff << (16 * (VAR_1 & 0x1)));
 VAR_4 |= ((VAR_2 << 8) | VAR_3) << (16 * (VAR_1 & 0x1));
 FUNC_2(VAR_4, VAR_0->base + FUNC_0(VAR_1));
}

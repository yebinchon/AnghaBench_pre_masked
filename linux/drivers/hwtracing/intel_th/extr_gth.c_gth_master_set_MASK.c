
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gth_device {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct gth_device *VAR_2, unsigned int VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_1 + ((VAR_3 >> 1) & ~3u);
 unsigned int VAR_6 = (VAR_3 & 0x7) * 4;
 u32 VAR_7;

 if (VAR_3 >= 256) {
  VAR_5 = VAR_0;
  VAR_6 = 0;
 }

 VAR_7 = FUNC_0(VAR_2->base + VAR_5);
 VAR_7 &= ~(0xf << VAR_6);
 if (VAR_4 >= 0)
  VAR_7 |= (0x8 | VAR_4) << VAR_6;
 FUNC_1(VAR_7, VAR_2->base + VAR_5);
}

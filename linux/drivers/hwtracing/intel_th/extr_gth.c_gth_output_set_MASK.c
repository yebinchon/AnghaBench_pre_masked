
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gth_device {scalar_t__ base; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gth_device *VAR_2, int VAR_3,
      unsigned int VAR_4)
{
 unsigned long VAR_5 = VAR_3 & 4 ? VAR_1 : VAR_0;
 u32 VAR_6;
 int VAR_7 = (VAR_3 & 3) * 8;

 VAR_6 = FUNC_0(VAR_2->base + VAR_5);
 VAR_6 &= ~(0xff << VAR_7);
 VAR_6 |= VAR_4 << VAR_7;
 FUNC_1(VAR_6, VAR_2->base + VAR_5);
}

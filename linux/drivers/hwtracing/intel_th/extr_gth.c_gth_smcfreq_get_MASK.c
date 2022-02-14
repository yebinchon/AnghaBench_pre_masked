
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gth_device {scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct gth_device *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = VAR_0 + ((VAR_2 / 2) * 4);
 int VAR_4 = (VAR_2 & 1) * 16;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1->base + VAR_3);
 VAR_5 &= 0xffff << VAR_4;
 VAR_5 >>= VAR_4;

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gth_device {scalar_t__ base; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct gth_device *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = VAR_3 & 4 ? VAR_1 : VAR_0;
 u32 VAR_5;
 int VAR_6 = (VAR_3 & 3) * 8;

 VAR_5 = FUNC_0(VAR_2->base + VAR_4);
 VAR_5 &= 0xff << VAR_6;
 VAR_5 >>= VAR_6;

 return VAR_5;
}

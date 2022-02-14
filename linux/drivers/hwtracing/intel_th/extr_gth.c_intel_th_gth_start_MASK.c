
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_th_output {scalar_t__ multiblock; } ;
struct gth_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gth_device *VAR_2,
          struct intel_th_output *VAR_3)
{
 u32 VAR_4 = 0xfc0000;

 if (VAR_3->multiblock)
  VAR_4 |= 0xff;

 FUNC_0(VAR_4, VAR_2->base + VAR_0);
 FUNC_0(0, VAR_2->base + VAR_1);
}

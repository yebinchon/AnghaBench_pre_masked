
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cc10001_adc_device {scalar_t__ reg_base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct cc10001_adc_device *VAR_0,
           u32 VAR_1)
{
 return FUNC_0(VAR_0->reg_base + VAR_1);
}

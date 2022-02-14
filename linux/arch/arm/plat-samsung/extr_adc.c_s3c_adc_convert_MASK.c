
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adc_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct adc_device *VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_2->regs + VAR_0);

 VAR_3 |= VAR_1;
 FUNC_1(VAR_3, VAR_2->regs + VAR_0);
}

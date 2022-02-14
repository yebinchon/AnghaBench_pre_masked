
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gart_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct gart_device *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 FUNC_0(VAR_3, VAR_2->regs + VAR_0);
 FUNC_0(VAR_4, VAR_2->regs + VAR_1);
}

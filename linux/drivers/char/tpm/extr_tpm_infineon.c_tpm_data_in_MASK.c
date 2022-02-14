
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iotype; scalar_t__ data_regs; scalar_t__ mem_base; } ;


 scalar_t__ VAR_0 ;
 unsigned char FUNC_0 (scalar_t__) ;
 unsigned char FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline unsigned char FUNC_2(unsigned char VAR_2)
{
 if (VAR_1.iotype == VAR_0)
  return FUNC_0(VAR_1.data_regs + VAR_2);
 else
  return FUNC_1(VAR_1.mem_base + VAR_1.data_regs + VAR_2);
}

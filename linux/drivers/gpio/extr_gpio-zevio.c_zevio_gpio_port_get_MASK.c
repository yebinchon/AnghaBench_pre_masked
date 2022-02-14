
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int regs; } ;
struct zevio_gpio {TYPE_1__ chip; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct zevio_gpio *VAR_1, unsigned VAR_2,
     unsigned VAR_3)
{
 unsigned VAR_4 = ((VAR_2 >> 3) & 3)*VAR_0;
 return FUNC_1(FUNC_0(VAR_1->chip.regs + VAR_4 + VAR_3));
}

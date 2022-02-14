
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mtu2_channel {scalar_t__ base; TYPE_1__* mtu; } ;
struct TYPE_2__ {scalar_t__ mapbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 void FUNC_1 (unsigned long,scalar_t__) ;
 unsigned long* VAR_3 ;

__attribute__((used)) static inline void FUNC_2(struct sh_mtu2_channel *VAR_4, int VAR_5,
    unsigned long VAR_6)
{
 unsigned long VAR_7;

 if (VAR_5 == VAR_2)
  return FUNC_1(VAR_6, VAR_4->mtu->mapbase + 0x280);

 VAR_7 = VAR_3[VAR_5];

 if ((VAR_5 == VAR_0) || (VAR_5 == VAR_1))
  FUNC_0(VAR_6, VAR_4->base + VAR_7);
 else
  FUNC_1(VAR_6, VAR_4->base + VAR_7);
}

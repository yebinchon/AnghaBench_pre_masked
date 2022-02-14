
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int systemid; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned int VAR_3)
{
 return ((VAR_3 & VAR_0) + 0x0100) << ((VAR_2->systemid & VAR_1) >= 5 ? 16 : 14);
}

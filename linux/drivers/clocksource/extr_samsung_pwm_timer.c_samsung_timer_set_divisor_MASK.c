
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int div_base; } ;
struct TYPE_4__ {scalar_t__ base; TYPE_1__ variant; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_4, u8 VAR_5)
{
 u8 VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7;
 u32 VAR_8;
 u8 VAR_9;

 VAR_9 = (FUNC_1(VAR_5) - 1) - VAR_2.variant.div_base;

 FUNC_3(&VAR_3, VAR_7);

 VAR_8 = FUNC_2(VAR_2.base + VAR_0);
 VAR_8 &= ~(VAR_1 << VAR_6);
 VAR_8 |= VAR_9 << VAR_6;
 FUNC_5(VAR_8, VAR_2.base + VAR_0);

 FUNC_4(&VAR_3, VAR_7);
}

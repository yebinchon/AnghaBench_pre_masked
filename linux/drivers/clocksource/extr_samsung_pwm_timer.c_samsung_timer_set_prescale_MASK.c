
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_5, u16 VAR_6)
{
 unsigned long VAR_7;
 u8 VAR_8 = 0;
 u32 VAR_9;

 if (VAR_5 >= 2)
  VAR_8 = VAR_1;

 FUNC_1(&VAR_4, VAR_7);

 VAR_9 = FUNC_0(VAR_3.base + VAR_0);
 VAR_9 &= ~(VAR_2 << VAR_8);
 VAR_9 |= (VAR_6 - 1) << VAR_8;
 FUNC_3(VAR_9, VAR_3.base + VAR_0);

 FUNC_2(&VAR_4, VAR_7);
}

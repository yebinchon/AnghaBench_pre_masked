
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {scalar_t__ registers; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_5)
{
 u32 VAR_6, VAR_7;


 VAR_7 = FUNC_0(VAR_4.registers+VAR_2);
 VAR_7 &= ~VAR_1;
 FUNC_1(VAR_7, VAR_4.registers+VAR_2);


 VAR_6 = FUNC_0(VAR_4.registers+VAR_0);
 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_5;
 FUNC_1(VAR_6, VAR_4.registers+VAR_0);
}

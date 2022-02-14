
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2if {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ps2if *VAR_1)
{
 int VAR_2 = 100;

 while (VAR_2--) {
  if ((FUNC_0(VAR_1->base + VAR_0) & 0xff) == 0xff)
   break;
 }
}

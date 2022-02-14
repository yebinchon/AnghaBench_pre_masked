
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;


 int FUNC_0 () ;

__attribute__((used)) static u8 FUNC_1(u16 VAR_0)
{
 u8 VAR_1;

 FUNC_0();

 for (VAR_1 = 0; VAR_0; VAR_1++) {



  VAR_0 &= (u16) (VAR_0 - 1);
 }

 return (VAR_1);
}

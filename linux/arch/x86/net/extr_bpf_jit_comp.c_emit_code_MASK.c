
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u32 ;
typedef void* u16 ;


 int FUNC_0 () ;

__attribute__((used)) static u8 *FUNC_1(u8 *VAR_0, u32 VAR_1, unsigned int VAR_2)
{
 if (VAR_2 == 1)
  *VAR_0 = VAR_1;
 else if (VAR_2 == 2)
  *(u16 *)VAR_0 = VAR_1;
 else {
  *(u32 *)VAR_0 = VAR_1;
  FUNC_0();
 }
 return VAR_0 + VAR_2;
}

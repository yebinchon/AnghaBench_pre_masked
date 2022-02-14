
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static U32 FUNC_0(U32 VAR_2)
{
    VAR_2 ^= VAR_2 >> 15;
    VAR_2 *= VAR_0;
    VAR_2 ^= VAR_2 >> 13;
    VAR_2 *= VAR_1;
    VAR_2 ^= VAR_2 >> 16;
    return(VAR_2);
}

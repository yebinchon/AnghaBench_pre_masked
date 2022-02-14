
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8 ;
typedef scalar_t__ int16 ;
typedef int float32 ;
typedef int flag ;
typedef int bits32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static float32 FUNC_2(flag VAR_0, int16 VAR_1, bits32 VAR_2)
{
 int8 VAR_3;

 VAR_3 = FUNC_0(VAR_2) - 1;
 return FUNC_1(VAR_0, VAR_1 - VAR_3,
       VAR_2 << VAR_3);
}

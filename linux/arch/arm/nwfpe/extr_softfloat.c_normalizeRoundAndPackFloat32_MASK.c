
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int dummy; } ;
typedef int int8 ;
typedef scalar_t__ int16 ;
typedef int float32 ;
typedef int flag ;
typedef int bits32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct roundingData*,int ,scalar_t__,int) ;

__attribute__((used)) static float32
 FUNC_2( struct roundingData *VAR_0, flag VAR_1, int16 VAR_2, bits32 VAR_3 )
{
    int8 VAR_4;

    VAR_4 = FUNC_0( VAR_3 ) - 1;
    return FUNC_1( VAR_0, VAR_1, VAR_2 - VAR_4, VAR_3<<VAR_4 );

}

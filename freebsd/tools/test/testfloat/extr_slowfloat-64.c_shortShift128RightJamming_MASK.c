
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int8 ;
typedef int bits64 ;
struct TYPE_4__ {int a1; int a0; } ;
typedef TYPE_1__ bits128X ;



__attribute__((used)) static bits128X FUNC_0( bits128X VAR_0, int8 VAR_1 )
{
    int8 VAR_2;
    bits64 VAR_3;

    VAR_2 = ( - VAR_1 & 63 );
    VAR_3 = VAR_0.a1<<VAR_2;
    VAR_0.a1 = ( VAR_0.a0<<VAR_2 ) | ( VAR_0.a1>>VAR_1 ) | ( VAR_3 != 0 );
    VAR_0.a0 >>= VAR_1;
    return VAR_0;

}

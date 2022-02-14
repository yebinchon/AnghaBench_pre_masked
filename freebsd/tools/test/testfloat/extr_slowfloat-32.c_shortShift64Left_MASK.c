
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int8 ;
struct TYPE_4__ {int a0; int a1; } ;
typedef TYPE_1__ bits64X ;



__attribute__((used)) static bits64X FUNC_0( bits64X VAR_0, int8 VAR_1 )
{
    int8 VAR_2;

    VAR_2 = ( - VAR_1 & 31 );
    VAR_0.a0 = ( VAR_0.a0<<VAR_1 ) | ( VAR_0.a1>>VAR_2 );
    VAR_0.a1 <<= VAR_1;
    return VAR_0;

}

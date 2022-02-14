
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ a1; scalar_t__ a0; } ;
typedef TYPE_1__ bits128X ;



__attribute__((used)) static bits128X FUNC_0( bits128X VAR_0, bits128X VAR_1 )
{

    VAR_0.a1 += VAR_1.a1;
    VAR_0.a0 += VAR_1.a0 + ( VAR_0.a1 < VAR_1.a1 );
    return VAR_0;

}

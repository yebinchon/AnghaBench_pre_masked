
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_3, const void *VAR_4)
{
    const nltype *VAR_5 = (const nltype *)VAR_3;
    const nltype *VAR_6 = (const nltype *)VAR_4;

    if ( VAR_5 -> value < VAR_6 -> value ) {
 return VAR_2;
    }
    if ( VAR_5 -> value > VAR_6 -> value ) {
 return VAR_1;
    }
    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* mult ) (unsigned char*,unsigned char const*,unsigned char const*) ;} ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned char const*,unsigned char const*) ;

int
FUNC_1(unsigned char *VAR_2, const unsigned char *VAR_3,
                             const unsigned char *VAR_4)
{
    size_t VAR_5;
    volatile unsigned char VAR_6 = 0;

    if (VAR_1->mult(VAR_2, VAR_3, VAR_4) != 0) {
        return -1;
    }
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        VAR_6 |= VAR_2[VAR_5];
    }
    return -(1 & ((VAR_6 - 1) >> 8));
}

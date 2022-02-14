
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hi; int lo; } ;
struct TYPE_6__ {int b3; } ;
union bil {unsigned long l; TYPE_2__ i; TYPE_1__ b; } ;
typedef int johan ;
struct TYPE_9__ {int b3; int i12; scalar_t__ b0; } ;
struct TYPE_8__ {int b0; int b2; int b3; int b1; } ;
struct TYPE_10__ {TYPE_4__ bi; TYPE_3__ b; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (unsigned long) ;

unsigned long
FUNC_1 (unsigned long VAR_1, unsigned long VAR_2)
{
        union bil VAR_3;

        VAR_3.i.hi = FUNC_0(VAR_1)->b.b0 * FUNC_0(VAR_2)->b.b2;
        VAR_3.i.lo = FUNC_0(VAR_1)->b.b0 * FUNC_0(VAR_2)->b.b0;
 VAR_0 ;johan VAR_4;
        VAR_3.b.b3 += FUNC_0(VAR_1)->b.b3 *
                                  FUNC_0(VAR_2)->b.b0;
        VAR_3.b.b3 += FUNC_0(VAR_1)->b.b2 *
                                  FUNC_0(VAR_2)->b.b1;
        VAR_3.i.hi += FUNC_0(VAR_1)->b.b2 * FUNC_0(VAR_2)->b.b0;

        VAR_3.i.hi += FUNC_0(VAR_1)->b.b1 * FUNC_0(VAR_2)->b.b1;

        FUNC_0(VAR_1)->bi.b3 = FUNC_0(VAR_1)->b.b1 *
                                          FUNC_0(VAR_2)->b.b2;
        FUNC_0(VAR_1)->bi.i12 = FUNC_0(VAR_1)->b.b1 *
                           FUNC_0(VAR_2)->b.b0;

        FUNC_0(VAR_2)->bi.b3 = FUNC_0(VAR_1)->b.b0 *
                                          FUNC_0(VAR_2)->b.b3;
        FUNC_0(VAR_2)->bi.i12 = FUNC_0(VAR_1)->b.b0 *
                           FUNC_0(VAR_2)->b.b1;
        FUNC_0(VAR_2)->bi.b0 = 0;
        FUNC_0(VAR_1)->bi.b0 = 0;
        VAR_3.l += VAR_1;

        return VAR_3.l + VAR_2;
}

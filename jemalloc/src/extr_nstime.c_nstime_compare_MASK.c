
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ns; } ;
typedef TYPE_1__ nstime_t ;



int
FUNC_0(const nstime_t *VAR_0, const nstime_t *VAR_1) {
 return (VAR_0->ns > VAR_1->ns) - (VAR_0->ns < VAR_1->ns);
}

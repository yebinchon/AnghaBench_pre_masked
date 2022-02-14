
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ns; } ;
typedef TYPE_1__ nstime_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;

void
FUNC_2(nstime_t *VAR_0, const nstime_t *VAR_1) {
 FUNC_0(FUNC_1(VAR_0, VAR_1) >= 0);

 VAR_0->ns -= VAR_1->ns;
}

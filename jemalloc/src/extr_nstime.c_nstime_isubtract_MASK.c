
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ ns; } ;
typedef TYPE_1__ nstime_t ;


 int FUNC_0 (int) ;

void
FUNC_1(nstime_t *VAR_0, uint64_t VAR_1) {
 FUNC_0(VAR_0->ns >= VAR_1);

 VAR_0->ns -= VAR_1;
}

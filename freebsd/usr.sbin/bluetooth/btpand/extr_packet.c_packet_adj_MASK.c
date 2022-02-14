
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refcnt; size_t len; size_t ptr; } ;
typedef TYPE_1__ packet_t ;


 int FUNC_0 (int) ;

void
FUNC_1(packet_t *VAR_0, size_t VAR_1)
{

 FUNC_0(VAR_0->refcnt == 0);
 FUNC_0(VAR_0->len >= VAR_1);

 VAR_0->ptr += VAR_1;
 VAR_0->len -= VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* visitors; void* hits; void* bw; } ;
typedef TYPE_1__ GPercTotals ;
typedef int GModule ;


 void* FUNC_0 (int ,char*) ;

void
FUNC_1 (GModule VAR_0, GPercTotals * VAR_1)
{
  VAR_1->bw = FUNC_0 (VAR_0, "bytes");
  VAR_1->hits = FUNC_0 (VAR_0, "hits");
  VAR_1->visitors = FUNC_0 (VAR_0, "visitors");
}

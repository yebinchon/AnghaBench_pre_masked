
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cl_trace_cb ;
struct TYPE_2__ {void* trace_payload; int * pfn_trace_cb; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(cl_trace_cb *VAR_1, void *VAR_2)
{
 VAR_0.pfn_trace_cb = VAR_1;
 VAR_0.trace_payload = VAR_2;
}

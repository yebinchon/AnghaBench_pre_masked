
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int * unpark; int * park; int cancel_requests; int submit_request; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct intel_engine_cs *VAR_2)
{
 VAR_2->submit_request = VAR_1;
 VAR_2->cancel_requests = VAR_0;

 VAR_2->park = ((void*)0);
 VAR_2->unpark = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_option {uintptr_t nro_next; } ;
struct TestContext {struct nmreq_option* nr_opt; } ;



__attribute__((used)) static void
FUNC_0(struct nmreq_option *VAR_0, struct TestContext *VAR_1)
{
 VAR_0->nro_next = (uintptr_t)VAR_1->nr_opt;
 VAR_1->nr_opt = VAR_0;
}

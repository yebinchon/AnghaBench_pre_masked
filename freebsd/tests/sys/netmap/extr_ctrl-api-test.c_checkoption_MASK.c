
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_option {scalar_t__ nro_next; void* nro_reqtype; void* nro_status; } ;


 int FUNC_0 (char*,void*,void*) ;

__attribute__((used)) static int
FUNC_1(struct nmreq_option *VAR_0, struct nmreq_option *VAR_1)
{
 if (VAR_0->nro_next != VAR_1->nro_next) {
  FUNC_0("nro_next %p expected %p\n",
         (void *)(uintptr_t)VAR_0->nro_next,
         (void *)(uintptr_t)VAR_1->nro_next);
  return -1;
 }
 if (VAR_0->nro_reqtype != VAR_1->nro_reqtype) {
  FUNC_0("nro_reqtype %u expected %u\n", VAR_0->nro_reqtype,
         VAR_1->nro_reqtype);
  return -1;
 }
 if (VAR_0->nro_status != VAR_1->nro_status) {
  FUNC_0("nro_status %u expected %u\n", VAR_0->nro_status,
         VAR_1->nro_status);
  return -1;
 }
 return 0;
}

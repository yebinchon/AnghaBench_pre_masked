
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isns_req {int ir_buflen; int * ir_buf; scalar_t__ ir_usedlen; } ;
struct isns_hdr {int dummy; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct isns_req*) ;
 int FUNC_2 (int,char*) ;

struct isns_req *
FUNC_3(void)
{
 struct isns_req *VAR_0;

 VAR_0 = FUNC_0(sizeof(struct isns_req), 1);
 if (VAR_0 == ((void*)0)) {
  FUNC_2(1, "calloc");
  return (((void*)0));
 }
 VAR_0->ir_buflen = sizeof(struct isns_hdr);
 VAR_0->ir_usedlen = 0;
 VAR_0->ir_buf = FUNC_0(VAR_0->ir_buflen, 1);
 if (VAR_0->ir_buf == ((void*)0)) {
  FUNC_1(VAR_0);
  FUNC_2(1, "calloc");
  return (((void*)0));
 }
 return (VAR_0);
}

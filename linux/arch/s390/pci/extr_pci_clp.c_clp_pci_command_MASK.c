
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clp_req_hdr {int cmd; } ;
struct clp_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clp_req*,void*) ;
 int FUNC_1 (struct clp_req*,void*) ;
 int FUNC_2 (struct clp_req*,void*) ;
 int FUNC_3 (struct clp_req*,void*) ;

__attribute__((used)) static int FUNC_4(struct clp_req *VAR_1, struct clp_req_hdr *VAR_2)
{
 switch (VAR_2->cmd) {
 case 0x0001:
  return FUNC_3(VAR_1, (void *) VAR_2);
 case 0x0002:
  return FUNC_0(VAR_1, (void *) VAR_2);
 case 0x0003:
  return FUNC_1(VAR_1, (void *) VAR_2);
 case 0x0004:
  return FUNC_2(VAR_1, (void *) VAR_2);
 default:
  return -VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct isns_req {int ir_usedlen; int * ir_buf; } ;
struct isns_hdr {int dummy; } ;


 int FUNC_0 (int *) ;

uint32_t
FUNC_1(struct isns_req *VAR_0)
{

 if (VAR_0->ir_usedlen < sizeof(struct isns_hdr) + 4)
  return (-1);
 return (FUNC_0(&VAR_0->ir_buf[sizeof(struct isns_hdr)]));
}

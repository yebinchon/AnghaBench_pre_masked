
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct isns_req {int ir_usedlen; scalar_t__ ir_buf; } ;
struct isns_hdr {int ih_flags; int ih_function; int ih_version; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct isns_req* FUNC_1 () ;

struct isns_req *
FUNC_2(uint16_t VAR_1, uint16_t VAR_2)
{
 struct isns_req *VAR_3;
 struct isns_hdr *VAR_4;

 VAR_3 = FUNC_1();
 VAR_3->ir_usedlen = sizeof(struct isns_hdr);
 VAR_4 = (struct isns_hdr *)VAR_3->ir_buf;
 FUNC_0(VAR_4->ih_version, VAR_0);
 FUNC_0(VAR_4->ih_function, VAR_1);
 FUNC_0(VAR_4->ih_flags, VAR_2);
 return (VAR_3);
}

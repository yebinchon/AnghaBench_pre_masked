
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct isns_tlv {int * it_value; int it_length; int it_tag; } ;
struct isns_req {size_t ir_usedlen; int * ir_buf; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct isns_req*,int) ;
 int FUNC_2 (int *,void const*,int) ;
 int FUNC_3 (int *,int ,int) ;

void
FUNC_4(struct isns_req *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
    const void *VAR_3)
{
 struct isns_tlv *VAR_4;
 uint32_t VAR_5;

 VAR_5 = VAR_2 + ((VAR_2 & 3) ? (4 - (VAR_2 & 3)) : 0);
 FUNC_1(VAR_0, sizeof(*VAR_4) + VAR_5);
 VAR_4 = (struct isns_tlv *)&VAR_0->ir_buf[VAR_0->ir_usedlen];
 FUNC_0(VAR_4->it_tag, VAR_1);
 FUNC_0(VAR_4->it_length, VAR_5);
 FUNC_2(VAR_4->it_value, VAR_3, VAR_2);
 if (VAR_5 != VAR_2)
  FUNC_3(&VAR_4->it_value[VAR_2], 0, VAR_5 - VAR_2);
 VAR_0->ir_usedlen += sizeof(*VAR_4) + VAR_5;
}

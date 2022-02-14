
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hfi1_opa_header {int opah; int ibh; int hdr_type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u8 FUNC_2(struct hfi1_opa_header *VAR_0)
{
 if (!VAR_0->hdr_type)
  return FUNC_1(&VAR_0->ibh);
 else
  return FUNC_0(&VAR_0->opah);
}

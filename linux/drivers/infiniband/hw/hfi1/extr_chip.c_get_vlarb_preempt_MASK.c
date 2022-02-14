
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ib_vl_weight_elem {int vl; scalar_t__ weight; } ;
struct hfi1_devdata {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct hfi1_devdata *VAR_0, u32 VAR_1,
         struct ib_vl_weight_elem *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++, VAR_2++) {
  VAR_2->vl = 0xf;
  VAR_2->weight = 0;
 }
}

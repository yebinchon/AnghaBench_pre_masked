
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct rxe_mem {int type; size_t iova; size_t length; } ;


 int VAR_0 ;




int FUNC_0(struct rxe_mem *VAR_1, u64 VAR_2, size_t VAR_3)
{
 switch (VAR_1->type) {
 case 130:
  return 0;

 case 128:
 case 129:
  if (VAR_2 < VAR_1->iova ||
      VAR_3 > VAR_1->length ||
      VAR_2 > VAR_1->iova + VAR_1->length - VAR_3)
   return -VAR_0;
  return 0;

 default:
  return -VAR_0;
 }
}

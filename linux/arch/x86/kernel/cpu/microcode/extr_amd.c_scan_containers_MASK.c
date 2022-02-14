
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cont_desc {int dummy; } ;


 size_t FUNC_0 (int *,size_t,struct cont_desc*) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, size_t VAR_1, struct cont_desc *VAR_2)
{
 while (VAR_1) {
  size_t VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (!VAR_3)
   return;


  if (VAR_1 >= VAR_3) {
   VAR_0 += VAR_3;
   VAR_1 -= VAR_3;
  } else {
   return;
  }
 }
}

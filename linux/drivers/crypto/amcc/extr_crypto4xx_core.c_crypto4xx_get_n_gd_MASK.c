
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto4xx_device {int gdr_head; int gdr_tail; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct crypto4xx_device *VAR_2, int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 if (VAR_3 >= VAR_1)
  return VAR_0;

 VAR_4 = VAR_2->gdr_head;
 VAR_5 = (VAR_2->gdr_head + VAR_3) % VAR_1;
 if (VAR_2->gdr_head > VAR_2->gdr_tail) {
  if (VAR_5 < VAR_2->gdr_head && VAR_5 >= VAR_2->gdr_tail)
   return VAR_0;
 } else if (VAR_2->gdr_head < VAR_2->gdr_tail) {
  if (VAR_5 < VAR_2->gdr_head || VAR_5 >= VAR_2->gdr_tail)
   return VAR_0;
 }
 VAR_2->gdr_head = VAR_5;

 return VAR_4;
}

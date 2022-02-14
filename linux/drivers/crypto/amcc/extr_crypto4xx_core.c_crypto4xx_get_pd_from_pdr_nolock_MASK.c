
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto4xx_device {int pdr_head; int pdr_tail; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct crypto4xx_device *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 VAR_3 = VAR_2->pdr_head;
 VAR_4 = (VAR_2->pdr_head + 1) % VAR_1;

 if (VAR_4 == VAR_2->pdr_tail)
  return VAR_0;

 VAR_2->pdr_head = VAR_4;

 return VAR_3;
}

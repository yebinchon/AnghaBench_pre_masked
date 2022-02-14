
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xive_q {int idx; int toggle; int msk; scalar_t__ qpage; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct xive_q *VAR_0, bool VAR_1)
{
 u32 VAR_2;

 if (!VAR_0->qpage)
  return 0;
 VAR_2 = FUNC_0(VAR_0->qpage + VAR_0->idx);


 if ((VAR_2 >> 31) == VAR_0->toggle)
  return 0;


 if (!VAR_1) {

  VAR_0->idx = (VAR_0->idx + 1) & VAR_0->msk;


  if (VAR_0->idx == 0)
   VAR_0->toggle ^= 1;
 }

 return VAR_2 & 0x7fffffff;
}

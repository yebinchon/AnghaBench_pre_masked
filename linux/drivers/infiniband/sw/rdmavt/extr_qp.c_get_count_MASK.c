
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rvt_rq {scalar_t__ size; } ;



__attribute__((used)) static u32 FUNC_0(struct rvt_rq *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = VAR_2;

 if (VAR_3 >= VAR_0->size)
  VAR_3 = 0;
 if (VAR_3 < VAR_1)
  VAR_3 += VAR_0->size - VAR_1;
 else
  VAR_3 -= VAR_1;

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct linear_segments {scalar_t__ x; scalar_t__ y; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_0, const struct linear_segments *VAR_1,
        unsigned VAR_2)
{
 u64 VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6, VAR_7;

 if (VAR_0 >= VAR_1[0].x)
  return VAR_1[0].y;
 if (VAR_0 < VAR_1[VAR_2-1].x)
  return VAR_1[VAR_2-1].y;

 for (VAR_6 = 1; VAR_6 < VAR_2 - 1; VAR_6++) {

  if (VAR_0 == VAR_1[VAR_6].x)
   return VAR_1[VAR_6].y;
  if (VAR_0 > VAR_1[VAR_6].x)
   break;
 }


 VAR_5 = VAR_1[VAR_6].y - VAR_1[VAR_6 - 1].y;
 VAR_4 = VAR_1[VAR_6 - 1].x - VAR_1[VAR_6].x;
 VAR_3 = VAR_0 - VAR_1[VAR_6].x;
 VAR_3 *= VAR_5;
 FUNC_0(VAR_3, VAR_4);
 VAR_7 = VAR_1[VAR_6].y - VAR_3;

 return VAR_7;
}

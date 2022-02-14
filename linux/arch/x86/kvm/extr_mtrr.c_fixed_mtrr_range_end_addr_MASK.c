
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct fixed_mtrr_segment {int range_start; int range_shift; scalar_t__ start; } ;


 struct fixed_mtrr_segment* VAR_0 ;

__attribute__((used)) static u64 FUNC_0(int VAR_1, int VAR_2)
{
 struct fixed_mtrr_segment *VAR_3 = &VAR_0[VAR_1];
 int VAR_4 = VAR_2 - VAR_3->range_start;

 return VAR_3->start + ((VAR_4 + 1) << VAR_3->range_shift);
}

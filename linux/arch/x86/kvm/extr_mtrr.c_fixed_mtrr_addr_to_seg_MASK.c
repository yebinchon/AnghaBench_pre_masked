
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct fixed_mtrr_segment {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (struct fixed_mtrr_segment*) ;
 struct fixed_mtrr_segment* VAR_0 ;

__attribute__((used)) static int FUNC_1(u64 VAR_1)
{
 struct fixed_mtrr_segment *VAR_2;
 int VAR_3, VAR_4 = FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  if (VAR_2->start <= VAR_1 && VAR_1 < VAR_2->end)
   return VAR_3;
 }

 return -1;
}

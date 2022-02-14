
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fixed_mtrr_segment {int start; int end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct fixed_mtrr_segment* VAR_0 ;

__attribute__((used)) static void FUNC_2(int VAR_1, int VAR_2, u64 *VAR_3, u64 *VAR_4)
{
 struct fixed_mtrr_segment *VAR_5 = &VAR_0[VAR_1];
 u64 VAR_6 = FUNC_1(VAR_1);

 *VAR_3 = VAR_5->start + VAR_2 * VAR_6;
 *VAR_4 = *VAR_3 + VAR_6;
 FUNC_0(*VAR_4 > VAR_5->end);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef size_t u32 ;
struct hns_roce_hem {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct hns_roce_hem **VAR_0, u64 VAR_1,
       u32 VAR_2, u64 VAR_3)
{
 u64 VAR_4 = VAR_1 + VAR_2;
 u64 VAR_5;

 for (VAR_5 = VAR_1; (VAR_5 < VAR_4) && (VAR_5 < VAR_3); VAR_5++)
  if (VAR_0[VAR_5])
   return 0;

 return 1;
}

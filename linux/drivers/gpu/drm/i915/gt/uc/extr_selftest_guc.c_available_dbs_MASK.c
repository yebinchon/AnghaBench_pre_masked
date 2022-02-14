
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef unsigned long u16 ;
struct intel_guc {int doorbell_bitmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_1(struct intel_guc *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 u16 VAR_6;


 VAR_4 = 0;
 VAR_5 = VAR_1 / 2;
 if (VAR_3 <= VAR_0) {
  VAR_4 = VAR_5;
  VAR_5 += VAR_4;
 }

 VAR_6 = FUNC_0(VAR_2->doorbell_bitmap, VAR_5, VAR_4);
 if (VAR_6 < VAR_5)
  return 1;

 return 0;
}

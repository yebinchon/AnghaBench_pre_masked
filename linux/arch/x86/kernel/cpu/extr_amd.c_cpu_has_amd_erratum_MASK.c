
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cpuinfo_x86 {int x86_model; int x86_stepping; scalar_t__ x86; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct cpuinfo_x86*,int ) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static bool FUNC_5(struct cpuinfo_x86 *VAR_3, const int *VAR_4)
{
 int VAR_5 = *VAR_4++;
 u32 VAR_6;
 u32 VAR_7;

 if (VAR_5 >= 0 && VAR_5 < 65536 &&
     FUNC_3(VAR_3, VAR_2)) {
  u64 VAR_8;

  FUNC_4(VAR_0, VAR_8);
  if (VAR_5 < VAR_8) {
   u64 VAR_9;

   FUNC_4(VAR_1 + (VAR_5 >> 6),
       VAR_9);
   return VAR_9 & (1ULL << (VAR_5 & 0x3f));
  }
 }


 VAR_7 = (VAR_3->x86_model << 4) | VAR_3->x86_stepping;
 while ((VAR_6 = *VAR_4++))
  if ((VAR_3->x86 == FUNC_1(VAR_6)) &&
      (VAR_7 >= FUNC_2(VAR_6)) &&
      (VAR_7 <= FUNC_0(VAR_6)))
   return 1;

 return 0;
}

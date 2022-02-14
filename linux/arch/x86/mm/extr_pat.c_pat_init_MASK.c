
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpuinfo_x86 {scalar_t__ x86_vendor; int x86; int x86_model; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct cpuinfo_x86 VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_9 ;

void FUNC_3(void)
{
 u64 VAR_10;
 struct cpuinfo_x86 *VAR_11 = &VAR_7;

 if (VAR_9)
  return;

 if ((VAR_11->x86_vendor == VAR_6) &&
     (((VAR_11->x86 == 0x6) && (VAR_11->x86_model <= 0xd)) ||
      ((VAR_11->x86 == 0xf) && (VAR_11->x86_model <= 0x6)))) {
  VAR_10 = FUNC_0(0, VAR_2) | FUNC_0(1, VAR_3) | FUNC_0(2, VAR_1) | FUNC_0(3, VAR_0) |
        FUNC_0(4, VAR_2) | FUNC_0(5, VAR_3) | FUNC_0(6, VAR_1) | FUNC_0(7, VAR_0);
 } else {
  VAR_10 = FUNC_0(0, VAR_2) | FUNC_0(1, VAR_3) | FUNC_0(2, VAR_1) | FUNC_0(3, VAR_0) |
        FUNC_0(4, VAR_2) | FUNC_0(5, VAR_4) | FUNC_0(6, VAR_1) | FUNC_0(7, VAR_5);
 }

 if (!VAR_8) {
  FUNC_2(VAR_10);
  VAR_8 = 1;
 } else {
  FUNC_1(VAR_10);
 }
}

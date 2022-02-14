
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpuinfo_x86 {int x86_model; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct cpuinfo_x86 *VAR_1)
{
 u64 VAR_2;





 if ((VAR_1->x86_model >= 0x02) && (VAR_1->x86_model < 0x20)) {
  if (!FUNC_1(VAR_0, &VAR_2) && !(VAR_2 & 0x1E)) {
   VAR_2 |= 0x1E;
   FUNC_2(VAR_0, VAR_2);
  }
 }






 FUNC_0(VAR_1);
}

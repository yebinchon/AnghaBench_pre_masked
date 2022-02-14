
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct eps_cpu_data {int dummy; } ;
struct cpufreq_policy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct eps_cpu_data *VAR_3,
    struct cpufreq_policy *VAR_4,
    u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;


 FUNC_1(VAR_2, VAR_6, VAR_7);
 VAR_8 = 0;
 while (VAR_6 & ((1 << 16) | (1 << 17))) {
  FUNC_2(16);
  FUNC_1(VAR_2, VAR_6, VAR_7);
  VAR_8++;
  if (FUNC_3(VAR_8 > 64)) {
   return -VAR_0;
  }
 }

 FUNC_4(VAR_1, VAR_5 & 0xffff, 0);

 VAR_8 = 0;
 do {
  FUNC_2(16);
  FUNC_1(VAR_2, VAR_6, VAR_7);
  VAR_8++;
  if (FUNC_3(VAR_8 > 64)) {
   return -VAR_0;
  }
 } while (VAR_6 & ((1 << 16) | (1 << 17)));
 return 0;
}

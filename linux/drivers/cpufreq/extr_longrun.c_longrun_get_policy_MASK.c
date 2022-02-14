
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpufreq_policy {scalar_t__ cpu; scalar_t__ max; scalar_t__ min; int policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct cpufreq_policy *VAR_6)
{
 u32 VAR_7, VAR_8;

 FUNC_1(VAR_3, VAR_7, VAR_8);
 FUNC_0("longrun flags are %x - %x\n", VAR_7, VAR_8);
 if (VAR_7 & 0x01)
  VAR_6->policy = VAR_0;
 else
  VAR_6->policy = VAR_1;

 FUNC_1(VAR_2, VAR_7, VAR_8);
 FUNC_0("longrun ctrl is %x - %x\n", VAR_7, VAR_8);
 VAR_7 &= 0x0000007F;
 VAR_8 &= 0x0000007F;

 if (VAR_4 <= VAR_5) {

  VAR_6->min = VAR_6->max = VAR_4;
 } else {
  VAR_6->min = VAR_5 + VAR_7 *
   ((VAR_4 - VAR_5) / 100);
  VAR_6->max = VAR_5 + VAR_8 *
   ((VAR_4 - VAR_5) / 100);
 }
 VAR_6->cpu = 0;
}

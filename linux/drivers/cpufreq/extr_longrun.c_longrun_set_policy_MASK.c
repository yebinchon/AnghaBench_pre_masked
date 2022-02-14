
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpufreq_policy {scalar_t__ min; scalar_t__ max; int policy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_5)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_3 <= VAR_4) {

  VAR_8 = VAR_9 = 100;
 } else {
  VAR_8 = (VAR_5->min - VAR_4) /
   ((VAR_3 - VAR_4) / 100);
  VAR_9 = (VAR_5->max - VAR_4) /
   ((VAR_3 - VAR_4) / 100);
 }

 if (VAR_9 > 100)
  VAR_9 = 100;
 if (VAR_8 > VAR_9)
  VAR_8 = VAR_9;


 FUNC_0(VAR_2, VAR_6, VAR_7);
 VAR_6 &= 0xFFFFFFFE;
 switch (VAR_5->policy) {
 case 129:
  VAR_6 |= 0x00000001;
  break;
 case 128:
  break;
 }
 FUNC_1(VAR_2, VAR_6, VAR_7);


 FUNC_0(VAR_1, VAR_6, VAR_7);
 VAR_6 &= 0xFFFFFF80;
 VAR_7 &= 0xFFFFFF80;
 VAR_6 |= VAR_8;
 VAR_7 |= VAR_9;
 FUNC_1(VAR_1, VAR_6, VAR_7);

 return 0;
}

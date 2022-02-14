
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_application {long prev_scantime; int timestamp; scalar_t__ scantime_logical_max; scalar_t__ jiffies; } ;
typedef long __s32 ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mt_application *VAR_2, __s32 VAR_3)
{
 long VAR_4 = VAR_3 - VAR_2->prev_scantime;
 unsigned long VAR_5 = FUNC_0(VAR_1 - VAR_2->jiffies);

 VAR_2->jiffies = VAR_1;

 if (VAR_4 < 0)
  VAR_4 += VAR_2->scantime_logical_max;


 VAR_4 *= 100;

 if (VAR_5 > VAR_0)

  return 0;
 else
  return VAR_2->timestamp + VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ time64_t ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct rtc_time*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, struct rtc_time *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 time64_t VAR_7;

 do {
  VAR_5 = ((FUNC_0(VAR_0) & 0xffff) << 16) |
   (FUNC_0(VAR_1) & 0xffff);

  VAR_6 = ((FUNC_0(VAR_0) & 0xffff) << 16) |
   (FUNC_0(VAR_1) & 0xffff);
 } while (VAR_5 != VAR_6);


 VAR_7 = (u32)(VAR_5 - VAR_2);

 FUNC_1(VAR_7, VAR_4);

 return 0;
}

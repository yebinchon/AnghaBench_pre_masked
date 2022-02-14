
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtc_time*) ;
 scalar_t__ FUNC_1 (struct rtc_time*,struct rtc_time*,int) ;
 int FUNC_2 (struct rtc_time*,struct rtc_time*,int) ;

__attribute__((used)) static int FUNC_3 (struct rtc_time *VAR_0)
{
 struct rtc_time VAR_1, VAR_2;
 int VAR_3 = 0;



 if (FUNC_0(&VAR_2)) return -1;
 if (FUNC_0(&VAR_1)) return -1;

 while (FUNC_1(&VAR_1, &VAR_2, sizeof(struct rtc_time))) {
  if (VAR_3++ > 4) return -1;
  FUNC_2(&VAR_2, &VAR_1, sizeof(struct rtc_time));
  if (FUNC_0(&VAR_1)) return -1;
 }

 FUNC_2(VAR_0, &VAR_1, sizeof(struct rtc_time));

 return 0;
}

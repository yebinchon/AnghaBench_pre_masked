
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
typedef int rtc_tm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtc_time*,struct rtc_time*,int) ;
 int FUNC_2 (void*,struct rtc_time*,int) ;
 int FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (struct rtc_time*,int ,int) ;
 int FUNC_5 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_4, unsigned long VAR_5)
{
 struct rtc_time VAR_6;

 switch (VAR_4) {
  case 129:
   FUNC_4(&VAR_6, 0, sizeof(struct rtc_time));
   FUNC_3(&VAR_6);
   if (FUNC_2((void *)VAR_5, &VAR_6, sizeof(VAR_6)))
    return -VAR_2;
   break;

  case 128:
   if (!FUNC_0(VAR_0))
    return -VAR_1;

   if (FUNC_1(&VAR_6, (struct rtc_time *)VAR_5,
        sizeof(struct rtc_time)))
    return -VAR_2;

   FUNC_5(&VAR_6);
   break;

  default:
   return -VAR_3;
 }

 return 0;
}

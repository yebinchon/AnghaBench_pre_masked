
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {void* tm_hour; void* tm_min; void* tm_sec; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (void*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rtc_time *VAR_7)
{
 unsigned char VAR_8;





 FUNC_2(&VAR_6);
 VAR_7->tm_sec = FUNC_0(VAR_5);
 VAR_7->tm_min = FUNC_0(VAR_4);
 VAR_7->tm_hour = FUNC_0(VAR_3);
 VAR_8 = FUNC_0(VAR_1);
 FUNC_3(&VAR_6);

 if (!(VAR_8 & VAR_2) || VAR_0) {
  VAR_7->tm_sec = FUNC_1(VAR_7->tm_sec);
  VAR_7->tm_min = FUNC_1(VAR_7->tm_min);
  VAR_7->tm_hour = FUNC_1(VAR_7->tm_hour);
 }
}

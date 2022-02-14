
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int __u8 ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static void FUNC_4(struct rtc_time *VAR_7)
{
 union {
  __u8 cdata[4];
  __u32 idata;
 } VAR_8;
 __u8 VAR_9;
 time64_t VAR_10;

 VAR_10 = FUNC_2(VAR_7->tm_year + 1900, VAR_7->tm_mon + 1, VAR_7->tm_mday,
                 VAR_7->tm_hour, VAR_7->tm_min, VAR_7->tm_sec);



 VAR_9 = 0x55;
 FUNC_3(FUNC_0(VAR_6), &VAR_9);

 VAR_8.idata = FUNC_1(VAR_10 + VAR_1);
 FUNC_3(FUNC_0(VAR_2), &VAR_8.cdata[3]);
 FUNC_3(FUNC_0(VAR_3), &VAR_8.cdata[2]);
 FUNC_3(FUNC_0(VAR_4), &VAR_8.cdata[1]);
 FUNC_3(FUNC_0(VAR_5), &VAR_8.cdata[0]);



 VAR_9 = 0x55 | VAR_0;
 FUNC_3(FUNC_0(VAR_6), &VAR_9);
}

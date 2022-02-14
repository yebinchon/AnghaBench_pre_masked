
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mon; int tm_mday; int tm_year; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct rtc_time *VAR_13)
{
 unsigned char VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 FUNC_3(&VAR_12);

 VAR_14 = FUNC_1(VAR_1);

 FUNC_2((VAR_14|VAR_10), VAR_1);

 VAR_15 = FUNC_1(VAR_5);

 FUNC_2((VAR_15|VAR_3), VAR_5);

 VAR_16 = VAR_13->tm_sec;
 VAR_17 = VAR_13->tm_min;
 VAR_18 = VAR_13->tm_hour;
 VAR_19 = VAR_13->tm_mon;
 VAR_20 = VAR_13->tm_mday;
 VAR_21 = VAR_13->tm_year;

 if (!(VAR_14 & VAR_4) || VAR_0) {
  VAR_16 = FUNC_0(VAR_16);
  VAR_17 = FUNC_0(VAR_17);
  VAR_18 = FUNC_0(VAR_18);
  VAR_19 = FUNC_0(VAR_19);
  VAR_20 = FUNC_0(VAR_20);
  VAR_21 = FUNC_0(VAR_21);
 }
 FUNC_2(VAR_16, VAR_9);
 FUNC_2(VAR_17, VAR_7);
 FUNC_2(VAR_18, VAR_6);
 FUNC_2(VAR_19, VAR_8);
 FUNC_2(VAR_20, VAR_2);
 FUNC_2(VAR_21, VAR_11);
 FUNC_2(VAR_14, VAR_1);
 FUNC_2(VAR_15, VAR_5);

 FUNC_4(&VAR_12);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct timespec {int dummy; } ;
struct clocktime {int nsec; int year; void* mon; void* day; void* hour; void* min; void* sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct clocktime*,struct timespec*) ;
 int FUNC_5 (int ,int ,...) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, struct timespec *VAR_6)
{
 int VAR_7;
 struct clocktime VAR_8;
 uint32_t VAR_9;
 uint64_t VAR_10;

 VAR_7 = FUNC_5(VAR_3, FUNC_7(&VAR_9), FUNC_7(&VAR_10));
 while (VAR_7 == VAR_1) {
  FUNC_5(VAR_2, 0);
  FUNC_6("opalrtc", 1);
  VAR_7 = FUNC_5(VAR_3, FUNC_7(&VAR_9), FUNC_7(&VAR_10));
 }

 if (VAR_7 != VAR_4)
  return (VAR_0);

 VAR_10 = FUNC_3(VAR_10);
 VAR_9 = FUNC_2(VAR_9);

 VAR_8.nsec = FUNC_1((VAR_10 & 0x000000ffffff0000) >> 16) * 1000;
 VAR_8.sec = FUNC_0((VAR_10 & 0x0000ff0000000000) >> 40);
 VAR_8.min = FUNC_0((VAR_10 & 0x00ff000000000000) >> 48);
 VAR_8.hour = FUNC_0((VAR_10 & 0xff00000000000000) >> 56);

 VAR_8.day = FUNC_0((VAR_9 & 0x000000ff) >> 0);
 VAR_8.mon = FUNC_0((VAR_9 & 0x0000ff00) >> 8);
 VAR_8.year = FUNC_1((VAR_9 & 0xffff0000) >> 16);

 return (FUNC_4(&VAR_8, VAR_6));
}

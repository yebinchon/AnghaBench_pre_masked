
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct timespec {int dummy; } ;
struct clocktime {int year; int nsec; int hour; int min; int sec; int mon; int day; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct timespec*,struct clocktime*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,...) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, struct timespec *VAR_6)
{
 int VAR_7;
 struct clocktime VAR_8;
 uint32_t VAR_9 = 0;
 uint64_t VAR_10 = 0;

 FUNC_2(VAR_6, &VAR_8);

 VAR_9 |= (uint32_t)FUNC_0(VAR_8.day);
 VAR_9 |= ((uint32_t)FUNC_0(VAR_8.mon) << 8);
 VAR_9 |= ((uint32_t)FUNC_1(VAR_8.year) << 16);

 VAR_10 |= ((uint64_t)FUNC_1(VAR_8.nsec/1000) << 16);
 VAR_10 |= ((uint64_t)FUNC_0(VAR_8.sec) << 40);
 VAR_10 |= ((uint64_t)FUNC_0(VAR_8.min) << 48);
 VAR_10 |= ((uint64_t)FUNC_0(VAR_8.hour) << 56);

 VAR_10 = FUNC_4(VAR_10);
 VAR_9 = FUNC_3(VAR_9);

 do {
  VAR_7 = FUNC_5(VAR_3, FUNC_7(&VAR_9), FUNC_7(&VAR_10));
  if (VAR_7 == VAR_1) {
   VAR_7 = FUNC_5(VAR_2, 0);
   FUNC_6("opalrtc", 1);
  }
 } while (VAR_7 == VAR_1);

 if (VAR_7 != VAR_4)
  return (VAR_0);

 return (0);
}

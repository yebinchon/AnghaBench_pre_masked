
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct smu_cmd {int len; int * data; int cmd; } ;
struct clocktime {void* year; void* mon; void* day; void* dow; void* hour; void* min; void* sec; scalar_t__ nsec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct clocktime*,struct timespec*) ;
 scalar_t__ FUNC_2 (int ,struct smu_cmd*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, struct timespec *VAR_4)
{
 struct smu_cmd VAR_5;
 struct clocktime VAR_6;

 VAR_5.cmd = VAR_1;
 VAR_5.len = 1;
 VAR_5.data[0] = VAR_2;

 if (FUNC_2(VAR_3, &VAR_5, 1) != 0)
  return (VAR_0);

 VAR_6.nsec = 0;
 VAR_6.sec = FUNC_0(VAR_5.data[0]);
 VAR_6.min = FUNC_0(VAR_5.data[1]);
 VAR_6.hour = FUNC_0(VAR_5.data[2]);
 VAR_6.dow = FUNC_0(VAR_5.data[3]);
 VAR_6.day = FUNC_0(VAR_5.data[4]);
 VAR_6.mon = FUNC_0(VAR_5.data[5]);
 VAR_6.year = FUNC_0(VAR_5.data[6]) + 2000;

 return (FUNC_1(&VAR_6, VAR_4));
}

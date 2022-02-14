
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct smu_cmd {int len; void** data; int cmd; } ;
struct clocktime {scalar_t__ year; scalar_t__ mon; scalar_t__ day; scalar_t__ dow; scalar_t__ hour; scalar_t__ min; scalar_t__ sec; } ;
typedef int device_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct timespec*,struct clocktime*) ;
 int FUNC_2 (int ,struct smu_cmd*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct timespec *VAR_3)
{
 static struct smu_cmd VAR_4;
 struct clocktime VAR_5;

 VAR_4.cmd = VAR_0;
 VAR_4.len = 8;
 VAR_4.data[0] = VAR_1;

 FUNC_1(VAR_3, &VAR_5);

 VAR_4.data[1] = FUNC_0(VAR_5.sec);
 VAR_4.data[2] = FUNC_0(VAR_5.min);
 VAR_4.data[3] = FUNC_0(VAR_5.hour);
 VAR_4.data[4] = FUNC_0(VAR_5.dow);
 VAR_4.data[5] = FUNC_0(VAR_5.day);
 VAR_4.data[6] = FUNC_0(VAR_5.mon);
 VAR_4.data[7] = FUNC_0(VAR_5.year - 2000);

 return (FUNC_2(VAR_2, &VAR_4, 0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {scalar_t__ tm_year; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_sec; } ;
struct apm_bios_arg {int eax; int ecx; int edx; int esi; int edi; int ebx; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct apm_bios_arg*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,struct apm_bios_arg*) ;
 struct tm* FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(int VAR_5, int VAR_6)
{
 time_t VAR_7;
 struct tm *VAR_8;
 struct apm_bios_arg VAR_9;

 VAR_7 = FUNC_6(((void*)0)) + VAR_6;
 if (VAR_4)
  VAR_8 = FUNC_5(&VAR_7);
 else
  VAR_8 = FUNC_2(&VAR_7);
 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.eax = (VAR_1) << 8 | VAR_2;
 VAR_9.ebx = VAR_3;
 if (VAR_6 > 0) {
  VAR_9.ecx = (FUNC_3(VAR_8->tm_sec) << 8) | 0x02;
  VAR_9.edx = (FUNC_3(VAR_8->tm_hour) << 8) | FUNC_3(VAR_8->tm_min);
  VAR_9.esi = (FUNC_3(VAR_8->tm_mon + 1) << 8) | FUNC_3(VAR_8->tm_mday);
  VAR_9.edi = FUNC_3(VAR_8->tm_year + 1900);
 } else {
  VAR_9.ecx = 0x0000;
 }
 if (FUNC_4(VAR_5, VAR_0, &VAR_9)) {
  FUNC_1(1,"set resume timer");
 }
}

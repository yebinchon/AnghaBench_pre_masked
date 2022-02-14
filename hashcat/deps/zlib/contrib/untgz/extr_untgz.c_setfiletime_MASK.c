
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct utimbuf {int modtime; int actime; } ;
struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_wday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef void* WORD ;
struct TYPE_3__ {scalar_t__ wMilliseconds; void* wSecond; void* wMinute; void* wHour; void* wDay; void* wDayOfWeek; void* wMonth; void* wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef scalar_t__ HANDLE ;
typedef int FILETIME ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 struct tm* FUNC_6 (int *) ;
 int FUNC_7 (char*,struct utimbuf*) ;

int FUNC_8 (char *VAR_4,time_t VAR_5)
{
  struct utimbuf VAR_6;

  VAR_6.actime = VAR_6.modtime = VAR_5;
  return FUNC_7(VAR_4,&VAR_6);

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tr2_tbuf {int buf; } ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (int ,int,char*,scalar_t__,scalar_t__,int ,int ,int ,int ,long) ;

void FUNC_3(struct tr2_tbuf *VAR_0)
{
 struct timeval VAR_1;
 struct tm VAR_2;
 time_t VAR_3;

 FUNC_0(&VAR_1, ((void*)0));
 VAR_3 = VAR_1.tv_sec;
 FUNC_1(&VAR_3, &VAR_2);

 FUNC_2(VAR_0->buf, sizeof(VAR_0->buf), "%4d%02d%02dT%02d%02d%02d.%06ldZ",
    VAR_2.tm_year + 1900, VAR_2.tm_mon + 1, VAR_2.tm_mday, VAR_2.tm_hour,
    VAR_2.tm_min, VAR_2.tm_sec, (long)VAR_1.tv_usec);
}

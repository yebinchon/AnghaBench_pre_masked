
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int buffer ;


 scalar_t__ FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static const char *
FUNC_1(struct timeval *VAR_0)
{
 static char VAR_1[32];
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_0->tv_sec / 60;
 VAR_5 = VAR_0->tv_sec % 60;
 VAR_3 = VAR_4 / 60;
 VAR_4 %= 60;
 VAR_2 = VAR_3 / 24;
 VAR_3 %= 24;
 VAR_6 = 0;
 if (VAR_2 == 1)
  VAR_6 += FUNC_0(VAR_1, sizeof(VAR_1), "1 day ");
 else if (VAR_2 > 0)
  VAR_6 += FUNC_0(VAR_1, sizeof(VAR_1), "%u days ", VAR_2);

 FUNC_0(VAR_1 + VAR_6, sizeof(VAR_1) - VAR_6, "%02u:%02u:%02u.%06u",
     VAR_3, VAR_4, VAR_5, (unsigned int)VAR_0->tv_usec);
 return (VAR_1);
}

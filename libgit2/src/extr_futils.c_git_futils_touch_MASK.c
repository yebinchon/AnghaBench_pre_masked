
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct p_timeval {scalar_t__ tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (char const*,struct p_timeval*) ;
 int FUNC_2 (int *) ;

int FUNC_3(const char *VAR_1, time_t *VAR_2)
{
 struct p_timeval VAR_3[2];
 int VAR_4;

 VAR_3[0].tv_sec = VAR_3[1].tv_sec = VAR_2 ? *VAR_2 : FUNC_2(((void*)0));
 VAR_3[0].tv_usec = VAR_3[1].tv_usec = 0;

 VAR_4 = FUNC_1(VAR_1, VAR_3);

 return (VAR_4 < 0) ? FUNC_0(VAR_0, VAR_1, "touch") : 0;
}

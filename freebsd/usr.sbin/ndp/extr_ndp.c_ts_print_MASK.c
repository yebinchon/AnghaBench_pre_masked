
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(const struct timeval *VAR_1)
{
 int VAR_2;


 VAR_2 = (VAR_1->tv_sec + VAR_0) % 86400;
 (void)FUNC_0("%02d:%02d:%02d.%06u ",
     VAR_2 / 3600, (VAR_2 % 3600) / 60, VAR_2 % 60, (u_int32_t)VAR_1->tv_usec);
}

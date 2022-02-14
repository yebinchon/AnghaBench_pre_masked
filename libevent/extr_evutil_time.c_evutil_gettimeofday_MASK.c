
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {long tv_sec; long tv_usec; } ;
typedef int ev_uint64_t ;
typedef int FILETIME ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_2(struct timeval *VAR_4, struct timezone *VAR_5)
{
 union {
  FILETIME ft_ft;
  ev_uint64_t ft_64;
 } VAR_6;

 if (VAR_4 == ((void*)0))
  return -1;

 FUNC_1(&VAR_6.ft_ft);

 if (FUNC_0(VAR_6.ft_64 < 116444736000000000llu)) {

  return -1;
 }
 VAR_6.ft_64 -= 116444736000000000llu;
 VAR_4->tv_sec = (long) (VAR_6.ft_64 / 10000000llu);
 VAR_4->tv_usec = (long) ((VAR_6.ft_64 / 10llu) % 1000000llu);
 return 0;
}

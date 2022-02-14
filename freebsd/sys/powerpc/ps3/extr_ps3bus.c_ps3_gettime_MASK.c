
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, struct timespec *VAR_2)
{
 uint64_t VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3, &VAR_4);
 if (VAR_5)
  return (VAR_5);

 VAR_2->tv_sec = VAR_3 + VAR_0;
 VAR_2->tv_nsec = 0;
 return (0);
}

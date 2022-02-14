
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_2__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct bridge_if {TYPE_1__ last_tc_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct bridge_if *VAR_2, uint32_t *VAR_3)
{
 struct timeval VAR_4;

 if (FUNC_0(&VAR_4, ((void*)0)) < 0) {
  FUNC_2(VAR_0, "bridge get time since last TC:"
      "gettimeofday failed: %s", FUNC_1(VAR_1));
  return (-1);
 }

 if (VAR_4.tv_usec - VAR_2->last_tc_time.tv_usec < 0) {
  VAR_4.tv_sec -= 1;
  VAR_4.tv_usec += 1000000;
 }

 VAR_4.tv_sec -= VAR_2->last_tc_time.tv_sec;
 VAR_4.tv_usec -= VAR_2->last_tc_time.tv_usec;

 *VAR_3 = VAR_4.tv_sec * 100 + VAR_4.tv_usec/10000;

 return (0);
}

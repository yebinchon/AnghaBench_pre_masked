
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long long uint64_t ;
struct TYPE_6__ {long long tv_sec; long long tv_nsec; } ;
struct TYPE_5__ {long long tv_sec; long long tv_nsec; } ;
struct TYPE_4__ {long long tv_sec; long long tv_nsec; } ;
struct cryptotstat {long long count; TYPE_3__ max; TYPE_2__ min; TYPE_1__ acc; } ;


 int FUNC_0 (char*,char const*,long long,long long,long long,long long) ;

__attribute__((used)) static void
FUNC_1(const char* VAR_0, struct cryptotstat *VAR_1)
{
 uint64_t VAR_2, VAR_3, VAR_4;

 if (VAR_1->count == 0)
  return;
 VAR_2 = (1000000000LL*VAR_1->acc.tv_sec + VAR_1->acc.tv_nsec) / VAR_1->count;
 VAR_3 = 1000000000LL*VAR_1->min.tv_sec + VAR_1->min.tv_nsec;
 VAR_4 = 1000000000LL*VAR_1->max.tv_sec + VAR_1->max.tv_nsec;
 FUNC_0("%16.16s: avg %6llu ns : min %6llu ns : max %7llu ns [%u samps]\n",
  VAR_0, VAR_2, VAR_3, VAR_4, VAR_1->count);
}

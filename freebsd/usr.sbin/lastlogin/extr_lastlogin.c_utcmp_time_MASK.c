
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct utmpx {TYPE_1__ ut_tv; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_1, const void *VAR_2)
{
 time_t VAR_3, VAR_4;

 VAR_3 = ((const struct utmpx *)VAR_1)->ut_tv.tv_sec;
 VAR_4 = ((const struct utmpx *)VAR_2)->ut_tv.tv_sec;
 return (VAR_3 < VAR_4 ? VAR_0 : VAR_3 > VAR_4 ? -VAR_0 : 0);
}

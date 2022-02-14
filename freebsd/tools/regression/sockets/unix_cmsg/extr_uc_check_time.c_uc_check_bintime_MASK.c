
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct bintime {int dummy; } ;


 int FUNC_0 (struct bintime const*,struct timespec*) ;
 int FUNC_1 (struct timespec*) ;

int
FUNC_2(const struct bintime *VAR_0)
{
 struct timespec VAR_1;

 FUNC_0(VAR_0, &VAR_1);
 return (FUNC_1(&VAR_1));
}

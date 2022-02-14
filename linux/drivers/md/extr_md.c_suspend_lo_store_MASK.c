
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {unsigned long long suspend_lo; TYPE_1__* pers; } ;
typedef int ssize_t ;
typedef unsigned long long sector_t ;
struct TYPE_2__ {int * quiesce; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,unsigned long long*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct mddev *VAR_1, const char *VAR_2, size_t VAR_3)
{
 unsigned long long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, 10, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_4 != (sector_t)VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5)
  return VAR_5;
 VAR_5 = -VAR_0;
 if (VAR_1->pers == ((void*)0) ||
     VAR_1->pers->quiesce == ((void*)0))
  goto unlock;
 FUNC_3(VAR_1);
 VAR_1->suspend_lo = VAR_4;
 FUNC_2(VAR_1);

 VAR_5 = 0;
unlock:
 FUNC_4(VAR_1);
 return VAR_5 ?: VAR_3;
}

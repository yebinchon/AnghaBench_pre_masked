
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long safemode_delay; int safemode_timer; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mddev*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,unsigned long*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;

 if (FUNC_0(VAR_3)) {
  FUNC_2("md: Safemode is disabled for clustered mode\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_4, &VAR_6, 3) < 0)
  return -VAR_0;
 if (VAR_6 == 0)
  VAR_3->safemode_delay = 0;
 else {
  unsigned long VAR_7 = VAR_3->safemode_delay;
  unsigned long VAR_8 = (VAR_6*VAR_1)/1000;

  if (VAR_8 == 0)
   VAR_8 = 1;
  VAR_3->safemode_delay = VAR_8;
  if (VAR_8 < VAR_7 || VAR_7 == 0)
   FUNC_1(&VAR_3->safemode_timer, VAR_2+1);
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int mode_t ;
struct TYPE_4__ {int stat_calls; } ;
struct TYPE_5__ {TYPE_1__ perfdata; } ;
typedef TYPE_2__ checkout_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_2(
 checkout_data *VAR_4, const char *VAR_5, mode_t VAR_6)
{
 struct stat VAR_7;

 VAR_4->perfdata.stat_calls++;

 if (FUNC_1(VAR_5, &VAR_7) < 0) {

  if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
   return 0;


  FUNC_0(VAR_2, "failed to stat '%s'", VAR_5);
  return -1;
 }


 if ((VAR_7.st_mode & ~0777) == (VAR_6 & ~0777))
  return 1;

 return 0;
}

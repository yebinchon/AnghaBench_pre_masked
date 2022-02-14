
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const* const,char**,char**,int ) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_1)
{
 static char const VAR_2[] = "/system/bin/start";
 static char *VAR_3[] = {
  "HOME=/",
  "PATH=/sbin:/vendor/bin:/system/sbin:/system/bin:/system/xbin",
  ((void*)0),
 };
 static char *VAR_4[] = {
  (char *)VAR_2,
  "unipro_reset",
  ((void*)0),
 };

 FUNC_1("svc_watchdog: calling \"%s %s\" to reset greybus network!\n",
        VAR_4[0], VAR_4[1]);
 FUNC_0(VAR_2, VAR_4, VAR_3, VAR_0);
}

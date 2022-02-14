
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2,
          unsigned long VAR_3, void *VAR_4)
{
 const char *VAR_5 = "shutdown";
 int VAR_6;

 if (VAR_3 == VAR_1)
  VAR_5 = "reboot";

 VAR_6 = FUNC_0("LoaderEntryRebootReason", VAR_5);
 if (VAR_6 || !VAR_4)
  return VAR_0;

 FUNC_0("LoaderEntryOneShot", (char *)VAR_4);

 return VAR_0;
}

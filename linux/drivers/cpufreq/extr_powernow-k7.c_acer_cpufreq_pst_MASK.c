
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {int ident; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(const struct dmi_system_id *VAR_0)
{
 FUNC_0("%s laptop with broken PST tables in BIOS detected\n",
  VAR_0->ident);
 FUNC_0("You need to downgrade to 3A21 (09/09/2002), or try a newer BIOS than 3A71 (01/20/2003)\n");
 FUNC_0("cpufreq scaling has been disabled as a result of this\n");
 return 0;
}

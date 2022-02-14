
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devinfo_dev {char* dd_name; char* dd_pnpinfo; char* dd_location; int dd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct devinfo_dev *VAR_3)
{

 FUNC_0("%s", VAR_3->dd_name[0] ? VAR_3->dd_name : "unknown");
 if (VAR_2 && *VAR_3->dd_pnpinfo)
  FUNC_0(" pnpinfo %s", VAR_3->dd_pnpinfo);
 if (VAR_2 && *VAR_3->dd_location)
  FUNC_0(" at %s", VAR_3->dd_location);
 if (!(VAR_3->dd_flags & VAR_0))
  FUNC_0(" (disabled)");
 else if (VAR_3->dd_flags & VAR_1)
  FUNC_0(" (suspended)");
}

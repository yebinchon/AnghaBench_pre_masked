
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct portal_group {int pg_discovery_filter; int pg_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int
FUNC_2(struct portal_group *VAR_5, const char *VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_6, "none") == 0) {
  VAR_7 = VAR_0;
 } else if (FUNC_1(VAR_6, "portal") == 0) {
  VAR_7 = VAR_1;
 } else if (FUNC_1(VAR_6, "portal-name") == 0) {
  VAR_7 = VAR_2;
 } else if (FUNC_1(VAR_6, "portal-name-auth") == 0) {
  VAR_7 = VAR_3;
 } else {
  FUNC_0("invalid discovery-filter \"%s\" for portal-group "
      "\"%s\"; valid values are \"none\", \"portal\", "
      "\"portal-name\", and \"portal-name-auth\"",
      VAR_6, VAR_5->pg_name);
  return (1);
 }

 if (VAR_5->pg_discovery_filter != VAR_4 &&
     VAR_5->pg_discovery_filter != VAR_7) {
  FUNC_0("cannot set discovery-filter to \"%s\" for "
      "portal-group \"%s\"; already has a different "
      "value", VAR_6, VAR_5->pg_name);
  return (1);
 }

 VAR_5->pg_discovery_filter = VAR_7;

 return (0);
}

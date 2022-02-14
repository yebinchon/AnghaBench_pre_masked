
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum date_mode_type { ____Placeholder_date_mode_type } date_mode_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;

__attribute__((used)) static enum date_mode_type FUNC_2(const char *VAR_10, const char **VAR_11)
{
 if (FUNC_1(VAR_10, "relative", VAR_11))
  return VAR_5;
 if (FUNC_1(VAR_10, "iso8601-strict", VAR_11) ||
     FUNC_1(VAR_10, "iso-strict", VAR_11))
  return VAR_2;
 if (FUNC_1(VAR_10, "iso8601", VAR_11) ||
     FUNC_1(VAR_10, "iso", VAR_11))
  return VAR_1;
 if (FUNC_1(VAR_10, "rfc2822", VAR_11) ||
     FUNC_1(VAR_10, "rfc", VAR_11))
  return VAR_6;
 if (FUNC_1(VAR_10, "short", VAR_11))
  return VAR_7;
 if (FUNC_1(VAR_10, "default", VAR_11))
  return VAR_3;
 if (FUNC_1(VAR_10, "human", VAR_11))
  return VAR_0;
 if (FUNC_1(VAR_10, "raw", VAR_11))
  return VAR_4;
 if (FUNC_1(VAR_10, "unix", VAR_11))
  return VAR_9;
 if (FUNC_1(VAR_10, "format", VAR_11))
  return VAR_8;





 FUNC_0("unknown date format %s", VAR_10);
}

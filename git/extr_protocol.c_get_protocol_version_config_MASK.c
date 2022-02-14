
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protocol_version { ____Placeholder_protocol_version } protocol_version ;


 int FUNC_0 (char*,char const*,...) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const**) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;

enum protocol_version FUNC_4(void)
{
 const char *VAR_2;
 enum protocol_version VAR_3 = VAR_1;
 const char *VAR_4 = "GIT_TEST_PROTOCOL_VERSION";
 const char *VAR_5 = FUNC_1(VAR_4);

 if (!FUNC_2("protocol.version", &VAR_2)) {
  enum protocol_version VAR_6 = FUNC_3(VAR_2);

  if (VAR_6 == VAR_0)
   FUNC_0("unknown value for config 'protocol.version': %s",
       VAR_2);

  VAR_3 = VAR_6;
 }

 if (VAR_5 && *VAR_5) {
  enum protocol_version VAR_7 = FUNC_3(VAR_5);

  if (VAR_7 == VAR_0)
   FUNC_0("unknown value for %s: %s", VAR_4, VAR_5);
  if (VAR_3 < VAR_7)
   VAR_3 = VAR_7;
 }

 return VAR_3;
}

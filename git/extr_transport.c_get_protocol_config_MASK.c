
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protocol_allow_config { ____Placeholder_protocol_allow_config } protocol_allow_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char*,char const*) ;

__attribute__((used)) static enum protocol_allow_config FUNC_5(const char *VAR_3)
{
 char *VAR_4 = FUNC_4("protocol.%s.allow", VAR_3);
 char *VAR_5;


 if (!FUNC_1(VAR_4, &VAR_5)) {
  enum protocol_allow_config VAR_6 =
   FUNC_2(VAR_4, VAR_5);
  FUNC_0(VAR_4);
  FUNC_0(VAR_5);
  return VAR_6;
 }
 FUNC_0(VAR_4);


 if (!FUNC_1("protocol.allow", &VAR_5)) {
  enum protocol_allow_config VAR_7 =
   FUNC_2("protocol.allow", VAR_5);
  FUNC_0(VAR_5);
  return VAR_7;
 }



 if (!FUNC_3(VAR_3, "http") ||
     !FUNC_3(VAR_3, "https") ||
     !FUNC_3(VAR_3, "git") ||
     !FUNC_3(VAR_3, "ssh") ||
     !FUNC_3(VAR_3, "file"))
  return VAR_0;


 if (!FUNC_3(VAR_3, "ext"))
  return VAR_1;


 return VAR_2;
}

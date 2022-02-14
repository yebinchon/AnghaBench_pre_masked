
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protocol_version { ____Placeholder_protocol_version } protocol_version ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char*,char const**) ;

enum protocol_version FUNC_3(const char *VAR_2)
{
 enum protocol_version VAR_3 = VAR_1;

 if (FUNC_2(VAR_2, "version ", &VAR_2)) {
  VAR_3 = FUNC_1(VAR_2);

  if (VAR_3 == VAR_0)
   FUNC_0("server is speaking an unknown protocol");
  if (VAR_3 == VAR_1)
   FUNC_0("protocol error: server explicitly said version 0");
 }

 return VAR_3;
}

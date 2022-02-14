
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;






 int FUNC_0 (char*,size_t,char*,char const*) ;

__attribute__((used)) static void
FUNC_1(u_int VAR_0, char *VAR_1,
    size_t VAR_2)
{
 const char *VAR_3;

 switch (VAR_0) {
 case 131:
  VAR_3 = "default";
  break;
 case 130:
  VAR_3 = "deferred";
  break;
 case 128:
  VAR_3 = "hybrid";
  break;
 case 129:
  VAR_3 = "direct";
  break;
 default:
  VAR_3 = "unknown";
  break;
 }
 FUNC_0(VAR_1, VAR_2, "%s", VAR_3);
}

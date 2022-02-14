
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (char const*,char*,size_t*,int ,int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_2, const char *VAR_3, char **VAR_4)
{
 const char *VAR_5;
 char *VAR_6;
 size_t VAR_7;

 switch (VAR_2) {
 case 129:
  VAR_5 = "net.inet.tcp.pcblist";
  break;
 case 128:
  VAR_5 = "net.inet.udp.pcblist";
  break;
 case 130:
  VAR_5 = "net.inet.divert.pcblist";
  break;
 default:
  VAR_5 = "net.inet.raw.pcblist";
  break;
 }
 if (FUNC_2(VAR_3, "sdp", 3) == 0)
  VAR_5 = "net.inet.sdp.pcblist";
 VAR_7 = 0;
 if (FUNC_3(VAR_5, 0, &VAR_7, 0, 0) < 0) {
  if (VAR_1 != VAR_0)
   FUNC_4("sysctl: %s", VAR_5);
  return (0);
 }
 if ((VAR_6 = FUNC_1(VAR_7)) == ((void*)0)) {
  FUNC_5("malloc %lu bytes", (u_long)VAR_7);
  return (0);
 }
 if (FUNC_3(VAR_5, VAR_6, &VAR_7, 0, 0) < 0) {
  FUNC_4("sysctl: %s", VAR_5);
  FUNC_0(VAR_6);
  return (0);
 }
 *VAR_4 = VAR_6;
 return (1);
}

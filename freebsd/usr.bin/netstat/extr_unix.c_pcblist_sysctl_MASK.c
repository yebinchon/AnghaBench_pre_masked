
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int mibvar ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int,char*,char*) ;
 char** VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*,size_t*,int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, char **VAR_4)
{
 char *VAR_5;
 size_t VAR_6;
 char VAR_7[sizeof "net.local.seqpacket.pcblist"];

 FUNC_2(VAR_7, sizeof(VAR_7), "net.local.%s.pcblist", VAR_2[VAR_3]);

 VAR_6 = 0;
 if (FUNC_3(VAR_7, 0, &VAR_6, 0, 0) < 0) {
  if (VAR_1 != VAR_0)
   FUNC_4("sysctl: %s", VAR_7);
  return (-1);
 }
 if ((VAR_5 = FUNC_1(VAR_6)) == ((void*)0)) {
  FUNC_5("malloc %lu bytes", (u_long)VAR_6);
  return (-2);
 }
 if (FUNC_3(VAR_7, VAR_5, &VAR_6, 0, 0) < 0) {
  FUNC_4("sysctl: %s", VAR_7);
  FUNC_0(VAR_5);
  return (-2);
 }
 *VAR_4 = VAR_5;
 return (0);
}

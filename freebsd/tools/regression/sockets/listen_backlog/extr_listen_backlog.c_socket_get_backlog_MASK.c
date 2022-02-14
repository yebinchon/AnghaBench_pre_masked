
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int i ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ,int*,int*) ;
 int FUNC_1 (char*,char const*,char const*,char const*) ;
 int FUNC_2 (char*,char const*,char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, int *VAR_3, const char *VAR_4,
    const char *VAR_5, const char *VAR_6)
{
 socklen_t VAR_7;
 int VAR_8;

 VAR_7 = sizeof(VAR_8);
 if (FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_8, &VAR_7) < 0) {
  FUNC_1("%s: %s: %s: socket_get_backlog: getsockopt("
      "SOL_SOCKET, SO_LISTENQLIMIT)", VAR_4, VAR_5,
      VAR_6);
  return (-1);
 }

 if (VAR_7 != sizeof(VAR_8)) {
  FUNC_2("%s: %s: %s: socket_get_backlog: getsockopt("
      "SOL_SOCKET, SO_LISTENQLIMIT): returned size %d",
      VAR_4, VAR_5, VAR_6, VAR_7);
  return (-1);
 }

 *VAR_3 = VAR_8;

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (int,int*,char const*,char const*,char*) ;
 int FUNC_4 (char*,char const*,char const*,...) ;
 int FUNC_5 (char*,char const*,char const*,int,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_0, int VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5, int *VAR_6,
    const char *VAR_7, const char *VAR_8, const char *VAR_9,
    const char *VAR_10)
{
 int VAR_11, VAR_12;

 VAR_12 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_12 < 0) {
  FUNC_4("%s: %s: socket_listen: socket(%s, %s)", VAR_9,
      VAR_10, VAR_7, VAR_8);
  FUNC_0(VAR_12);
  return (-1);
 }

 if (FUNC_3(VAR_12, &VAR_11, VAR_9, VAR_10,
     "socket_listen") < 0) {
  FUNC_0(VAR_12);
  return (-1);
 }

 if (VAR_11 != VAR_4) {
  FUNC_5("%s: %s: socket_listen: create backlog is %d not %d",
      VAR_9, VAR_10, VAR_11,
      VAR_4);
  FUNC_0(VAR_12);
  return (-1);
 }

 if (FUNC_1(VAR_12, VAR_3) < 0) {
  FUNC_4("%s: %s: socket_listen: listen(, %d)", VAR_9, VAR_10,
      VAR_3);
  FUNC_0(VAR_12);
  return (-1);
 }

 if (FUNC_3(VAR_12, &VAR_11, VAR_9, VAR_10,
     "socket_listen") < 0) {
  FUNC_0(VAR_12);
  return (-1);
 }

 if (VAR_11 != VAR_5) {
  FUNC_5("%s: %s: socket_listen: listen backlog is %d not %d",
      VAR_9, VAR_10, VAR_11,
      VAR_5);
  FUNC_0(VAR_12);
  return (-1);
 }

 *VAR_6 = VAR_12;
 return (0);
}

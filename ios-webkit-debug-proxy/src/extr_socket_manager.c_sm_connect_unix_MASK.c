
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int VAR_6 ;
 int FUNC_3 (int,int ,...) ;
 int FUNC_4 (int ,char*,char const*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;
 int VAR_7 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,char const*,int) ;

int FUNC_10(const char *VAR_8) {
  struct sockaddr_un VAR_9;
  int VAR_10 = -1;
  struct stat VAR_11;

  if (FUNC_7(VAR_8, &VAR_11) != 0 || !FUNC_0(VAR_11.st_mode)) {
    FUNC_4(VAR_7, "File '%s' is not a socket: %s\n", VAR_8,
        FUNC_8(VAR_6));
    return -1;
  }

  if ((VAR_10 = FUNC_6(VAR_4, VAR_5, 0)) < 0) {
    FUNC_5("create socket failed");
    return -1;
  }

  int VAR_12 = FUNC_3(VAR_10, VAR_1);
  if (FUNC_3(VAR_10, VAR_2, (VAR_12 | VAR_3)) < 0) {
    FUNC_5("failed to set socket to non-blocking");
    return -1;
  }

  VAR_9.sun_family = VAR_0;
  FUNC_9(VAR_9.sun_path, VAR_8, sizeof(VAR_9.sun_path) - 1);

  if (FUNC_2(VAR_10, (struct sockaddr*)&VAR_9, sizeof(VAR_9)) < 0) {
    FUNC_1(VAR_10);
    FUNC_5("connect failed");
    return -1;
  }

  return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
typedef int tv ;
typedef void* time_t ;
struct timeval {int tv_sec; void* tv_usec; } ;
struct stat {int st_mode; } ;
struct sockaddr_un {scalar_t__* sun_path; int sun_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int local ;
typedef struct sockaddr SOCKADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t FUNC_0 (struct sockaddr_un*) ;
 int FUNC_1 (int ) ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,size_t) ;
 int FUNC_6 (int,int ,...) ;
 int FUNC_7 (int ,char*,...) ;
 struct hostent* FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,int ,int*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int,int ,int ,char*,int) ;
 int FUNC_13 (int ,int ,int ) ;
 scalar_t__ FUNC_14 (char const*,struct stat*) ;
 int VAR_15 ;
 int FUNC_15 (scalar_t__*,char const*,int) ;

int FUNC_16(int VAR_16) {
  int VAR_17 = -1;
  const char *VAR_18 = VAR_13;
  struct stat VAR_19;
  if (FUNC_14(VAR_18, &VAR_19) ||
      !FUNC_1(VAR_19.st_mode) ||
      (VAR_17 = FUNC_13(VAR_8, VAR_10, 0)) < 0) {
    return -1;
  }

  struct sockaddr_un VAR_20;
  VAR_20.sun_family = VAR_1;
  FUNC_15(VAR_20.sun_path, VAR_18, sizeof(VAR_20.sun_path));
  VAR_20.sun_path[sizeof(VAR_20.sun_path) - 1] = 0;
  size_t VAR_21 = FUNC_0(&VAR_20);
  if (FUNC_5(VAR_17, (struct sockaddr *)&VAR_20, VAR_21) < 0) {
    FUNC_3(VAR_17);
    return -1;
  }

  if (VAR_16 < 0) {
    int VAR_22 = FUNC_6(VAR_17, VAR_3);
    if (!VAR_22 || FUNC_6(VAR_17, VAR_4, (VAR_22 | VAR_7)) < 0) {
      FUNC_11("Could not set socket to non-blocking");
    }
  }

  else {
    long VAR_23 = (VAR_16 > 0 ? VAR_16 : 5000);
    struct timeval VAR_24;
    VAR_24.tv_sec = (time_t) (VAR_23 / 1000);
    VAR_24.tv_usec = (time_t) ((VAR_23 - (VAR_24.tv_sec * 1000)) * 1000);
    if (FUNC_12(VAR_17, VAR_11, VAR_12, (char *)&VAR_24,
          sizeof(VAR_24))) {
      FUNC_11("Could not set socket receive timeout");
    }
  }
  return VAR_17;
}

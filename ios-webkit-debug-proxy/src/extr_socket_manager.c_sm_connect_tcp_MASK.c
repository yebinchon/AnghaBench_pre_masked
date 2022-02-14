
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hints ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (char**,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_7 (int,int ,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct addrinfo*) ;
 int FUNC_10 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_11 (int,int ,int*) ;
 int FUNC_12 (struct addrinfo*,int ,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_15 (int ,int ,int ) ;

int FUNC_16(const char *VAR_13, int VAR_14) {
  struct addrinfo VAR_15;
  FUNC_12(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.ai_family = VAR_7;
  VAR_15.ai_socktype = VAR_9;
  VAR_15.ai_protocol = VAR_5;
  struct addrinfo *VAR_16;
  char *VAR_17 = ((void*)0);
  if (FUNC_3(&VAR_17, "%d", VAR_14) < 0) {
    return -1;
  }
  int VAR_18 = FUNC_10(VAR_13, VAR_17, &VAR_15, &VAR_16);
  FUNC_8(VAR_17);
  if (VAR_18) {
    FUNC_13("Unknown host");
    return (VAR_18 < 0 ? VAR_18 : -1);
  }
  VAR_18 = -1;
  int VAR_19 = 0;
  struct addrinfo *VAR_20;
  for (VAR_20 = VAR_16; VAR_20; VAR_20 = VAR_20->ai_next) {
    if (VAR_19 > 0) {
      FUNC_4(VAR_19);
    }
    VAR_19 = FUNC_15(VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol);
    if (VAR_19 < 0) {
      continue;
    }

    int VAR_21 = FUNC_7(VAR_19, VAR_2);
    if (VAR_21 < 0 ||
        FUNC_7(VAR_19, VAR_3, (VAR_21 | VAR_6)) < 0 ||
        ((FUNC_6(VAR_19, VAR_20->ai_addr, VAR_20->ai_addrlen) < 0) ==
         (VAR_12 != VAR_0))) {
      continue;
    }

    struct timeval VAR_22;
    VAR_22.tv_sec = 0;
    VAR_22.tv_usec= 500*1000;
    fd_set VAR_23;
    FUNC_1(&VAR_23);
    FUNC_0(VAR_19, &VAR_23);
    if (FUNC_7(VAR_19, VAR_3, VAR_21) < 0) {
      continue;
    }
    int VAR_24 = FUNC_14(VAR_19 + 1, &VAR_23, ((void*)0), ((void*)0), &VAR_22);
    if (VAR_24) {
      continue;
    }

    if (FUNC_7(VAR_19, VAR_3, (VAR_21 | VAR_6)) < 0) {
      continue;
    }

    VAR_18 = VAR_19;
    break;
  }





  if (VAR_19 > 0 && VAR_18 <= 0) {
    FUNC_4(VAR_19);
  }

  FUNC_9(VAR_16);
  return VAR_18;
}

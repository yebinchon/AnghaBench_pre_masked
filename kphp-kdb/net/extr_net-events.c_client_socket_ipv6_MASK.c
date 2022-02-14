
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; int sin6_port; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int flags ;
typedef int addr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 int FUNC_6 (struct sockaddr_in6*,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int ,int ,int*,int) ;
 scalar_t__ VAR_10 ;

int FUNC_10 (const unsigned char VAR_11[16], int VAR_12, int VAR_13) {
  int VAR_14;
  struct sockaddr_in6 VAR_15;
  int VAR_16 = 1;

  if (!(VAR_13 & VAR_3)) {
    return -1;
  }

  if ((VAR_14 = FUNC_7 (VAR_13, 1)) == -1) {
    return -1;
  }

  if (VAR_13 & VAR_4) {
    FUNC_4 (VAR_14, 0);
    FUNC_3 (VAR_14, 0);
  } else {
    FUNC_9 (VAR_14, VAR_5, VAR_7, &VAR_16, sizeof (VAR_16));
    if (VAR_10) {
      FUNC_4 (VAR_14, 0);
      FUNC_3 (VAR_14, 0);
    }
    FUNC_9 (VAR_14, VAR_5, VAR_6, &VAR_16, sizeof (VAR_16));
    FUNC_9 (VAR_14, VAR_2, VAR_8, &VAR_16, sizeof (VAR_16));
  }

  FUNC_6 (&VAR_15, 0, sizeof (VAR_15));

  VAR_15.sin6_family = VAR_0;
  VAR_15.sin6_port = FUNC_2 (VAR_12);
  FUNC_5 (&VAR_15.sin6_addr, VAR_11, 16);

  if (FUNC_1 (VAR_14, (struct sockaddr *) &VAR_15, sizeof (VAR_15)) == -1 && VAR_9 != VAR_1) {
    FUNC_8 ("connect()");
    FUNC_0 (VAR_14);
    return -1;
  }

  return VAR_14;

}

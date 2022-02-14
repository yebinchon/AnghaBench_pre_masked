
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int in_addr_t ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct sockaddr_in*,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,int ,int ,int*,int) ;
 scalar_t__ VAR_12 ;

int FUNC_9 (in_addr_t VAR_13, int VAR_14, int VAR_15) {
  int VAR_16;
  struct sockaddr_in VAR_17;
  int VAR_18 = 1;

  if (VAR_15 & VAR_4) {
    return -1;
  }

  if ((VAR_16 = FUNC_6 (VAR_15, 1)) == -1) {
    return -1;
  }

  if (VAR_15 & VAR_5) {
    FUNC_4 (VAR_16, 0);
    FUNC_3 (VAR_16, 0);
    FUNC_8 (VAR_16, VAR_6, VAR_3, &VAR_18, sizeof (VAR_18));
  } else {
    FUNC_8 (VAR_16, VAR_7, VAR_9, &VAR_18, sizeof (VAR_18));
    if (VAR_12) {
      FUNC_4 (VAR_16, 0);
      FUNC_3 (VAR_16, 0);
    }
    FUNC_8 (VAR_16, VAR_7, VAR_8, &VAR_18, sizeof (VAR_18));
    FUNC_8 (VAR_16, VAR_2, VAR_10, &VAR_18, sizeof (VAR_18));
  }

  FUNC_5 (&VAR_17, 0, sizeof (VAR_17));

  VAR_17.sin_family = VAR_0;
  VAR_17.sin_port = FUNC_2 (VAR_14);
  VAR_17.sin_addr.s_addr = VAR_13;

  if (FUNC_1 (VAR_16, (struct sockaddr *) &VAR_17, sizeof (VAR_17)) == -1 && VAR_11 != VAR_1) {
    FUNC_7 ("connect()");
    FUNC_0 (VAR_16);
    return -1;
  }

  return VAR_16;

}

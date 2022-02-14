
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int fd; int events; } ;
typedef int flags ;
typedef int addr ;


 int FUNC_0 (int (*) (unsigned int,int,double)) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int (*) (unsigned int,int,double)) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int (*) (unsigned int,int,double)) ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (double) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct pollfd*,int,int) ;
 int FUNC_10 (int,int ,int ,int*,int) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12 (unsigned VAR_12, int VAR_13, double VAR_14) {
  FUNC_0 (FUNC_12);
  FUNC_2 (FUNC_12);
  int VAR_15;
  if ((VAR_15 = FUNC_11 (VAR_0, VAR_6, 0)) == -1) {
    FUNC_1 (FUNC_12);
    return -1;
  }
  int VAR_16 = 1;
  FUNC_10 (VAR_15, VAR_7, VAR_9, &VAR_16, sizeof (VAR_16));
  FUNC_10 (VAR_15, VAR_7, VAR_8, &VAR_16, sizeof (VAR_16));
  FUNC_10 (VAR_15, VAR_3, VAR_10, &VAR_16, sizeof (VAR_16));
  struct sockaddr_in VAR_17;

  VAR_17.sin_family = VAR_0;
  VAR_17.sin_port = FUNC_8(VAR_13);
  VAR_17.sin_addr.s_addr = FUNC_7 (VAR_12);

  FUNC_5 (VAR_15, VAR_2, VAR_4);
  if (FUNC_4 (VAR_15, (struct sockaddr *) &VAR_17, sizeof (VAR_17)) == -1) {
    if (VAR_11 != VAR_1) {
      FUNC_1 (FUNC_12);
      FUNC_3 (VAR_15);
      return -1;
    }
  }

  struct pollfd VAR_18;
  VAR_18.fd = VAR_15;
  VAR_18.events = VAR_5;

  int VAR_19 = FUNC_6 (VAR_14);

  if (FUNC_9 (&VAR_18, 1, VAR_19) <= 0) {
    FUNC_3 (VAR_15);
    FUNC_1 (FUNC_12);
    return -1;
  }


  FUNC_1 (FUNC_12);
  return VAR_15;
}

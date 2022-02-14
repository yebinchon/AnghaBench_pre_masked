
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int ra ;
typedef int local ;
typedef struct sockaddr SOCKADDR ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char*,int) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int ,char*) ;
 scalar_t__ FUNC_8 (int,int ,int*) ;
 scalar_t__ FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int,int ,int ,char*,int) ;
 int FUNC_11 (void*,int ,int ) ;
 int VAR_10 ;

int FUNC_12(int VAR_11) {
  int VAR_12 = FUNC_11(VAR_0, VAR_7, VAR_5);
  if (VAR_12 < 0) {
    return -1;
  }
  int VAR_13 = FUNC_4(VAR_12, VAR_2);
  struct sockaddr_in VAR_14;
  VAR_14.sin_family = VAR_0;
  VAR_14.sin_addr.s_addr = VAR_3;
  VAR_14.sin_port = FUNC_6(VAR_11);
  int VAR_15 = 1;
  int VAR_16 = 1;
  if (FUNC_10(VAR_12, VAR_8, VAR_9, (char *)&VAR_15,sizeof(VAR_15)) < 0 ||
      VAR_13 < 0 ||
      FUNC_7(VAR_12, VAR_1, (char *)&VAR_16) < 0 ||
      FUNC_1(VAR_12, (struct sockaddr*)&VAR_14, sizeof(VAR_14)) < 0 ||
      FUNC_9(VAR_12, 5)) {
    FUNC_2(VAR_12);
    return -1;
  }

  return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_in*,int ,int) ;
 int FUNC_2 (int ,char const*,int *) ;

int FUNC_3(const char* VAR_1, int VAR_2, struct sockaddr_in* VAR_3) {
  FUNC_1(VAR_3, 0, sizeof(*VAR_3));
  VAR_3->sin_family = VAR_0;
  VAR_3->sin_port = FUNC_0(VAR_2);



  return FUNC_2(VAR_0, VAR_1, &(VAR_3->sin_addr.s_addr));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct libalias {int sockCount; } ;
typedef int sock_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libalias*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static u_short
FUNC_6(struct libalias *VAR_7, u_short VAR_8, int *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;
 struct sockaddr_in VAR_13;

 FUNC_0(VAR_7);
 if (VAR_10 == VAR_2)
  VAR_12 = FUNC_5(VAR_0, VAR_5, 0);
 else if (VAR_10 == VAR_3)
  VAR_12 = FUNC_5(VAR_0, VAR_4, 0);
 else {




  return (0);
 }

 if (VAR_12 < 0) {




  return (0);
 }
 VAR_13.sin_family = VAR_0;
 VAR_13.sin_addr.s_addr = FUNC_4(VAR_1);
 VAR_13.sin_port = VAR_8;

 VAR_11 = FUNC_1(VAR_12,
     (struct sockaddr *)&VAR_13,
     sizeof(VAR_13));
 if (VAR_11 == 0) {
  VAR_7->sockCount++;
  *VAR_9 = VAR_12;
  return (1);
 } else {
  FUNC_2(VAR_12);
  return (0);
 }
}

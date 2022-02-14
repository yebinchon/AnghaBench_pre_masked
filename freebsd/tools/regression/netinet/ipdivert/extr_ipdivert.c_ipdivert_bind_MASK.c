
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int VAR_2 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3, int VAR_4, u_short VAR_5, int VAR_6)
{
 struct sockaddr_in VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_7.sin_family = VAR_0;
 VAR_7.sin_addr.s_addr = FUNC_4(VAR_1);
 VAR_7.sin_port = FUNC_5(VAR_5);

 VAR_8 = FUNC_0(VAR_4, (struct sockaddr *)&VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0) {
  if (VAR_6 == 0)
   FUNC_2(VAR_3, "bind");
  if (VAR_2 != VAR_6)
   FUNC_2(VAR_3, "bind");
 } else {
  if (VAR_6 != 0)
   FUNC_3(VAR_3, "bind");
 }
}

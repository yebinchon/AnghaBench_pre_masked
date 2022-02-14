
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int server ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct sockaddr_in VAR_6;


 VAR_4 = FUNC_5(VAR_0, VAR_2, 0);
 if (VAR_4 < 0) {
  FUNC_3("socket");
  FUNC_1(1);
 }
 VAR_6.sin_family = VAR_0;
 VAR_6.sin_port = FUNC_2(VAR_3);
 VAR_6.sin_addr.s_addr = VAR_1;
 if (FUNC_0(VAR_4, (struct sockaddr *) & VAR_6, sizeof(VAR_6)) < 0) {
  FUNC_3("bind socket");
  FUNC_1(1);
 }
        if (VAR_5) FUNC_4("simple_httpd:%d\n",VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
 socklen_t VAR_3;

 VAR_3 = sizeof(struct sockaddr_in);

 VAR_0 = FUNC_0(VAR_1, (struct sockaddr *) & VAR_2, &VAR_3);
 if (VAR_0 <= 0) {
  FUNC_2("accept");
  FUNC_1(1);
 }
}

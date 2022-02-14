
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ (* socket_fun ) (int,struct sockaddr const*,int) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(socket_fun VAR_3, int VAR_4, const struct sockaddr_in *VAR_5)
{

 FUNC_0((VAR_4 = FUNC_2(VAR_0, VAR_2, 0)) >= 0);
 FUNC_1(VAR_1,
     VAR_3(VAR_4, (const struct sockaddr *)(VAR_5),
         sizeof(struct sockaddr_in)) < 0);
}

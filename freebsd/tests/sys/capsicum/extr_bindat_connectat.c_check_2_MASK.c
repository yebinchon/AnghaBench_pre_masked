
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ (* socket_fun ) (int,struct sockaddr const*,int) ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(socket_fun VAR_1, int VAR_2, const struct sockaddr_in *VAR_3)
{

 FUNC_0(VAR_0,
     VAR_1(VAR_2, (const struct sockaddr *)VAR_3,
         sizeof(struct sockaddr_in)) < 0);
}

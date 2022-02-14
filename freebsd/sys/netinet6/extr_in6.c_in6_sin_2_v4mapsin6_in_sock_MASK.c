
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,int ) ;
 int FUNC_1 (struct sockaddr_in*,struct sockaddr_in6*) ;
 struct sockaddr_in6* FUNC_2 (int,int ,int ) ;

void
FUNC_3(struct sockaddr **VAR_2)
{
 struct sockaddr_in *VAR_3;
 struct sockaddr_in6 *VAR_4;

 VAR_4 = FUNC_2(sizeof *VAR_4, VAR_0, VAR_1);
 VAR_3 = (struct sockaddr_in *)*VAR_2;
 FUNC_1(VAR_3, VAR_4);
 FUNC_0(*VAR_2, VAR_0);
 *VAR_2 = (struct sockaddr *)VAR_4;
}

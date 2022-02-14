
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct sockaddr_in {int sin_len; int sin_port; struct in_addr sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sockaddr_in* FUNC_0 (int,int ,int) ;

__attribute__((used)) static struct sockaddr *
FUNC_1(in_port_t VAR_4, struct in_addr *VAR_5)
{
 struct sockaddr_in *VAR_6;

 VAR_6 = FUNC_0(sizeof *VAR_6, VAR_1,
  VAR_2 | VAR_3);
 VAR_6->sin_family = VAR_0;
 VAR_6->sin_len = sizeof(*VAR_6);
 VAR_6->sin_addr = *VAR_5;
 VAR_6->sin_port = VAR_4;

 return (struct sockaddr *)VAR_6;
}

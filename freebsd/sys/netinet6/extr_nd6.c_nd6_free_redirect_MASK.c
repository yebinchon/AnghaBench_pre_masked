
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rt_addrinfo {int rti_filter; struct sockaddr** rti_info; } ;
struct llentry {int dummy; } ;
typedef int info ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct llentry const*,struct sockaddr*) ;
 int FUNC_1 (struct rt_addrinfo*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct rt_addrinfo*,int *,int) ;

__attribute__((used)) static void
FUNC_3(const struct llentry *VAR_4)
{
 int VAR_5;
 struct sockaddr_in6 VAR_6;
 struct rt_addrinfo VAR_7;

 FUNC_0(VAR_4, (struct sockaddr *)&VAR_6);
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.rti_info[VAR_0] = (struct sockaddr *)&VAR_6;
 VAR_7.rti_filter = VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_2(VAR_1, &VAR_7, ((void*)0), VAR_5);
}

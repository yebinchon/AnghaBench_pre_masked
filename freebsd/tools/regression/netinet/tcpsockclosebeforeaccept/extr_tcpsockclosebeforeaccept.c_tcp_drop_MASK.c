
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int dummy; } ;
typedef int addrs ;


 int FUNC_0 (struct sockaddr_in*,struct sockaddr_storage*,int) ;
 int FUNC_1 (char*,int *,int ,struct sockaddr_storage*,int) ;

__attribute__((used)) static int
FUNC_2(struct sockaddr_in *VAR_0, struct sockaddr_in *VAR_1)
{
 struct sockaddr_storage VAR_2[2];






 FUNC_0(VAR_1, &VAR_2[0], sizeof(*VAR_1));
 FUNC_0(VAR_0, &VAR_2[1], sizeof(*VAR_0));

 return (FUNC_1("net.inet.tcp.drop", ((void*)0), 0, VAR_2,
     sizeof(VAR_2)));
}

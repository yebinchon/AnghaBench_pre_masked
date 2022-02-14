
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct net_device {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*,struct sockaddr*,int *) ;
 int FUNC_3 (struct net_device*,struct sockaddr*) ;
 int FUNC_4 (struct sockaddr*,union ib_gid const*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, const union ib_gid *VAR_2, bool VAR_3)
{
 int VAR_4;

 if (VAR_1) {
  union {
   struct sockaddr sock;
   struct sockaddr_storage storage;
  } VAR_5;

  FUNC_4(&VAR_5.sock, VAR_2);

  FUNC_1(VAR_1->if_vnet);
  if (VAR_3)
   VAR_4 = -FUNC_2(VAR_1, &VAR_5.sock, ((void*)0));
  else
   VAR_4 = -FUNC_3(VAR_1, &VAR_5.sock);
  FUNC_0();
 } else {
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}

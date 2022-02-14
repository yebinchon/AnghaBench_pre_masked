
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct sockaddr {int dummy; } ;
struct net_device {int dummy; } ;
struct ib_gid_attr {struct net_device* ndev; } ;
struct ib_device {int dummy; } ;
typedef int gid_attr ;
typedef enum gid_op_type { ____Placeholder_gid_op_type } gid_op_type ;


 int FUNC_0 (struct ib_gid_attr*,int ,int) ;
 int FUNC_1 (struct sockaddr*,union ib_gid*) ;
 int FUNC_2 (int,struct ib_device*,int ,union ib_gid*,struct ib_gid_attr*) ;

__attribute__((used)) static void FUNC_3(enum gid_op_type VAR_0,
     struct ib_device *VAR_1,
     u8 VAR_2, struct net_device *VAR_3,
     struct sockaddr *VAR_4)
{
 union ib_gid VAR_5;
 struct ib_gid_attr VAR_6;

 FUNC_1(VAR_4, &VAR_5);
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ndev = VAR_3;

 FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_5, &VAR_6);
}

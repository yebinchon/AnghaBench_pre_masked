
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int FUNC_0 (struct ib_device*,union ib_gid const*,int,struct net_device*,int *,int *) ;

int FUNC_1(struct ib_device *VAR_0,
         const union ib_gid *VAR_1,
         enum ib_gid_type VAR_2,
         struct net_device *VAR_3,
         u8 *VAR_4,
         u16 *VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}

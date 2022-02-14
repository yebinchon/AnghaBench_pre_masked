
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int (* query_gid ) (struct ib_device*,int ,int,union ib_gid*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int,union ib_gid*,struct ib_gid_attr*) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct ib_device*,int ,int,union ib_gid*) ;

int FUNC_3(struct ib_device *VAR_1,
   u8 VAR_2, int VAR_3, union ib_gid *VAR_4,
   struct ib_gid_attr *VAR_5)
{
 if (FUNC_1(VAR_1, VAR_2))
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_5)
  return -VAR_0;

 return VAR_1->query_gid(VAR_1, VAR_2, VAR_3, VAR_4);
}

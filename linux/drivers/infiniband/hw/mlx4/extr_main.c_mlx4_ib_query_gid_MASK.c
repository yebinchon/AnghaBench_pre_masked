
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int ,int,union ib_gid*,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_0, u8 VAR_1, int VAR_2,
        union ib_gid *VAR_3)
{
 if (FUNC_1(VAR_0, VAR_1))
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 return 0;
}

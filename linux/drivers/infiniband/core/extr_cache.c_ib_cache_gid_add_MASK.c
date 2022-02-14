
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct ib_device*,int ,union ib_gid*,struct ib_gid_attr*,unsigned long,int) ;

int FUNC_1(struct ib_device *VAR_3, u8 VAR_4,
       union ib_gid *VAR_5, struct ib_gid_attr *VAR_6)
{
 unsigned long VAR_7 = VAR_0 |
        VAR_1 |
        VAR_2;

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, 0);
}

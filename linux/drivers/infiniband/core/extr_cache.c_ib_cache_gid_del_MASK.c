
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
 unsigned long VAR_3 ;
 int FUNC_0 (struct ib_device*,int ,union ib_gid*,struct ib_gid_attr*,unsigned long,int) ;

int FUNC_1(struct ib_device *VAR_4, u8 VAR_5,
       union ib_gid *VAR_6, struct ib_gid_attr *VAR_7)
{
 unsigned long VAR_8 = VAR_1 |
        VAR_2 |
        VAR_0 |
        VAR_3;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct sa_path_rec {int rec_type; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (union ib_gid*) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_2, u8 VAR_3,
     struct sa_path_rec *VAR_4, union ib_gid *VAR_5)
{
 if (FUNC_0(VAR_5) && FUNC_1(VAR_2, VAR_3))
  VAR_4->rec_type = VAR_1;
 else
  VAR_4->rec_type = VAR_0;
}

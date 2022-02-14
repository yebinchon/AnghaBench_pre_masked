
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ib_device {TYPE_1__* port_immutable; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_2__ {int gid_tbl_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,union ib_gid*,int,int,struct net_device*,int*) ;
 int FUNC_1 (struct ib_device*,int,int,union ib_gid*,int *) ;
 int FUNC_2 (union ib_gid*,union ib_gid*,int) ;
 scalar_t__ FUNC_3 (struct ib_device*,int) ;
 int FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct ib_device*) ;

int FUNC_6(struct ib_device *VAR_2, union ib_gid *VAR_3,
  enum ib_gid_type VAR_4, struct net_device *VAR_5,
  u8 *VAR_6, u16 *VAR_7)
{
 union ib_gid VAR_8;
 int VAR_9, VAR_10, VAR_11;

 for (VAR_10 = FUNC_5(VAR_2); VAR_10 <= FUNC_4(VAR_2); ++VAR_10) {
  if (FUNC_3(VAR_2, VAR_10)) {
   if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_10,
       VAR_5, VAR_7)) {
    *VAR_6 = VAR_10;
    return 0;
   }
  }

  if (VAR_4 != VAR_1)
   continue;

  for (VAR_11 = 0; VAR_11 < VAR_2->port_immutable[VAR_10].gid_tbl_len; ++VAR_11) {
   VAR_9 = FUNC_1(VAR_2, VAR_10, VAR_11, &VAR_8, ((void*)0));
   if (VAR_9)
    return VAR_9;
   if (!FUNC_2(&VAR_8, VAR_3, sizeof *VAR_3)) {
    *VAR_6 = VAR_10;
    if (VAR_7)
     *VAR_7 = VAR_11;
    return 0;
   }
  }
 }

 return -VAR_0;
}

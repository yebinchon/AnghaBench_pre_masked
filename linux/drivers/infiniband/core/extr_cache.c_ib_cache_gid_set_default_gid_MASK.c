
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_gid_attr {unsigned int gid_type; struct net_device* ndev; } ;
struct ib_device {int dummy; } ;
typedef int gid_attr ;
typedef enum ib_cache_gid_default_mode { ____Placeholder_ib_cache_gid_default_mode } ib_cache_gid_default_mode ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct ib_device*,int ,union ib_gid*,struct ib_gid_attr*,unsigned long,int) ;
 int FUNC_1 (struct ib_device*,int ,union ib_gid*,struct ib_gid_attr*,unsigned long,int) ;
 int FUNC_2 (struct net_device*,union ib_gid*) ;
 int FUNC_3 (struct ib_gid_attr*,int ,int) ;

void FUNC_4(struct ib_device *VAR_6, u8 VAR_7,
      struct net_device *VAR_8,
      unsigned long VAR_9,
      enum ib_cache_gid_default_mode VAR_10)
{
 union ib_gid VAR_11 = { };
 struct ib_gid_attr VAR_12;
 unsigned int VAR_13;
 unsigned long VAR_14;

 VAR_14 = VAR_1 |
        VAR_0 |
        VAR_2;
 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.ndev = VAR_8;

 for (VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13) {
  if (1UL << VAR_13 & ~VAR_9)
   continue;

  VAR_12.gid_type = VAR_13;

  if (VAR_10 == VAR_4) {
   FUNC_2(VAR_8, &VAR_11);
   FUNC_0(VAR_6, VAR_7, &VAR_11,
        &VAR_12, VAR_14, 1);
  } else if (VAR_10 == VAR_3) {
   FUNC_1(VAR_6, VAR_7, &VAR_11,
       &VAR_12, VAR_14, 1);
  }
 }
}

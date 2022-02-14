
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef size_t u8 ;
struct ib_gid_table {int rwlock; } ;
struct ib_gid_attr {int dummy; } ;
struct TYPE_2__ {struct ib_gid_table** gid_cache; } ;
struct ib_device {TYPE_1__ cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,size_t,int,union ib_gid*,struct ib_gid_attr*) ;
 size_t FUNC_1 (struct ib_device*) ;
 size_t FUNC_2 (struct ib_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ib_device *VAR_1,
        u8 VAR_2,
        int VAR_3,
        union ib_gid *VAR_4,
        struct ib_gid_attr *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 struct ib_gid_table **VAR_8 = VAR_1->cache.gid_cache;
 struct ib_gid_table *VAR_9 = VAR_8[VAR_2 - FUNC_2(VAR_1)];

 if (VAR_2 < FUNC_2(VAR_1) || VAR_2 > FUNC_1(VAR_1))
  return -VAR_0;

 FUNC_3(&VAR_9->rwlock, VAR_7);
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_4(&VAR_9->rwlock, VAR_7);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_gid_table {int sz; int rwlock; TYPE_2__** data_vec; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int gid; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (union ib_gid*,int *,int) ;
 struct ib_gid_table* FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (struct ib_device*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct ib_device *VAR_1, u8 VAR_2,
     int VAR_3, union ib_gid *VAR_4)
{
 struct ib_gid_table *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;

 if (!FUNC_3(VAR_1, VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 FUNC_4(&VAR_5->rwlock, VAR_6);

 if (VAR_3 < 0 || VAR_3 >= VAR_5->sz ||
     !FUNC_0(VAR_5->data_vec[VAR_3]))
  goto done;

 FUNC_1(VAR_4, &VAR_5->data_vec[VAR_3]->attr.gid, sizeof(*VAR_4));
 VAR_7 = 0;

done:
 FUNC_5(&VAR_5->rwlock, VAR_6);
 return VAR_7;
}

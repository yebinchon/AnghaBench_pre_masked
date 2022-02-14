
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_gid_table {int sz; int rwlock; TYPE_1__* data_vec; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int props; int gid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_gid_table*,int,int) ;
 int FUNC_1 (struct ib_device*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct ib_device *VAR_2, u8 VAR_3,
       struct ib_gid_table *VAR_4)
{
 int VAR_5;
 bool VAR_6 = 0;

 if (!VAR_4)
  return;

 FUNC_3(&VAR_4->rwlock);
 for (VAR_5 = 0; VAR_5 < VAR_4->sz; ++VAR_5) {
  if (FUNC_2(&VAR_4->data_vec[VAR_5].gid, &VAR_1,
      sizeof(VAR_4->data_vec[VAR_5].gid)))
   if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_4->data_vec[VAR_5].props &
         VAR_0))
    VAR_6 = 1;
 }
 FUNC_4(&VAR_4->rwlock);

 if (VAR_6)
  FUNC_1(VAR_2, VAR_3);
}

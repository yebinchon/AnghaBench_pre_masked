
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_gid_table {int sz; int lock; int * data_vec; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int ,struct ib_gid_table*,int) ;
 int FUNC_1 (struct ib_device*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ib_device *VAR_0, u8 VAR_1,
       struct ib_gid_table *VAR_2)
{
 int VAR_3;
 bool VAR_4 = 0;

 if (!VAR_2)
  return;

 FUNC_3(&VAR_2->lock);
 for (VAR_3 = 0; VAR_3 < VAR_2->sz; ++VAR_3) {
  if (FUNC_2(VAR_2->data_vec[VAR_3])) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
   VAR_4 = 1;
  }
 }
 FUNC_4(&VAR_2->lock);

 if (VAR_4)
  FUNC_1(VAR_0, VAR_1);
}

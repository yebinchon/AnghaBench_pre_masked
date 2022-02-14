
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int queue; } ;
struct dm_table {int dummy; } ;


 int FUNC_0 (struct mapped_device*) ;
 scalar_t__ FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dm_table*) ;
 int FUNC_4 (struct mapped_device*) ;

__attribute__((used)) static int FUNC_5(struct mapped_device *VAR_0, struct dm_table *VAR_1)
{
 if (VAR_1) {
  int VAR_2 = FUNC_3(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_0(VAR_0);






 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0->queue);

 FUNC_4(VAR_0);

 return 0;
}

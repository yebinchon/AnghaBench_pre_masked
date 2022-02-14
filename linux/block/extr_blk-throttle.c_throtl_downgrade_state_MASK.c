
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_data {int scale; int throtl_slice; int limit_index; void* low_downgrade_time; void* low_upgrade_time; int service_queue; } ;


 void* VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(struct throtl_data *VAR_1, int VAR_2)
{
 VAR_1->scale /= 2;

 FUNC_0(&VAR_1->service_queue, "downgrade, scale %d", VAR_1->scale);
 if (VAR_1->scale) {
  VAR_1->low_upgrade_time = VAR_0 - VAR_1->scale * VAR_1->throtl_slice;
  return;
 }

 VAR_1->limit_index = VAR_2;
 VAR_1->low_downgrade_time = VAR_0;
}

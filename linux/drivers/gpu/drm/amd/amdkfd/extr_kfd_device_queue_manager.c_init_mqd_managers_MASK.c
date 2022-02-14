
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mqd_manager {int dummy; } ;
struct TYPE_2__ {struct mqd_manager* (* mqd_manager_init ) (int,int ) ;} ;
struct device_queue_manager {struct mqd_manager** mqd_mgrs; int dev; TYPE_1__ asic_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mqd_manager*) ;
 int FUNC_1 (char*,int) ;
 struct mqd_manager* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct device_queue_manager *VAR_2)
{
 int VAR_3, VAR_4;
 struct mqd_manager *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_5 = VAR_2->asic_ops.mqd_manager_init(VAR_3, VAR_2->dev);
  if (!VAR_5) {
   FUNC_1("mqd manager [%d] initialization failed\n", VAR_3);
   goto out_free;
  }
  VAR_2->mqd_mgrs[VAR_3] = VAR_5;
 }

 return 0;

out_free:
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(VAR_2->mqd_mgrs[VAR_4]);
  VAR_2->mqd_mgrs[VAR_4] = ((void*)0);
 }

 return -VAR_0;
}

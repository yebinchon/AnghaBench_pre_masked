
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_queue_manager {int packets; int fence_mem; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_queue_manager*) ;
 int FUNC_1 (struct device_queue_manager*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device_queue_manager*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device_queue_manager *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_4(VAR_1, VAR_0, 0);
 FUNC_1(VAR_1);

 FUNC_2(VAR_1->dev, VAR_1->fence_mem);
 FUNC_3(&VAR_1->packets);

 return 0;
}

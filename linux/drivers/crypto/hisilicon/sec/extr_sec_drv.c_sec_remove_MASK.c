
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_dev_info {int * queues; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct sec_dev_info* FUNC_0 (struct platform_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sec_dev_info*) ;
 int FUNC_3 (struct sec_dev_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sec_dev_info*,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct sec_dev_info *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;


 FUNC_3(VAR_2);

 FUNC_1();

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_4(&VAR_2->queues[VAR_3]);
  FUNC_5(VAR_2, &VAR_2->queues[VAR_3]);
 }

 FUNC_2(VAR_2);

 return 0;
}

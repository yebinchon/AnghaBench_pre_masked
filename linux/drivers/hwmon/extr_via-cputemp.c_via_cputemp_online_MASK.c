
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pdev_entry {unsigned int cpu; int list; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pdev_entry*) ;
 struct pdev_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct platform_device*) ;
 struct platform_device* FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_5)
{
 int VAR_6;
 struct platform_device *VAR_7;
 struct pdev_entry *VAR_8;

 VAR_7 = FUNC_6(VAR_0, VAR_5);
 if (!VAR_7) {
  VAR_6 = -VAR_1;
  FUNC_8("Device allocation failed\n");
  goto exit;
 }

 VAR_8 = FUNC_1(sizeof(struct pdev_entry), VAR_2);
 if (!VAR_8) {
  VAR_6 = -VAR_1;
  goto exit_device_put;
 }

 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6) {
  FUNC_8("Device addition failed (%d)\n", VAR_6);
  goto exit_device_free;
 }

 VAR_8->pdev = VAR_7;
 VAR_8->cpu = VAR_5;
 FUNC_3(&VAR_4);
 FUNC_2(&VAR_8->list, &VAR_3);
 FUNC_4(&VAR_4);

 return 0;

exit_device_free:
 FUNC_0(VAR_8);
exit_device_put:
 FUNC_7(VAR_7);
exit:
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mbox_test_device {int root_debugfs_dir; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,int ,struct mbox_test_device*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3,
     struct mbox_test_device *VAR_4)
{
 if (!FUNC_2())
  return 0;

 VAR_4->root_debugfs_dir = FUNC_0(FUNC_4(&VAR_3->dev), ((void*)0));
 if (!VAR_4->root_debugfs_dir) {
  FUNC_3(&VAR_3->dev, "Failed to create Mailbox debugfs\n");
  return -VAR_0;
 }

 FUNC_1("message", 0600, VAR_4->root_debugfs_dir,
       VAR_4, &VAR_1);

 FUNC_1("signal", 0200, VAR_4->root_debugfs_dir,
       VAR_4, &VAR_2);

 return 0;
}

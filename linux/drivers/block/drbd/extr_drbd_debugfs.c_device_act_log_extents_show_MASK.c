
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct drbd_device* private; } ;
struct drbd_device {int act_log; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drbd_device*,int ) ;
 int FUNC_1 (struct seq_file*,int ,char*,int *) ;
 int FUNC_2 (struct seq_file*,int ) ;
 int FUNC_3 (struct drbd_device*) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct drbd_device *VAR_3 = VAR_1->private;


 FUNC_4(VAR_1, "v: %u\n\n", 0);

 if (FUNC_0(VAR_3, VAR_0)) {
  FUNC_2(VAR_1, VAR_3->act_log);
  FUNC_1(VAR_1, VAR_3->act_log, "", ((void*)0));
  FUNC_3(VAR_3);
 }
 return 0;
}

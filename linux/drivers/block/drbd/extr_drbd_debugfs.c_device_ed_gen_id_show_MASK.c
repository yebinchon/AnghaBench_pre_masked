
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct drbd_device* private; } ;
struct drbd_device {scalar_t__ ed_uuid; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned long long) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct drbd_device *VAR_2 = VAR_0->private;
 FUNC_0(VAR_0, "0x%016llX\n", (unsigned long long)VAR_2->ed_uuid);
 return 0;
}

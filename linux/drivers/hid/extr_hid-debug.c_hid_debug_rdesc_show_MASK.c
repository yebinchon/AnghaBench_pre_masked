
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hid_device* private; } ;
struct hid_device {unsigned int rsize; unsigned int dev_rsize; int driver_input_lock; int * dev_rdesc; int * rdesc; } ;
typedef int __u8 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct hid_device*,struct seq_file*) ;
 int FUNC_2 (struct hid_device*,struct seq_file*) ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct hid_device *VAR_2 = VAR_0->private;
 const __u8 *VAR_3 = VAR_2->rdesc;
 unsigned VAR_4 = VAR_2->rsize;
 int VAR_5;

 if (!VAR_3) {
  VAR_3 = VAR_2->dev_rdesc;
  VAR_4 = VAR_2->dev_rsize;
 }


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_3(VAR_0, "%02x ", VAR_3[VAR_5]);
 FUNC_3(VAR_0, "\n\n");


 if (FUNC_0(&VAR_2->driver_input_lock))
  return 0;

 FUNC_1(VAR_2, VAR_0);
 FUNC_3(VAR_0, "\n");
 FUNC_2(VAR_2, VAR_0);

 FUNC_4(&VAR_2->driver_input_lock);

 return 0;
}

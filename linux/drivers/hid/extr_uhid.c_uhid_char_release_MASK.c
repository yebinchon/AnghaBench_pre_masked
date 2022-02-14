
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_device {struct uhid_device** outq; } ;
struct inode {int dummy; } ;
struct file {struct uhid_device* private_data; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct uhid_device*) ;
 int FUNC_1 (struct uhid_device*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct uhid_device *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;

 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  FUNC_0(VAR_3->outq[VAR_4]);

 FUNC_0(VAR_3);

 return 0;
}

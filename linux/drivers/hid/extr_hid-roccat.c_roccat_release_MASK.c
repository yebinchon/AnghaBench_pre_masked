
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roccat_reader {int hid; scalar_t__ exist; int open; int readers_lock; int node; } ;
struct roccat_device {int hid; scalar_t__ exist; int open; int readers_lock; int node; } ;
struct inode {int dummy; } ;
struct file {struct roccat_reader* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct roccat_reader** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct roccat_reader*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 unsigned int VAR_6 = FUNC_2(VAR_4);
 struct roccat_reader *VAR_7 = VAR_5->private_data;
 struct roccat_device *VAR_8;

 FUNC_5(&VAR_3);

 VAR_8 = VAR_2[VAR_6];
 if (!VAR_8) {
  FUNC_6(&VAR_3);
  FUNC_7("roccat device with minor %d doesn't exist\n", VAR_6);
  return -VAR_0;
 }

 FUNC_5(&VAR_8->readers_lock);
 FUNC_4(&VAR_7->node);
 FUNC_6(&VAR_8->readers_lock);
 FUNC_3(VAR_7);

 if (!--VAR_8->open) {

  if (VAR_8->exist) {
   FUNC_1(VAR_8->hid, VAR_1);
   FUNC_0(VAR_8->hid);
  } else {
   FUNC_3(VAR_8);
  }
 }

 FUNC_6(&VAR_3);

 return 0;
}

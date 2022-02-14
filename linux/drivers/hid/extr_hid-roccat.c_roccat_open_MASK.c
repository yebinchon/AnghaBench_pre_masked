
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roccat_reader {int node; int cbuf_start; struct roccat_device* device; } ;
struct roccat_device {int readers_lock; int readers; int cbuf_end; int open; int hid; } ;
struct inode {int dummy; } ;
struct file {struct roccat_reader* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct roccat_device** VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct roccat_reader*) ;
 struct roccat_reader* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_7, struct file *VAR_8)
{
 unsigned int VAR_9 = FUNC_2(VAR_7);
 struct roccat_reader *VAR_10;
 struct roccat_device *VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_4(sizeof(struct roccat_reader), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_6(&VAR_6);

 VAR_11 = VAR_5[VAR_9];

 if (!VAR_11) {
  FUNC_8("roccat device with minor %d doesn't exist\n", VAR_9);
  VAR_12 = -VAR_0;
  goto exit_err_devices;
 }

 FUNC_6(&VAR_11->readers_lock);

 if (!VAR_11->open++) {

  VAR_12 = FUNC_1(VAR_11->hid, VAR_3);
  if (VAR_12 < 0) {
   --VAR_11->open;
   goto exit_err_readers;
  }

  VAR_12 = FUNC_0(VAR_11->hid);
  if (VAR_12 < 0) {
   FUNC_1(VAR_11->hid, VAR_4);
   --VAR_11->open;
   goto exit_err_readers;
  }
 }

 VAR_10->device = VAR_11;

 VAR_10->cbuf_start = VAR_11->cbuf_end;

 FUNC_5(&VAR_10->node, &VAR_11->readers);
 VAR_8->private_data = VAR_10;

exit_err_readers:
 FUNC_7(&VAR_11->readers_lock);
exit_err_devices:
 FUNC_7(&VAR_6);
 if (VAR_12)
  FUNC_3(VAR_10);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hidraw_list {int node; int read_mutex; struct hidraw* hidraw; } ;
struct hidraw {int list_lock; int list; int open; int hid; int exist; } ;
struct file {struct hidraw_list* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct hidraw** VAR_5 ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct hidraw_list*) ;
 struct hidraw_list* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_7, struct file *VAR_8)
{
 unsigned int VAR_9 = FUNC_2(VAR_7);
 struct hidraw *VAR_10;
 struct hidraw_list *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;

 if (!(VAR_11 = FUNC_4(sizeof(struct hidraw_list), VAR_2))) {
  VAR_13 = -VAR_1;
  goto out;
 }

 FUNC_7(&VAR_6);
 if (!VAR_5[VAR_9] || !VAR_5[VAR_9]->exist) {
  VAR_13 = -VAR_0;
  goto out_unlock;
 }

 VAR_10 = VAR_5[VAR_9];
 if (!VAR_10->open++) {
  VAR_13 = FUNC_1(VAR_10->hid, VAR_3);
  if (VAR_13 < 0) {
   VAR_10->open--;
   goto out_unlock;
  }

  VAR_13 = FUNC_0(VAR_10->hid);
  if (VAR_13 < 0) {
   FUNC_1(VAR_10->hid, VAR_4);
   VAR_10->open--;
   goto out_unlock;
  }
 }

 VAR_11->hidraw = VAR_5[VAR_9];
 FUNC_6(&VAR_11->read_mutex);
 FUNC_9(&VAR_5[VAR_9]->list_lock, VAR_12);
 FUNC_5(&VAR_11->node, &VAR_5[VAR_9]->list);
 FUNC_10(&VAR_5[VAR_9]->list_lock, VAR_12);
 VAR_8->private_data = VAR_11;
out_unlock:
 FUNC_8(&VAR_6);
out:
 if (VAR_13 < 0)
  FUNC_3(VAR_11);
 return VAR_13;

}

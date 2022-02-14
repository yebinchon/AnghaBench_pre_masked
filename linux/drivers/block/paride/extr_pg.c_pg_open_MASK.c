
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int name; int access; int * bufptr; scalar_t__ busy; int present; } ;
struct inode {int dummy; } ;
struct file {struct pg* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 struct pg* VAR_6 ;
 int FUNC_1 (struct inode*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pg*,int) ;
 int VAR_7 ;
 int FUNC_6 (struct pg*) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_9, struct file *VAR_10)
{
 int VAR_11 = FUNC_1(VAR_9) & 0x7f;
 struct pg *VAR_12 = &VAR_6[VAR_11];
 int VAR_13 = 0;

 FUNC_3(&VAR_7);
 if ((VAR_11 >= VAR_5) || (!VAR_12->present)) {
  VAR_13 = -VAR_1;
  goto out;
 }

 if (FUNC_8(0, &VAR_12->access)) {
  VAR_13 = -VAR_0;
  goto out;
 }

 if (VAR_12->busy) {
  FUNC_6(VAR_12);
  VAR_12->busy = 0;
 }

 FUNC_5(VAR_12, (VAR_8 > 1));

 VAR_12->bufptr = FUNC_2(VAR_4, VAR_3);
 if (VAR_12->bufptr == ((void*)0)) {
  FUNC_0(0, &VAR_12->access);
  FUNC_7("%s: buffer allocation failed\n", VAR_12->name);
  VAR_13 = -VAR_2;
  goto out;
 }

 VAR_10->private_data = VAR_12;

out:
 FUNC_4(&VAR_7);
 return VAR_13;
}

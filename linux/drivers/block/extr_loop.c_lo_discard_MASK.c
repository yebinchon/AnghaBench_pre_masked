
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct loop_device {scalar_t__ lo_encrypt_key_size; struct file* lo_backing_file; } ;
struct file {TYPE_1__* f_op; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* fallocate ) (struct file*,int,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct file*,int,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct loop_device *VAR_5, struct request *VAR_6, loff_t VAR_7)
{






 struct file *VAR_8 = VAR_5->lo_backing_file;
 int VAR_9 = VAR_4 | VAR_3;
 int VAR_10;

 if ((!VAR_8->f_op->fallocate) || VAR_5->lo_encrypt_key_size) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_10 = VAR_8->f_op->fallocate(VAR_8, VAR_9, VAR_7, FUNC_0(VAR_6));
 if (FUNC_2(VAR_10 && VAR_10 != -VAR_0 && VAR_10 != -VAR_2))
  VAR_10 = -VAR_1;
 out:
 return VAR_10;
}

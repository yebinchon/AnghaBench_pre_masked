
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct saa7146_vv {struct file* vbi_read_timeout_file; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {int dummy; } ;
struct file {struct saa7146_fh* private_data; } ;


 int FUNC_0 (char*,struct saa7146_dev*,struct saa7146_fh*) ;
 struct saa7146_vv* FUNC_1 (int ,struct timer_list*,void (*) (struct timer_list*)) ;
 int FUNC_2 (struct saa7146_fh*,struct file*) ;
 struct saa7146_vv* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_1)
{
 struct saa7146_vv *VAR_2 = FUNC_1(VAR_2, VAR_1, FUNC_3);
 struct file *VAR_3 = VAR_2->vbi_read_timeout_file;
 struct saa7146_fh *VAR_4 = VAR_3->private_data;
 struct saa7146_dev *VAR_5 = VAR_4->dev;

 FUNC_0("dev:%p, fh:%p\n", VAR_5, VAR_4);

 FUNC_2(VAR_4, VAR_3);
}

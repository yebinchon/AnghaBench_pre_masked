
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_vv {struct saa7146_fh* vbi_streaming; } ;
struct saa7146_fh {int dummy; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {struct saa7146_fh* private_data; } ;


 int FUNC_0 (char*,struct saa7146_dev*,struct saa7146_fh*) ;
 int VAR_0 ;
 int FUNC_1 (struct saa7146_fh*,int ) ;
 int FUNC_2 (struct saa7146_fh*,struct file*) ;

__attribute__((used)) static void FUNC_3(struct saa7146_dev *VAR_1, struct file *VAR_2)
{
 struct saa7146_fh *VAR_3 = VAR_2->private_data;
 struct saa7146_vv *VAR_4 = VAR_1->vv_data;
 FUNC_0("dev:%p, fh:%p\n", VAR_1, VAR_3);

 if( VAR_3 == VAR_4->vbi_streaming ) {
  FUNC_2(VAR_3, VAR_2);
 }
 FUNC_1(VAR_3, VAR_0);
}

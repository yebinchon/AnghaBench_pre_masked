
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camdd_dev_pass {int * dev; } ;
struct camdd_dev_file {int fd; struct camdd_dev* tmp_buf; } ;
struct TYPE_2__ {struct camdd_dev_pass pass; struct camdd_dev_file file; } ;
struct camdd_dev {int dev_type; TYPE_1__ dev_spec; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct camdd_dev*) ;

void
FUNC_3(struct camdd_dev *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 switch (VAR_0->dev_type) {
 case 129: {
  struct camdd_dev_file *VAR_1 = &VAR_0->dev_spec.file;

  if (VAR_1->fd != -1)
   FUNC_1(VAR_1->fd);
  FUNC_2(VAR_1->tmp_buf);
  break;
 }
 case 128: {
  struct camdd_dev_pass *VAR_2 = &VAR_0->dev_spec.pass;

  if (VAR_2->dev != ((void*)0))
   FUNC_0(VAR_2->dev);
  break;
 }
 default:
  break;
 }

 FUNC_2(VAR_0);
}

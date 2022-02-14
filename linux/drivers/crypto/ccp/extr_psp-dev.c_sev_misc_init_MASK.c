
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct psp_device {TYPE_1__* sev_misc; int sev_int_queue; struct device* dev; } ;
struct miscdevice {int * fops; int name; int minor; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int refcount; struct miscdevice misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_1__* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (struct miscdevice*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct psp_device *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 int VAR_8;
 if (!VAR_4) {
  struct miscdevice *VAR_9;

  VAR_4 = FUNC_1(VAR_7, sizeof(*VAR_4), VAR_2);
  if (!VAR_4)
   return -VAR_1;

  VAR_9 = &VAR_4->misc;
  VAR_9->minor = VAR_3;
  VAR_9->name = VAR_0;
  VAR_9->fops = &VAR_5;

  VAR_8 = FUNC_5(VAR_9);
  if (VAR_8)
   return VAR_8;

  FUNC_4(&VAR_4->refcount);
 } else {
  FUNC_3(&VAR_4->refcount);
 }

 FUNC_2(&VAR_6->sev_int_queue);
 VAR_6->sev_misc = VAR_4;
 FUNC_0(VAR_7, "registered SEV device\n");

 return 0;
}

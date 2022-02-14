
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dax_device {void* private; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void *FUNC_1(struct dax_device *VAR_1)
{
 if (!FUNC_0(VAR_0, &VAR_1->flags))
  return ((void*)0);
 return VAR_1->private;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {TYPE_1__* bus; scalar_t__ id; } ;
struct TYPE_4__ {int dev_root; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_2(&VAR_1, ((void*)0))))
  return VAR_3;

 VAR_2->id = 0;
 VAR_2->bus = &VAR_1;

 if ((VAR_3 = FUNC_1(VAR_1.dev_root, &VAR_0)))
  goto subsys_unregister;

 return 0;

subsys_unregister:
 FUNC_0(&VAR_1);
 return VAR_3;
}

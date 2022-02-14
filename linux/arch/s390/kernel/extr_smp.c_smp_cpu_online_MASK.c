
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int kobj; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_2)
{
 struct device *VAR_3 = &FUNC_0(VAR_0, VAR_2)->dev;

 return FUNC_1(&VAR_3->kobj, &VAR_1);
}

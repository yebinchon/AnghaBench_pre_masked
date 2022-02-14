
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct cpu {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct cpu *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev.kobj, &VAR_1);
 if (VAR_4 || !VAR_0)
  return VAR_4;
 VAR_4 = FUNC_0(&VAR_3->dev.kobj, &VAR_2);
 if (VAR_4)
  FUNC_1(&VAR_3->dev.kobj, &VAR_1);
 return VAR_4;
}

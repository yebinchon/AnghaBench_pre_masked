
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct class {int dummy; } ;
struct TYPE_3__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;

int FUNC_2(struct class *VAR_3)
{
 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return -VAR_0;
 FUNC_1(&VAR_2->mutex);

 return 0;
}

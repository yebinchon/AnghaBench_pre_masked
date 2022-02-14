
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_4__ {unsigned long misc; } ;
struct TYPE_5__ {TYPE_1__ ctrl; } ;
struct TYPE_6__ {TYPE_2__ perif; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_7, unsigned long VAR_8,
         void *VAR_9)
{
 unsigned long VAR_10;

 if (VAR_5)
  return VAR_1;
 VAR_5 = 1;


 VAR_10 = VAR_6->perif.ctrl.misc | VAR_0;
 VAR_6->perif.ctrl.misc = VAR_10;

 VAR_4 = VAR_2;
 FUNC_0(&VAR_3);

 return VAR_1;
}

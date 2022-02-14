
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct master {int bound; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* unbind ) (int ) ;} ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct master *VAR_0)
{
 if (VAR_0->bound) {
  VAR_0->ops->unbind(VAR_0->dev);
  FUNC_0(VAR_0->dev, ((void*)0));
  VAR_0->bound = 0;
 }
}

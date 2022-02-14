
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct master {int dev; } ;
struct component {int bound; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* unbind ) (int ,int ,void*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct component*) ;
 int FUNC_2 (int ,int ,void*) ;

__attribute__((used)) static void FUNC_3(struct component *VAR_0,
 struct master *VAR_1, void *VAR_2)
{
 FUNC_0(!VAR_0->bound);

 VAR_0->ops->unbind(VAR_0->dev, VAR_1->dev, VAR_2);
 VAR_0->bound = 0;


 FUNC_1(VAR_0->dev, VAR_0);
}

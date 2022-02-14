
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct master {int dev; } ;
struct component {int bound; TYPE_1__* ops; int dev; } ;
struct TYPE_4__ {int (* bind ) (int ,int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,struct component*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,void*) ;

__attribute__((used)) static int FUNC_9(struct component *VAR_2, struct master *VAR_3,
 void *VAR_4)
{
 int VAR_5;






 if (!FUNC_5(VAR_3->dev, ((void*)0), VAR_1))
  return -VAR_0;






 if (!FUNC_5(VAR_2->dev, VAR_2, VAR_1)) {
  FUNC_6(VAR_3->dev, ((void*)0));
  return -VAR_0;
 }

 FUNC_0(VAR_3->dev, "binding %s (ops %ps)\n",
  FUNC_3(VAR_2->dev), VAR_2->ops);

 VAR_5 = VAR_2->ops->bind(VAR_2->dev, VAR_3->dev, VAR_4);
 if (!VAR_5) {
  VAR_2->bound = 1;







  FUNC_4(VAR_2->dev, ((void*)0));
  FUNC_7(VAR_3->dev, ((void*)0));

  FUNC_2(VAR_3->dev, "bound %s (ops %ps)\n",
    FUNC_3(VAR_2->dev), VAR_2->ops);
 } else {
  FUNC_6(VAR_2->dev, ((void*)0));
  FUNC_6(VAR_3->dev, ((void*)0));

  FUNC_1(VAR_3->dev, "failed to bind %s (ops %ps): %d\n",
   FUNC_3(VAR_2->dev), VAR_2->ops, VAR_5);
 }

 return VAR_5;
}

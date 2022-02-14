
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct master {int bound; int dev; TYPE_1__* ops; } ;
struct component {int dev; struct master* master; } ;
struct TYPE_2__ {int (* bind ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct master*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct master *VAR_2,
 struct component *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2->dev, "trying to bring up master\n");

 if (FUNC_5(VAR_2)) {
  FUNC_0(VAR_2->dev, "master has incomplete components\n");
  return 0;
 }

 if (VAR_3 && VAR_3->master != VAR_2) {
  FUNC_0(VAR_2->dev, "master is not for this component (%s)\n",
   FUNC_2(VAR_3->dev));
  return 0;
 }

 if (!FUNC_3(VAR_2->dev, ((void*)0), VAR_1))
  return -VAR_0;


 VAR_4 = VAR_2->ops->bind(VAR_2->dev);
 if (VAR_4 < 0) {
  FUNC_4(VAR_2->dev, ((void*)0));
  FUNC_1(VAR_2->dev, "master bind failed: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_2->bound = 1;
 return 1;
}

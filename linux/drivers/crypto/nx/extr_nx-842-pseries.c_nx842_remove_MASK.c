
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct vio_dev {TYPE_1__ dev; } ;
struct nx842_devdata {struct nx842_devdata* counters; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct nx842_devdata*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 struct nx842_devdata* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(struct vio_dev *VAR_5)
{
 struct nx842_devdata *VAR_6;
 unsigned long VAR_7;

 FUNC_6("Removing IBM Power 842 compression device\n");
 FUNC_11(&VAR_5->dev.kobj, &VAR_2);

 FUNC_1(&VAR_4);

 FUNC_8(&VAR_1, VAR_7);
 VAR_6 = FUNC_7(VAR_0,
   FUNC_4(&VAR_1));
 FUNC_5(&VAR_3);
 FUNC_0(VAR_0, ((void*)0));
 FUNC_9(&VAR_1, VAR_7);
 FUNC_10();
 FUNC_2(&VAR_5->dev, ((void*)0));
 if (VAR_6)
  FUNC_3(VAR_6->counters);
 FUNC_3(VAR_6);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {scalar_t__ probe_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;






 if (FUNC_1(&VAR_4)) {
  FUNC_3(VAR_7, "async probe took too long\n");
  FUNC_0(&VAR_3);
 } else {
  FUNC_2(&VAR_6->dev, "sleeping for %d msecs in probe\n",
    VAR_1);
  FUNC_6(VAR_1);
  FUNC_2(&VAR_6->dev, "done sleeping\n");
 }





 if (VAR_7->driver->probe_type == VAR_0) {
  if (FUNC_4(VAR_7) != FUNC_7()) {
   FUNC_5(VAR_7, "NUMA node mismatch %d != %d\n",
     FUNC_4(VAR_7), FUNC_7());
   FUNC_0(&VAR_5);
  }

  FUNC_0(&VAR_2);
 }

 return 0;
}

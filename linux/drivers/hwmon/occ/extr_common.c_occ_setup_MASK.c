
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occ {int bus_dev; int hwmon; int ** groups; int group; int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char const*,struct occ*,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct occ*) ;
 int FUNC_7 (struct occ*) ;
 int FUNC_8 (struct occ*) ;
 int FUNC_9 (struct occ*) ;

int FUNC_10(struct occ *VAR_1, const char *VAR_2)
{
 int VAR_3;

 FUNC_5(&VAR_1->lock);
 VAR_1->groups[0] = &VAR_1->group;


 VAR_3 = FUNC_7(VAR_1);
 if (VAR_3 == -VAR_0) {
  FUNC_3(VAR_1->bus_dev, "host is not ready\n");
  return VAR_3;
 } else if (VAR_3 < 0) {
  FUNC_2(VAR_1->bus_dev, "failed to get OCC poll response: %d\n",
   VAR_3);
  return VAR_3;
 }

 FUNC_6(VAR_1);

 VAR_3 = FUNC_8(VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_1->bus_dev, "failed to setup sensor attrs: %d\n",
   VAR_3);
  return VAR_3;
 }

 VAR_1->hwmon = FUNC_4(VAR_1->bus_dev, VAR_2,
           VAR_1, VAR_1->groups);
 if (FUNC_0(VAR_1->hwmon)) {
  VAR_3 = FUNC_1(VAR_1->hwmon);
  FUNC_2(VAR_1->bus_dev, "failed to register hwmon device: %d\n",
   VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_9(VAR_1);
 if (VAR_3)
  FUNC_2(VAR_1->bus_dev, "failed to setup sysfs: %d\n", VAR_3);

 return VAR_3;
}

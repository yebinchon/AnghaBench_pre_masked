
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_device {scalar_t__ clock; scalar_t__ bus_clock; int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct panfrost_device *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 VAR_0->clock = FUNC_7(VAR_0->dev, ((void*)0));
 if (FUNC_0(VAR_0->clock)) {
  FUNC_5(VAR_0->dev, "get clock failed %ld\n", FUNC_1(VAR_0->clock));
  return FUNC_1(VAR_0->clock);
 }

 VAR_2 = FUNC_3(VAR_0->clock);
 FUNC_6(VAR_0->dev, "clock rate = %lu\n", VAR_2);

 VAR_1 = FUNC_4(VAR_0->clock);
 if (VAR_1)
  return VAR_1;

 VAR_0->bus_clock = FUNC_8(VAR_0->dev, "bus");
 if (FUNC_0(VAR_0->bus_clock)) {
  FUNC_5(VAR_0->dev, "get bus_clock failed %ld\n",
   FUNC_1(VAR_0->bus_clock));
  return FUNC_1(VAR_0->bus_clock);
 }

 if (VAR_0->bus_clock) {
  VAR_2 = FUNC_3(VAR_0->bus_clock);
  FUNC_6(VAR_0->dev, "bus_clock rate = %lu\n", VAR_2);

  VAR_1 = FUNC_4(VAR_0->bus_clock);
  if (VAR_1)
   goto disable_clock;
 }

 return 0;

disable_clock:
 FUNC_2(VAR_0->clock);

 return VAR_1;
}

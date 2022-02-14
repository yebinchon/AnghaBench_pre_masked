
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct rman {int dummy; } ;
struct ps3bus_devinfo {int bus; int dev; int resources; int devtype; int bustype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ,int,int,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int,int,scalar_t__,scalar_t__,int,scalar_t__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int,int,int ,int ,int) ;
 int FUNC_9 (int *,int ,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct rman*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct rman *VAR_3, int VAR_4, int VAR_5,
    uint64_t VAR_6, uint64_t VAR_7, struct ps3bus_devinfo *VAR_8)
{
 uint64_t VAR_9, VAR_10, VAR_11;
 uint64_t VAR_12, VAR_13, VAR_14;
 uint64_t VAR_15, VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 FUNC_10(&VAR_8->resources);

 FUNC_3(&VAR_15);
 VAR_19 = 32 - FUNC_0(FUNC_7());


 for (VAR_17 = 0; VAR_17 < 10; VAR_17++) {
  VAR_18 = FUNC_4(VAR_0,
      (FUNC_6("bus") >> 32) | VAR_4,
      FUNC_6("dev") | VAR_5,
      FUNC_6("intr") | VAR_17, 0, &VAR_9, &VAR_10);

  if (VAR_18 != 0)
   break;

  if (VAR_9 != VAR_6)
   continue;

  FUNC_2(VAR_10, &VAR_11);
  FUNC_1(VAR_15, VAR_19, VAR_11, VAR_11,
      0);
  FUNC_9(&VAR_8->resources, VAR_1, VAR_17,
      VAR_11, VAR_11, 1);
 }


 for (VAR_17 = 0; VAR_17 < 10; VAR_17++) {
  VAR_18 = FUNC_4(VAR_0,
      (FUNC_6("bus") >> 32) | VAR_4,
      FUNC_6("dev") | VAR_5,
      FUNC_6("reg") | VAR_17,
      FUNC_6("type"), &VAR_12, &VAR_16);

  if (VAR_18 != 0)
   break;

  if (VAR_12 != VAR_7)
   continue;

  VAR_18 = FUNC_4(VAR_0,
      (FUNC_6("bus") >> 32) | VAR_4,
      FUNC_6("dev") | VAR_5,
      FUNC_6("reg") | VAR_17,
      FUNC_6("data"), &VAR_13, &VAR_14);

  VAR_18 = FUNC_5(VAR_8->bus, VAR_8->dev,
      VAR_13, VAR_14, 12 , &VAR_13);

  if (VAR_18 != 0) {
   FUNC_8("Mapping registers failed for device "
       "%d.%d (%ld.%ld): %d\n", VAR_8->bus, VAR_8->dev,
       VAR_8->bustype, VAR_8->devtype, VAR_18);
   break;
  }

  FUNC_11(VAR_3, VAR_13, VAR_13 + VAR_14 - 1);
  FUNC_9(&VAR_8->resources, VAR_2, VAR_17,
      VAR_13, VAR_13 + VAR_14, VAR_14);
 }
}

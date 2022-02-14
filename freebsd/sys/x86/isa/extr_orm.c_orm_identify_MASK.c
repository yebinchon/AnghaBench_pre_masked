
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct resource {int dummy; } ;
struct orm_softc {int rnum; int* rid; struct resource** res; } ;
typedef int driver_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int buf ;


 int FUNC_0 (int ,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,struct resource*) ;
 int FUNC_4 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int*,int) ;
 int FUNC_6 (int ,int ) ;
 struct orm_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (char*,int ) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (struct resource*) ;

__attribute__((used)) static void
FUNC_15(driver_t* VAR_8, device_t VAR_9)
{
 bus_space_handle_t VAR_10;
 bus_space_tag_t VAR_11;
 device_t VAR_12;
 u_int32_t VAR_13 = VAR_1;
 struct resource *VAR_14;
 int VAR_15;
 u_int32_t VAR_16;
 struct orm_softc *VAR_17;
 u_int8_t VAR_18[3];

 if (FUNC_12("orm", 0))
  return;

 VAR_12 = FUNC_0(VAR_9, VAR_3, "orm", -1);
 FUNC_9(VAR_12, VAR_8);
 FUNC_10(VAR_12, VAR_5);
 FUNC_11(VAR_12, VAR_5);
 VAR_17 = FUNC_7(VAR_12);
 VAR_17->rnum = 0;
 while (VAR_17->rnum < VAR_4 && VAR_13 < VAR_0) {
  FUNC_4(VAR_12, VAR_7, VAR_17->rnum, VAR_13,
      VAR_2);
  VAR_15 = VAR_17->rnum;
  VAR_14 = FUNC_1(VAR_12, VAR_7, &VAR_15,
      VAR_6);
  if (VAR_14 == ((void*)0)) {
   FUNC_2(VAR_12, VAR_7, VAR_17->rnum);
   VAR_13 += VAR_2;
   continue;
  }
  VAR_11 = FUNC_14(VAR_14);
  VAR_10 = FUNC_13(VAR_14);
  FUNC_5(VAR_11, VAR_10, 0, VAR_18, sizeof(VAR_18));
  FUNC_3(VAR_12, VAR_7, VAR_15, VAR_14);
  FUNC_2(VAR_12, VAR_7, VAR_17->rnum);
  if (VAR_18[0] != 0x55 || VAR_18[1] != 0xAA || (VAR_18[2] & 0x03) != 0) {
   VAR_13 += VAR_2;
   continue;
  }
  VAR_16 = VAR_18[2] << 9;
  FUNC_4(VAR_12, VAR_7, VAR_17->rnum, VAR_13,
      VAR_16);
  VAR_15 = VAR_17->rnum;
  VAR_14 = FUNC_1(VAR_12, VAR_7, &VAR_15, 0);
  if (VAR_14 == ((void*)0)) {
   FUNC_2(VAR_12, VAR_7, VAR_17->rnum);
   VAR_13 += VAR_2;
   continue;
  }
  VAR_17->rid[VAR_17->rnum] = VAR_15;
  VAR_17->res[VAR_17->rnum] = VAR_14;
  VAR_17->rnum++;
  VAR_13 += VAR_16;
 }

 if (VAR_17->rnum == 0)
  FUNC_6(VAR_9, VAR_12);
 else if (VAR_17->rnum == 1)
  FUNC_8(VAR_12, "ISA Option ROM");
 else
  FUNC_8(VAR_12, "ISA Option ROMs");
}

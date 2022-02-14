
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct sbbc_softc {int * sc_res; } ;
typedef int phandle_t ;
typedef int node ;
typedef int * device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_4 (int *,int ,int*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int,int *) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int *,int) ;
 struct sbbc_softc* FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *,struct timespec*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_18(device_t VAR_11)
{
 struct sbbc_softc *VAR_12;
 struct timespec VAR_13;
 device_t VAR_14;
 bus_space_tag_t VAR_15;
 bus_space_handle_t VAR_16;
 phandle_t VAR_17;
 int VAR_18, VAR_19;
 uint32_t VAR_20;


 if ((VAR_17 = FUNC_0("/chosen")) == -1) {
  FUNC_10(VAR_11, "failed to find /chosen\n");
  return (VAR_0);
 }
 if (FUNC_1(VAR_17, "iosram", &VAR_17, sizeof(VAR_17)) == -1) {
  FUNC_10(VAR_11, "failed to get iosram\n");
  return (VAR_0);
 }
 if (VAR_17 != FUNC_11(VAR_11))
  return (0);

 VAR_12 = FUNC_9(VAR_11);
 VAR_19 = VAR_2;
 VAR_12->sc_res = FUNC_4(VAR_11, VAR_5, &VAR_19,
     VAR_1);
 if (VAR_12->sc_res == ((void*)0)) {
  FUNC_10(VAR_11, "failed to allocate resources\n");
  return (VAR_0);
 }
 VAR_15 = FUNC_15(VAR_12->sc_res);
 VAR_16 = FUNC_14(VAR_12->sc_res);
 if (VAR_7 != 0) {

  if (FUNC_12(VAR_11) == 0)
   FUNC_13(VAR_11, 1);
  VAR_14 = FUNC_8(VAR_11, ((void*)0), -1);
  if (VAR_14 == ((void*)0))
   FUNC_10(VAR_11, "failed to add UART device\n");
  VAR_18 = FUNC_5(VAR_11);
  if (VAR_18 != 0)
   FUNC_10(VAR_11, "failed to attach UART device\n");
 } else {
  VAR_18 = FUNC_16(VAR_15, VAR_16);
  if (VAR_18 != 0) {
   FUNC_10(VAR_11, "failed to parse TOC\n");
   if (VAR_7 != 0) {
    FUNC_6(VAR_11, VAR_5, VAR_19,
        VAR_12->sc_res);
    return (VAR_18);
   }
  }
 }
 if (VAR_8 != 0) {
  if ((VAR_20 = FUNC_2(VAR_8 +
      FUNC_3(VAR_9))) != VAR_3)
   FUNC_10(VAR_11, "invalid TOD magic %#x\n", VAR_20);
  else if ((VAR_20 = FUNC_2(VAR_8 +
      FUNC_3(VAR_10))) < VAR_4)
   FUNC_10(VAR_11, "invalid TOD version %#x\n", VAR_20);
  else {
   FUNC_7(VAR_11, 1000000);
   if (VAR_6) {
    FUNC_17(VAR_11, &VAR_13);
    FUNC_10(VAR_11,
        "current time: %ld.%09ld\n",
        (long)VAR_13.tv_sec, VAR_13.tv_nsec);
   }
  }
 }
 return (0);
}

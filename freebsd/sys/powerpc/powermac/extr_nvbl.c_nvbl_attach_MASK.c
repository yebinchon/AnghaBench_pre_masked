
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct nvbl_softc {int * sc_memr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct nvbl_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_7 ;
 int * FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 struct nvbl_softc* FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9)
{
 struct nvbl_softc *VAR_10;
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_5(VAR_9);

 VAR_13 = 0x10;
 VAR_10->sc_memr = FUNC_2(VAR_9, VAR_7, &VAR_13,
   VAR_5 | VAR_6);
 if (VAR_10->sc_memr == ((void*)0)) {
  FUNC_8(VAR_9, "Could not alloc mem resource!\n");
  return (VAR_2);
 }


 if (!(FUNC_3(VAR_10->sc_memr, VAR_3 + 4) & 0x01000001)) {
  FUNC_4(VAR_10->sc_memr, VAR_3 + 4, 0x01000001);
  FUNC_9();
 }

 VAR_11 = FUNC_6(VAR_9);
 VAR_12 = FUNC_7(VAR_9);

 FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_4,
   "level", VAR_1 | VAR_0, VAR_10, 0,
   VAR_8, "I", "Backlight level (0-100)");

 return (0);
}

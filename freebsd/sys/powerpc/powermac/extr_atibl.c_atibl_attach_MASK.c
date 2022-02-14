
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct atibl_softc {int * sc_memr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct atibl_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (int ,int ,int*,int) ;
 struct atibl_softc* FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_8)
{
 struct atibl_softc *VAR_9;
 struct sysctl_ctx_list *VAR_10;
 struct sysctl_oid *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_3(VAR_8);

 VAR_12 = 0x18;
 VAR_9->sc_memr = FUNC_2(VAR_8, VAR_6, &VAR_12,
   VAR_4 | VAR_5);
 if (VAR_9->sc_memr == ((void*)0)) {
  FUNC_6(VAR_8, "Could not alloc mem resource!\n");
  return (VAR_2);
 }

 VAR_10 = FUNC_4(VAR_8);
 VAR_11 = FUNC_5(VAR_8);

 FUNC_0(VAR_10, FUNC_1(VAR_11), VAR_3,
     "level", VAR_1 | VAR_0, VAR_9, 0,
     VAR_7, "I", "Backlight level (0-100)");

 return (0);
}

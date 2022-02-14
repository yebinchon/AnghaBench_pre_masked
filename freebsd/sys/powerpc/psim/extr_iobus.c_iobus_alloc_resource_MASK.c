
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct iobus_softc {struct rman sc_mem_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int ,int,int,struct resource*) ;
 struct resource* FUNC_1 (int ,int,int*,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 struct iobus_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct resource*) ;
 struct resource* FUNC_6 (struct rman*,int ,int ,int ,int,int ) ;
 int FUNC_7 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_8(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
       rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7,
       u_int VAR_8)
{
 struct iobus_softc *VAR_9;
 int VAR_10;
 struct resource *VAR_11;
 struct rman *VAR_12;

 VAR_9 = FUNC_3(VAR_1);

 VAR_10 = VAR_8 & VAR_0;
 VAR_8 &= ~VAR_0;

 switch (VAR_3) {
 case 128:
 case 130:
  VAR_12 = &VAR_9->sc_mem_rman;
  break;
 case 129:
  return (FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8));
 default:
  FUNC_4(VAR_1, "unknown resource request from %s\n",
      FUNC_2(VAR_2));
  return (((void*)0));
 }

 VAR_11 = FUNC_6(VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_2);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_1, "failed to reserve resource for %s\n",
         FUNC_2(VAR_2));
  return (((void*)0));
 }

 FUNC_7(VAR_11, *VAR_4);

 if (VAR_10) {
  if (FUNC_0(VAR_2, VAR_3, *VAR_4, VAR_11) != 0) {
                        FUNC_4(VAR_1,
          "failed to activate resource for %s\n",
          FUNC_2(VAR_2));
   FUNC_5(VAR_11);
   return (((void*)0));
                }
        }

 return (VAR_11);
}

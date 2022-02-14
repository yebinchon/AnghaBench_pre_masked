
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct apb_softc {int sc_memmap; int sc_iomap; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int,struct resource*,int ,int ) ;
 struct apb_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, device_t VAR_4, int VAR_5,
    struct resource *VAR_6, rman_res_t VAR_7, rman_res_t VAR_8)
{
 struct apb_softc *VAR_9;

 VAR_9 = FUNC_2(VAR_3);
 switch (VAR_5) {
 case 129:
  if (!FUNC_0(VAR_9->sc_iomap, VAR_0, VAR_7, VAR_8))
   return (VAR_2);
  break;
 case 128:
  if (!FUNC_0(VAR_9->sc_memmap, VAR_1, VAR_7, VAR_8))
   return (VAR_2);
  break;
 }
 return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
}

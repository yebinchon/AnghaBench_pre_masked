
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct schizo_softc {int sc_ign; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct schizo_softc* FUNC_1 (int ) ;
 struct resource* FUNC_2 (int ,int ,int,int*,int ,int ,int ,int ) ;

__attribute__((used)) static struct resource *
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct schizo_softc *VAR_9;

 if (VAR_3 == VAR_0) {
  VAR_9 = FUNC_1(VAR_1);
  VAR_5 = VAR_6 = FUNC_0(VAR_9->sc_ign, VAR_6);
 }
 return (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8));
}

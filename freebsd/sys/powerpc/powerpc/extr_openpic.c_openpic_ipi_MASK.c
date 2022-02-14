
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int ;
struct openpic_softc {int dummy; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct openpic_softc* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct openpic_softc*,int ,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void
FUNC_7(device_t VAR_2, u_int VAR_3)
{
 struct openpic_softc *VAR_4;

 FUNC_0(VAR_2 == VAR_1, ("Cannot send IPIs from non-root OpenPIC"));

 VAR_4 = FUNC_3(VAR_2);
 FUNC_5();
 FUNC_4(VAR_4, FUNC_1(FUNC_2(VAR_0), 0),
     1u << VAR_3);
 FUNC_6();
}

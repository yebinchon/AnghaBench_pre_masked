
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xicp_softc {int ibm_int_on; } ;
struct xicp_intvec {int cpu; } ;
typedef int device_t ;
typedef int cell_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xicp_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int,int,int ,int *) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(device_t VAR_3, u_int VAR_4, void *VAR_5)
{
 struct xicp_softc *VAR_6 = FUNC_1(VAR_3);
 cell_t VAR_7;

 if (VAR_4 == VAR_0)
  return;

 if (FUNC_4()) {
  FUNC_3(VAR_6->ibm_int_on, 1, 1, VAR_4, &VAR_7);







 }
}

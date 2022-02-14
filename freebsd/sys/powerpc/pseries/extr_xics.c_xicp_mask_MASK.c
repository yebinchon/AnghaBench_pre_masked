
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xicp_softc {int ibm_int_off; } ;
struct xicp_intvec {int cpu; } ;
typedef int device_t ;
typedef int cell_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xicp_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int,int,int ,int *) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2, u_int VAR_3, void *VAR_4)
{
 struct xicp_softc *VAR_5 = FUNC_1(VAR_2);
 cell_t VAR_6;

 if (VAR_3 == VAR_0)
  return;

 if (FUNC_4()) {
  FUNC_3(VAR_5->ibm_int_off, 1, 1, VAR_3, &VAR_6);







 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct xicp_softc {int intvecs; int ibm_set_xive; struct xicp_intvec* ipi_vec; } ;
struct xicp_intvec {int cpu; void* vector; void* irq; } ;
typedef int device_t ;
typedef int cell_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 struct xicp_softc* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,void*,int,int ) ;
 int FUNC_4 (char*,void*,int,int) ;
 int FUNC_5 (int ,int,int,void*,int,int ,int*) ;
 scalar_t__ FUNC_6 () ;
 struct xicp_intvec* FUNC_7 (struct xicp_softc*,void*,void**) ;
 int FUNC_8 (int ,void*,struct xicp_intvec*) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_4, u_int VAR_5, u_int VAR_6, void **VAR_7)
{
 struct xicp_softc *VAR_8;
 struct xicp_intvec *VAR_9;
 cell_t VAR_10, VAR_11;

 VAR_8 = FUNC_1(VAR_4);


 VAR_11 = FUNC_0(VAR_3);

 VAR_9 = FUNC_7(VAR_8, VAR_5, VAR_7);

 VAR_9->irq = VAR_5;
 VAR_9->vector = VAR_6;
 VAR_9->cpu = VAR_11;
 FUNC_2();


 if (VAR_5 == VAR_0) {
  VAR_8->ipi_vec = VAR_9 - VAR_8->intvecs;
  return;
 }

 if (FUNC_6()) {
  FUNC_5(VAR_8->ibm_set_xive, 3, 1, VAR_5, VAR_11,
      VAR_2, &VAR_10);
  FUNC_8(VAR_4, VAR_5, VAR_9);
 }
}

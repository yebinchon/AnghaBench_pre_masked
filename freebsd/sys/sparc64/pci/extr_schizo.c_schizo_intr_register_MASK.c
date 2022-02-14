
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct schizo_softc {int sc_ign; int sc_dev; } ;
struct schizo_icarg {void* sica_clr; void* sica_map; struct schizo_softc* sica_sc; } ;
typedef void* bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct schizo_softc*,void*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct schizo_icarg*,int ) ;
 int FUNC_4 (int ,int *,struct schizo_icarg*) ;
 struct schizo_icarg* FUNC_5 (int,int ,int ) ;
 scalar_t__ FUNC_6 (struct schizo_softc*,int ,void**,void**) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(struct schizo_softc *VAR_5, u_int VAR_6)
{
 struct schizo_icarg *VAR_7;
 bus_addr_t VAR_8, VAR_9;
 int VAR_10;

 if (FUNC_6(VAR_5, VAR_6, &VAR_9, &VAR_8) == 0)
  return (VAR_1);
 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2, VAR_3);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 VAR_7->sica_sc = VAR_5;
 VAR_7->sica_map = VAR_9;
 VAR_7->sica_clr = VAR_8;





 VAR_10 = (FUNC_4(FUNC_0(VAR_5->sc_ign, VAR_6),
     &VAR_4, VAR_7));
 if (VAR_10 != 0)
  FUNC_3(VAR_7, VAR_2);
 return (VAR_10);
}

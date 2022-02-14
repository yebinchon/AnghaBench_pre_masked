
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpic_cpcht_softc {int sc_ht_mtx; } ;
typedef int phandle_t ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct openpic_cpcht_softc* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int,int ,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct openpic_cpcht_softc *VAR_7;
 phandle_t VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_2(VAR_6);
 VAR_9 = FUNC_3(VAR_6, VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);





 VAR_7 = FUNC_0(VAR_6);
 FUNC_1(&VAR_7->sc_ht_mtx, "htpic", ((void*)0), VAR_3);
 for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
  FUNC_4(VAR_6, VAR_10, VAR_2, VAR_0);
 for (VAR_10 = 4; VAR_10 < 124; VAR_10++)
  FUNC_4(VAR_6, VAR_10, VAR_1, VAR_0);






 if (VAR_6 == VAR_5)
  VAR_4 = VAR_8;

 return (0);
}

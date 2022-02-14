
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct fire_softc {int sc_ign; } ;
struct fire_msiqarg {int dummy; } ;
struct fire_icarg {void* fica_clr; void* fica_map; struct fire_softc* fica_sc; } ;
typedef void* bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct fire_softc*,scalar_t__,void**,void**) ;
 int VAR_7 ;
 int FUNC_2 (struct fire_icarg*,int ) ;
 int FUNC_3 (int ,int *,struct fire_icarg*) ;
 struct fire_icarg* FUNC_4 (int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct fire_softc *VAR_8, u_int VAR_9)
{
 struct fire_icarg *VAR_10;
 bus_addr_t VAR_11, VAR_12;
 int VAR_13;

 if (FUNC_1(VAR_8, VAR_9, &VAR_12, &VAR_11) == 0)
  return (VAR_1);
 VAR_10 = FUNC_4((VAR_9 >= VAR_2 && VAR_9 <= VAR_3) ?
     sizeof(struct fire_msiqarg) : sizeof(struct fire_icarg), VAR_4,
     VAR_5 | VAR_6);
 if (VAR_10 == ((void*)0))
  return (VAR_0);
 VAR_10->fica_sc = VAR_8;
 VAR_10->fica_map = VAR_12;
 VAR_10->fica_clr = VAR_11;
 VAR_13 = (FUNC_3(FUNC_0(VAR_8->sc_ign, VAR_9),
     &VAR_7, VAR_10));
 if (VAR_13 != 0)
  FUNC_2(VAR_10, VAR_4);
 return (VAR_13);
}

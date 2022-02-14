
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timecounter {struct fire_softc* tc_priv; } ;
struct fire_softc {int dummy; } ;


 int FUNC_0 (struct fire_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_1(struct timecounter *VAR_2)
{
 struct fire_softc *VAR_3;

 VAR_3 = VAR_2->tc_priv;
 return (FUNC_0(VAR_3, VAR_0) & VAR_1);
}

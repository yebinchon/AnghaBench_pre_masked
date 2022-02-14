
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timecounter {struct schizo_softc* tc_priv; } ;
struct schizo_softc {int dummy; } ;


 int FUNC_0 (struct schizo_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u_int
FUNC_1(struct timecounter *VAR_3)
{
 struct schizo_softc *VAR_4;

 VAR_4 = VAR_3->tc_priv;
 return ((FUNC_0(VAR_4, VAR_0) &
     (VAR_2 << VAR_1)) >>
     VAR_1);
}

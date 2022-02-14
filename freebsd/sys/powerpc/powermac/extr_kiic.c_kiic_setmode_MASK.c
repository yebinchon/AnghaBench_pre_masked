
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct kiic_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct kiic_softc*,int ) ;
 int FUNC_2 (struct kiic_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct kiic_softc *VAR_2, u_int VAR_3)
{
 u_int VAR_4;

 FUNC_0((VAR_3 & ~VAR_0) == 0, ("bad mode"));
 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_3;
 FUNC_2(VAR_2, VAR_1, VAR_4);
}

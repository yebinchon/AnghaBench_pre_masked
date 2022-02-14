
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
struct grackle_softc {int sc_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct grackle_softc *VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, u_int VAR_5)
{
 u_int32_t VAR_6;





 VAR_6 = (VAR_2 << 16) | (VAR_3 << 11) | (VAR_4 << 8) | (VAR_5 & 0xFC)
     | VAR_0;

 FUNC_1(VAR_1->sc_addr, VAR_6);
 (void) FUNC_0(VAR_1->sc_addr);

 return (1);
}

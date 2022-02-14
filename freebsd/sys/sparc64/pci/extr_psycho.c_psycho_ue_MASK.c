
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;
struct psycho_softc {int sc_dev; int sc_is; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psycho_softc*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4)
{
 struct psycho_softc *VAR_5 = VAR_4;
 uint64_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_7 = FUNC_0(VAR_5, VAR_2);






 if ((VAR_7 & VAR_3) != 0)
  FUNC_2(VAR_5->sc_is, VAR_6);
 FUNC_3("%s: uncorrectable DMA error AFAR %#lx AFSR %#lx",
     FUNC_1(VAR_5->sc_dev), (u_long)VAR_6, (u_long)VAR_7);
 return (VAR_0);
}

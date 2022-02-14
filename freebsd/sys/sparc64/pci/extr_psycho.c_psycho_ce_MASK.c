
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_long ;
struct psycho_softc {int sc_mtx; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct psycho_softc*,int ) ;
 int FUNC_1 (struct psycho_softc*,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3)
{
 struct psycho_softc *VAR_4 = VAR_3;
 uint64_t VAR_5, VAR_6;

 FUNC_3(VAR_4->sc_mtx);
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_6 = FUNC_0(VAR_4, VAR_2);
 FUNC_2(VAR_4->sc_dev, "correctable DMA error AFAR %#lx "
     "AFSR %#lx\n", (u_long)VAR_5, (u_long)VAR_6);

 FUNC_1(VAR_4, VAR_2, VAR_6);
 FUNC_4(VAR_4->sc_mtx);
 return (VAR_0);
}

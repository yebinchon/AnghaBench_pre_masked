
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_long ;
struct psycho_softc {scalar_t__ sc_half; int sc_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct psycho_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3)
{
 struct psycho_softc *VAR_4 = VAR_3;
 uint64_t VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_6 = FUNC_0(VAR_4, VAR_2);
 FUNC_2("%s: PCI bus %c error AFAR %#lx AFSR %#lx",
     FUNC_1(VAR_4->sc_dev), 'A' + VAR_4->sc_half, (u_long)VAR_5,
     (u_long)VAR_6);
 return (VAR_0);
}

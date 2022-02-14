
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct schizo_softc {scalar_t__ sc_mode; int sc_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct schizo_softc*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,unsigned long long) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3)
{
 struct schizo_softc *VAR_4 = VAR_3;
 uint64_t VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 FUNC_2("%s: %s error %#llx", FUNC_1(VAR_4->sc_dev),
     VAR_4->sc_mode == VAR_1 ? "JBus" : "Safari",
     (unsigned long long)VAR_5);
 return (VAR_0);
}

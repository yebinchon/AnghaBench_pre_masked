
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atibl_softc {int sc_memr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct atibl_softc *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3->sc_memr, VAR_2);

 VAR_5 = ((VAR_4 & VAR_0) >>
     VAR_1);
 if (VAR_5 != 0)
  VAR_5 = ((VAR_5 - 5) * 2) / 5;

 return (VAR_5);
}

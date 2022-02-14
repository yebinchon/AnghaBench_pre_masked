
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvbl_softc {int sc_memr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nvbl_softc *VAR_5, int VAR_6)
{
 uint32_t VAR_7;

 if (VAR_6 > 100)
  VAR_6 = 100;

 if (VAR_6 < 0)
  VAR_6 = 0;

 if (VAR_6 > 0)
  VAR_6 = (VAR_6 * VAR_1) + VAR_0;

 VAR_7 = FUNC_0(VAR_5->sc_memr, VAR_4) & 0xffff;
 VAR_7 |= VAR_2 | (VAR_6 << VAR_3);
 FUNC_1(VAR_5->sc_memr, VAR_4, VAR_7);

 return (0);
}

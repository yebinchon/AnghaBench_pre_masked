
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nvbl_softc {int sc_memr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct nvbl_softc *VAR_3)
{
 uint16_t VAR_4;

 VAR_4 = FUNC_0(VAR_3->sc_memr, VAR_2) & 0x7fff;

 if (VAR_4 < VAR_0)
  return 0;

 VAR_4 = (VAR_4 - VAR_0) / VAR_1;

 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_request {size_t unit; int parent; } ;
struct ata_kauai_softc {int* udmaconf; int* wdmaconf; int* pioconf; int sc_memr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_request*) ;
 int FUNC_1 (int ,int ,int) ;
 struct ata_kauai_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ata_request *VAR_2)
{
 struct ata_kauai_softc *VAR_3 = FUNC_2(VAR_2->parent);

 FUNC_1(VAR_3->sc_memr, VAR_1, VAR_3->udmaconf[VAR_2->unit]);
 FUNC_1(VAR_3->sc_memr, VAR_0,
     VAR_3->wdmaconf[VAR_2->unit] | VAR_3->pioconf[VAR_2->unit]);

 return FUNC_0(VAR_2);
}

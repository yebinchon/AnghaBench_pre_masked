
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_request {size_t unit; int parent; } ;
struct ata_macio_softc {int* udmaconf; int* wdmaconf; int* pioconf; int sc_mem; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_request*) ;
 int FUNC_1 (int ,int ,int) ;
 struct ata_macio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ata_request *VAR_1)
{
 struct ata_macio_softc *VAR_2 = FUNC_2(VAR_1->parent);

 FUNC_1(VAR_2->sc_mem, VAR_0,
     VAR_2->udmaconf[VAR_1->unit] | VAR_2->wdmaconf[VAR_1->unit]
     | VAR_2->pioconf[VAR_1->unit]);

 return FUNC_0(VAR_1);
}

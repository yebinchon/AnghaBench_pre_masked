
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lsi64854_softc {int sc_buffer_dmat; int sc_dmamap; int * setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lsi64854_softc*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(struct lsi64854_softc *VAR_3)
{

 if (VAR_3->setup != ((void*)0)) {
  FUNC_3(VAR_3->sc_buffer_dmat, VAR_3->sc_dmamap,
      (FUNC_0(VAR_3) & VAR_2) != 0 ?
      VAR_0 : VAR_1);
  FUNC_4(VAR_3->sc_buffer_dmat, VAR_3->sc_dmamap);
  FUNC_2(VAR_3->sc_buffer_dmat, VAR_3->sc_dmamap);
  FUNC_1(VAR_3->sc_buffer_dmat);
 }

 return (0);
}

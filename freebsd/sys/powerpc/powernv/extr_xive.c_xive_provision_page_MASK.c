
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xive_softc {int sc_prov_page_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(struct xive_softc *VAR_4)
{
 void *VAR_5;
 int VAR_6;

 do {
  VAR_5 = FUNC_0(VAR_4->sc_prov_page_size, VAR_1, 0,
      0, VAR_0,
      VAR_4->sc_prov_page_size, VAR_4->sc_prov_page_size);

  VAR_6 = FUNC_1(VAR_2, -1,
      FUNC_2(VAR_5));
 } while (VAR_6 == VAR_3);

 return (0);
}

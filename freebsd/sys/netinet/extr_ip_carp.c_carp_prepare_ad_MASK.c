
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct carp_softc {int sc_counter; scalar_t__ sc_init_counter; } ;
struct carp_header {int carp_md; void** carp_counter; } ;
typedef int sc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct carp_softc**,struct m_tag*,int) ;
 int FUNC_3 (struct carp_softc*,void**,int ) ;
 int VAR_3 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct mbuf*) ;
 struct m_tag* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static int
FUNC_8(struct mbuf *VAR_4, struct carp_softc *VAR_5, struct carp_header *VAR_6)
{
 struct m_tag *VAR_7;

 if (VAR_5->sc_init_counter) {

  VAR_5->sc_counter = FUNC_1();
  VAR_5->sc_counter = VAR_5->sc_counter << 32;
  VAR_5->sc_counter += FUNC_1();
 } else
  VAR_5->sc_counter++;

 VAR_6->carp_counter[0] = FUNC_4((VAR_5->sc_counter>>32)&0xffffffff);
 VAR_6->carp_counter[1] = FUNC_4(VAR_5->sc_counter&0xffffffff);

 FUNC_3(VAR_5, VAR_6->carp_counter, VAR_6->carp_md);


 if ((VAR_7 = FUNC_6(VAR_2, sizeof(struct carp_softc *),
     VAR_1)) == ((void*)0)) {
  FUNC_5(VAR_4);
  FUNC_0(VAR_3);
  return (VAR_0);
 }
 FUNC_2(&VAR_5, VAR_7 + 1, sizeof(VAR_5));
 FUNC_7(VAR_4, VAR_7);

 return (0);
}

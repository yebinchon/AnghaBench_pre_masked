
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lsi64854_softc {int sc_dodrain; int sc_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct lsi64854_softc*) ;
 int FUNC_2 (struct lsi64854_softc*,int) ;
 int FUNC_3 (int ,char*,int,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_8)
{
 struct lsi64854_softc *VAR_9 = VAR_8;
 uint32_t VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_1(VAR_9);


 VAR_12 = ((VAR_10 & VAR_4) != 0) ? 1 : 0;

 if (VAR_10 & (VAR_3 | VAR_6)) {
  FUNC_3(VAR_9->sc_dev, "error: csr=%b\n", VAR_10,
      VAR_0);
  VAR_10 &= ~VAR_7;

  VAR_10 |= VAR_5 | VAR_6;
  FUNC_2(VAR_9, VAR_10);

  VAR_9->sc_dodrain = 1;
  return (-1);
 }


 if (VAR_9->sc_dodrain) {
  VAR_11 = 10;
  VAR_10 |= VAR_1;
  FUNC_2(VAR_9, VAR_10);
  while (VAR_11-- > 0 && (FUNC_1(VAR_9) & VAR_2))
   FUNC_0(1);
  VAR_9->sc_dodrain = 0;
 }

 return (VAR_12);
}

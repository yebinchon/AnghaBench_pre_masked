
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pn_softc {int errata; int sgtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__* VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int
FUNC_9(struct pn_softc *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 uint64_t VAR_12, VAR_13;

 VAR_12 = FUNC_7(VAR_2);
 VAR_10 = FUNC_3(VAR_12);
 VAR_11 = FUNC_4(VAR_12);


 if (VAR_8 == VAR_10 && VAR_9 == VAR_11)
  return (0);

 VAR_13 = FUNC_7(VAR_1) & VAR_4;

 VAR_13 |= FUNC_0(VAR_8);
 VAR_13 |= FUNC_2(VAR_9);
 VAR_13 |= FUNC_1(VAR_7->sgtc);

 if (VAR_7->errata & VAR_0)
  FUNC_5();

 if (VAR_6[VAR_8] < VAR_6[VAR_10]) {
  FUNC_8(VAR_1, VAR_13 | VAR_3);
  if (VAR_9 != VAR_11)
   FUNC_8(VAR_1, VAR_13 | VAR_5);
 } else {
  FUNC_8(VAR_1, VAR_13 | VAR_5);
  if (VAR_8 != VAR_10)
   FUNC_8(VAR_1, VAR_13 | VAR_3);
 }

 if (VAR_7->errata & VAR_0)
  FUNC_6();

 return (0);
}

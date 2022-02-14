
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pgprot_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static inline void FUNC_7(pte_t *VAR_7, unsigned long VAR_8,
    unsigned long VAR_9, unsigned long VAR_10,
    unsigned long VAR_11)
{
 unsigned long VAR_12;
 unsigned long VAR_13;
 pgprot_t VAR_14 = FUNC_2(VAR_3 | VAR_4 | VAR_5
    | VAR_6 | VAR_11);

 VAR_8 &= ~VAR_1;
 VAR_12 = VAR_8 + VAR_9;
 if (VAR_12 > VAR_2)
  VAR_12 = VAR_2;
 if (VAR_8 >= VAR_12)
  FUNC_0();
 VAR_13 = FUNC_1(VAR_10);
 do {
  if (!FUNC_5(*VAR_7)) {
   FUNC_4("remap_area_pte: page already exists\n");
   FUNC_0();
  }
  FUNC_6(VAR_7, FUNC_3(VAR_13, VAR_14));
  VAR_8 += VAR_0;
  VAR_13++;
  VAR_7++;
 } while (VAR_8 && (VAR_8 < VAR_12));
}

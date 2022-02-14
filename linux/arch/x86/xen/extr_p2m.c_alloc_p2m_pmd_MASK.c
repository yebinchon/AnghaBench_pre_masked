
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pte_t ;
typedef int pmd_t ;
struct TYPE_3__ {int p2m_generation; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int * FUNC_6 (unsigned long,unsigned int*) ;
 int * FUNC_7 (unsigned long) ;
 int VAR_6 ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 () ;

__attribute__((used)) static pte_t *FUNC_14(unsigned long VAR_7, pte_t *VAR_8)
{
 pte_t *VAR_9;
 pte_t *VAR_10[VAR_2];
 pmd_t *VAR_11;
 unsigned int VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 int VAR_15;


 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  VAR_10[VAR_15] = FUNC_3();
  if (!VAR_10[VAR_15]) {
   for (VAR_15--; VAR_15 >= 0; VAR_15--)
    FUNC_5(VAR_10[VAR_15]);

   return ((void*)0);
  }
 }

 VAR_14 = VAR_7 & ~(VAR_3 * VAR_2 - 1);

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  FUNC_4(VAR_10[VAR_15], VAR_8);
  FUNC_8(&VAR_5, FUNC_1(VAR_10[VAR_15]) >> VAR_1);

  VAR_11 = FUNC_7(VAR_14);
  FUNC_0(!VAR_11);

  FUNC_11(&VAR_6, VAR_13);

  VAR_9 = FUNC_6(VAR_14, &VAR_12);
  if (VAR_9 == VAR_8) {
   VAR_0->arch.p2m_generation++;
   FUNC_13();
   FUNC_10(VAR_11,
    FUNC_2(FUNC_1(VAR_10[VAR_15]) | VAR_4));
   FUNC_13();
   VAR_0->arch.p2m_generation++;
   VAR_10[VAR_15] = ((void*)0);
  }

  FUNC_12(&VAR_6, VAR_13);

  if (VAR_10[VAR_15]) {
   FUNC_9(FUNC_1(VAR_10[VAR_15]) >> VAR_1);
   FUNC_5(VAR_10[VAR_15]);
  }

  VAR_14 += VAR_3;
 }

 return FUNC_6(VAR_7, &VAR_12);
}

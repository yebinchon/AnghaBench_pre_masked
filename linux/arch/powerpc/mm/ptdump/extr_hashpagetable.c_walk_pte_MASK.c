
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int seq; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (struct pg_state*,unsigned long,unsigned long) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int * FUNC_2 (int *,int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pg_state *VAR_9, pmd_t *VAR_10, unsigned long VAR_11)
{
 pte_t *VAR_12 = FUNC_2(VAR_10, 0);
 unsigned long VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;

 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++, VAR_12++) {
  VAR_13 = VAR_11 + VAR_16 * VAR_4;
  VAR_14 = FUNC_3(*VAR_12);

  if (VAR_13 < VAR_6)
   VAR_15 = VAR_8;
  else
   VAR_15 = VAR_7;


  if (FUNC_0(VAR_0) &&
      ((VAR_14 & VAR_2) == VAR_2 ||
       (VAR_14 & VAR_1) == VAR_1))
   VAR_15 = VAR_7;


  VAR_17 = FUNC_1(VAR_9, VAR_13, VAR_15);

  if (((VAR_14 & VAR_3) != VAR_3)
    && (VAR_17 != -1)) {

   FUNC_4(VAR_9->seq, "page probably bolted before linux"
    " pagetables were set: addr:%lx, pteval:%lx\n",
    VAR_13, VAR_14);
  }
 }
}

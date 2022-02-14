
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;
struct lpte {int pte_lo; int pte_hi; } ;
struct dump_context {int ptex; int blksz; int ptex_end; } ;
typedef int mmu_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int,int ,int ,int *,int *,int *) ;

__attribute__((used)) static void *
FUNC_2(mmu_t VAR_1, void *VAR_2, void *VAR_3, u_long *VAR_4)
{
 struct dump_context *VAR_5;
 struct lpte VAR_6, *VAR_7;
 int VAR_8;
 uint64_t VAR_9;
 u_long VAR_10, VAR_11;

 VAR_5 = (struct dump_context *)VAR_2;
 VAR_7 = (struct lpte *)VAR_3;
 VAR_8 = 0;
 VAR_10 = VAR_5->ptex;
 VAR_11 = VAR_10 + VAR_5->blksz / sizeof(struct lpte);
 VAR_11 = FUNC_0(VAR_11, VAR_5->ptex_end);
 *VAR_4 = (VAR_11 - VAR_10) * sizeof(struct lpte);

 if (*VAR_4 == 0)
  return (((void*)0));

 for (; VAR_10 < VAR_11; VAR_10++) {
  FUNC_1(VAR_0, 0, VAR_10, 0, 0,
   &VAR_6.pte_hi, &VAR_6.pte_lo, &VAR_9);
  VAR_7[VAR_8++] = VAR_6;
 }

 VAR_5->ptex = VAR_10;
 return (VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfp_pin {unsigned long mfpr_run; unsigned long mfpr_lpm; int mfpr_off; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct mfp_pin*) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct mfp_pin *VAR_2)
{
 if (FUNC_0(VAR_2)) {
  unsigned long VAR_3 = (VAR_2->mfpr_run & ~VAR_0) | VAR_1;
  if (VAR_3 != VAR_2->mfpr_run)
   FUNC_1(VAR_2->mfpr_off, VAR_3);
  if (VAR_2->mfpr_lpm != VAR_3)
   FUNC_1(VAR_2->mfpr_off, VAR_2->mfpr_lpm);
 }
}

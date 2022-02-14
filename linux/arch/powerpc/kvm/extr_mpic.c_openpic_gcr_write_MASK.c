
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct openpic {int gcr; int mpic_mode_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct openpic*) ;

__attribute__((used)) static void FUNC_1(struct openpic *VAR_1, uint64_t VAR_2)
{
 if (VAR_2 & VAR_0) {
  FUNC_0(VAR_1);
  return;
 }

 VAR_1->gcr &= ~VAR_1->mpic_mode_mask;
 VAR_1->gcr |= VAR_2 & VAR_1->mpic_mode_mask;
}

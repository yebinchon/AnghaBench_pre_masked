
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {unsigned long x86_virt_bits; } ;


 unsigned long FUNC_0 (struct mm_struct*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (struct mm_struct*) ;

__attribute__((used)) static unsigned long FUNC_2(struct mm_struct *VAR_1,
  unsigned long VAR_2)
{
 if (FUNC_1(VAR_1)) {
  int VAR_3 = 8;



  VAR_2 &= ((1UL << VAR_0.x86_virt_bits) - 1);
  return (VAR_2 / FUNC_0(VAR_1)) * VAR_3;
 } else {
  int VAR_4 = 4;



  return (VAR_2 / FUNC_0(VAR_1)) * VAR_4;
 }







}

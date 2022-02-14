
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long asce; int gmap_asce; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int *,unsigned long,unsigned long,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mm_struct *VAR_4, unsigned long VAR_5,
       pte_t *VAR_6, int VAR_7)
{
 unsigned long VAR_8, VAR_9;

 if (VAR_3) {
  VAR_8 = 0;
  VAR_9 = FUNC_0(VAR_4->context.gmap_asce);
  if (VAR_9 == 0UL || VAR_7)
   VAR_8 |= VAR_2;
  if (VAR_9 != -1UL) {
   VAR_9 = VAR_9 ? : VAR_4->context.asce;
   VAR_8 |= VAR_0;
  }
  FUNC_1(VAR_5, VAR_6, VAR_8, VAR_9, VAR_1);
 } else {
  FUNC_1(VAR_5, VAR_6, 0, 0, VAR_1);
 }
}

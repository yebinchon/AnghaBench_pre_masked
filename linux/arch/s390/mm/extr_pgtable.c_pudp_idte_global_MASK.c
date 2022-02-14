
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asce; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pud_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int *,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mm_struct *VAR_5,
        unsigned long VAR_6, pud_t *VAR_7)
{
 if (VAR_4)
  FUNC_1(VAR_6, VAR_7, VAR_2 | VAR_1,
       VAR_5->context.asce, VAR_0);
 else if (VAR_3)
  FUNC_1(VAR_6, VAR_7, 0, 0, VAR_0);
 else




  FUNC_0((pmd_t *) VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asce; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pud_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned long,int *,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct mm_struct *VAR_4,
       unsigned long VAR_5, pud_t *VAR_6)
{
 if (VAR_3)
  FUNC_0(VAR_5, VAR_6, VAR_2 | VAR_0,
       VAR_4->context.asce, VAR_1);
 else
  FUNC_0(VAR_5, VAR_6, 0, 0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* t_tabstops; } ;
typedef TYPE_1__ teken_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(teken_t *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (VAR_2 >= VAR_0)
  return;

 VAR_3 = VAR_2 / (sizeof(unsigned int) * 8);
 VAR_4 = VAR_2 % (sizeof(unsigned int) * 8);

 VAR_1->t_tabstops[VAR_3] &= ~(1U << VAR_4);
}

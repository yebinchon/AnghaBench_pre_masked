
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long date; } ;
typedef TYPE_1__ entry_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0 (long VAR_1, entry_t *VAR_2, entry_t *VAR_3) {
  long VAR_4 = VAR_1, VAR_5 = VAR_3->date;
  if (VAR_4 > VAR_5) { VAR_4 = VAR_5; VAR_5 = VAR_1; }
  if (VAR_2->date < VAR_4) { VAR_2->date = VAR_4; VAR_0++; }
  else if (VAR_2->date > VAR_5) { VAR_2->date = VAR_5; VAR_0++; }
}

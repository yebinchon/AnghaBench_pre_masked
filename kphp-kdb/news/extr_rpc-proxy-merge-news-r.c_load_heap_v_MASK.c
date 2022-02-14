
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int owner; int place; } ;
struct TYPE_5__ {int* cur; TYPE_1__ id; } ;
typedef TYPE_2__ gh_entry_t ;



__attribute__((used)) static inline void FUNC_0 (gh_entry_t *VAR_0) {
  int *VAR_1 = VAR_0->cur;
  VAR_0->id.type = VAR_1[0];
  VAR_0->id.owner = VAR_1[1];
  VAR_0->id.place = VAR_1[2];
}

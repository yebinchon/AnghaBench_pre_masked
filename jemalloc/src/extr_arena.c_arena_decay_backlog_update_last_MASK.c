
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nunpurged; size_t* backlog; size_t ceil_npages; } ;
typedef TYPE_1__ arena_decay_t ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(arena_decay_t *VAR_2, size_t VAR_3) {
 size_t VAR_4 = (VAR_3 > VAR_2->nunpurged) ?
     VAR_3 - VAR_2->nunpurged : 0;
 VAR_2->backlog[VAR_0-1] = VAR_4;

 if (VAR_1) {
  if (VAR_3 > VAR_2->ceil_npages) {
   VAR_2->ceil_npages = VAR_3;
  }
  size_t VAR_5 = FUNC_0(VAR_2);
  FUNC_1(VAR_2->ceil_npages >= VAR_5);
  if (VAR_2->ceil_npages > VAR_5) {
   VAR_2->ceil_npages = VAR_5;
  }
 }
}

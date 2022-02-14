
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int treespace_t ;
typedef int treeref_t ;
struct TYPE_4__ {int free_queue_cnt; int * free_queue; } ;
struct TYPE_3__ {int left; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;

inline void FUNC_2 (treespace_t VAR_1, treeref_t VAR_2) {
  int VAR_3 = FUNC_1() & (VAR_0->free_queue_cnt - 1);
  FUNC_0(VAR_2)->left = VAR_0->free_queue[VAR_3*2];
  VAR_0->free_queue[VAR_3*2] = VAR_2;
  VAR_0->free_queue[VAR_3*2+1]++;
}

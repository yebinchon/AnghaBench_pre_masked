
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; struct TYPE_4__* next; } ;
typedef TYPE_1__ lwClip ;



lwClip *FUNC_0( lwClip *VAR_0, int VAR_1 ){
 lwClip *VAR_2;

 VAR_2 = VAR_0;
 while ( VAR_2 ) {
  if ( VAR_2->index == VAR_1 ) {
   break;
  }
  VAR_2 = VAR_2->next;
 }
 return VAR_2;
}

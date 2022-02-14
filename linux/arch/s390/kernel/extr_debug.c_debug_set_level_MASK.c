
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int level; int lock; int name; } ;
typedef TYPE_1__ debug_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(debug_info_t *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_2)
  return;
 FUNC_1(&VAR_2->lock, VAR_4);
 if (VAR_3 == VAR_1) {
  VAR_2->level = VAR_1;
  FUNC_0("%s: switched off\n", VAR_2->name);
 } else if ((VAR_3 > VAR_0) || (VAR_3 < 0)) {
  FUNC_0("%s: level %i is out of range (%i - %i)\n",
   VAR_2->name, VAR_3, 0, VAR_0);
 } else {
  VAR_2->level = VAR_3;
 }
 FUNC_2(&VAR_2->lock, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef int mspace ;
typedef TYPE_2__* msegmentptr ;
typedef int flag_t ;
struct TYPE_7__ {char* base; size_t size; int sflags; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__ seg; } ;


 scalar_t__ FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

size_t FUNC_3(mspace VAR_2) {
  size_t VAR_3 = 0;
  mstate VAR_4 = (mstate)VAR_2;
  if (FUNC_2(VAR_4)) {
    msegmentptr VAR_5 = &VAR_4->seg;
    while (VAR_5 != 0) {
      char* VAR_6 = VAR_5->base;
      size_t VAR_7 = VAR_5->size;
      flag_t VAR_8 = VAR_5->sflags;
      VAR_5 = VAR_5->next;
      if ((VAR_8 & VAR_1) && !(VAR_8 & VAR_0) &&
   FUNC_0(VAR_6, VAR_7) == 0)
 VAR_3 += VAR_7;
    }
  }
  else {
    FUNC_1(VAR_4,VAR_4);
  }
  return VAR_3;
}

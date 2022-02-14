
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw_message {scalar_t__ magic; TYPE_1__* first; } ;
struct TYPE_2__ {int refcnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct raw_message*,struct raw_message*,int) ;
 int VAR_2 ;

void FUNC_2 (struct raw_message *VAR_3, struct raw_message *VAR_4) {
  FUNC_0 (VAR_4->magic == VAR_0 || VAR_4->magic == VAR_1);
  FUNC_1 (VAR_3, VAR_4, sizeof (struct raw_message));
  if (VAR_4->magic == VAR_0 && VAR_4->first) {
    VAR_4->first->refcnt++;
  }
  VAR_2 ++;
}

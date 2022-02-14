
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* wi_private_t ;
struct wi_private {int dummy; } ;
struct TYPE_5__ {void* partial; void* in; } ;


 void* FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

wi_private_t FUNC_4() {
  wi_private_t VAR_0 = (wi_private_t)FUNC_1(sizeof(
        struct wi_private));
  if (VAR_0) {
    FUNC_2(VAR_0, 0, sizeof(struct wi_private));
    VAR_0->in = FUNC_0();
    VAR_0->partial = FUNC_0();
    if (!VAR_0->in || !VAR_0->partial) {
      FUNC_3(VAR_0);
      return ((void*)0);
    }
  }
  return VAR_0;
}

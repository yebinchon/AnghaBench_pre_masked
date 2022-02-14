
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_multi_head {int dummy; } ;
struct in_multi {scalar_t__ inm_refcount; TYPE_1__* inm_ifma; } ;
struct TYPE_2__ {int * ifma_protospec; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct in_multi_head*) ;
 int FUNC_3 (struct in_multi_head*,struct in_multi*,int ) ;
 int FUNC_4 (struct in_multi*) ;
 int VAR_0 ;
 int FUNC_5 (struct in_multi_head*) ;

void
FUNC_6(struct in_multi *VAR_1)
{
 struct in_multi_head VAR_2;

 FUNC_0();
 FUNC_1(VAR_1->inm_refcount > 0);
 if (--VAR_1->inm_refcount == 0) {
  FUNC_2(&VAR_2);
  FUNC_4(VAR_1);
  VAR_1->inm_ifma->ifma_protospec = ((void*)0);
  FUNC_3(&VAR_2, VAR_1, VAR_0);
  FUNC_5(&VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct discovery* oid; } ;
struct discovery {struct discovery* service; int refs; struct discovery* buf_alloc; TYPE_1__ shallow; } ;


 int FUNC_0 (struct discovery*) ;
 int FUNC_1 (int ) ;
 struct discovery* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct discovery *VAR_1)
{
 if (VAR_1) {
  if (VAR_1 == VAR_0)
   VAR_0 = ((void*)0);
  FUNC_0(VAR_1->shallow.oid);
  FUNC_0(VAR_1->buf_alloc);
  FUNC_1(VAR_1->refs);
  FUNC_0(VAR_1->service);
  FUNC_0(VAR_1);
 }
}

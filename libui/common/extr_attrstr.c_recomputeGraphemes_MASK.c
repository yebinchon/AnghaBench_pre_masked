
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int s; int * graphemes; int u16len; int u16; } ;
typedef TYPE_1__ uiAttributedString ;


 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(uiAttributedString *VAR_0)
{
 if (VAR_0->graphemes != ((void*)0))
  return;
 if (FUNC_0()) {
  VAR_0->graphemes = FUNC_1(VAR_0->u16, VAR_0->u16len);
  return;
 }
 VAR_0->graphemes = FUNC_1(VAR_0->s, VAR_0->len);
}

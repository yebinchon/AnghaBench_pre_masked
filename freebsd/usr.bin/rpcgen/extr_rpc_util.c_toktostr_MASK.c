
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; char const* str; } ;
typedef TYPE_1__ token ;
typedef scalar_t__ tok_kind ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(tok_kind VAR_2)
{
 token *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->kind != VAR_0 && VAR_3->kind != VAR_2; VAR_3++);
 return (VAR_3->str);
}

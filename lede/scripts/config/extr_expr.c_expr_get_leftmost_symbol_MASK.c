
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct expr* expr; } ;
struct expr {scalar_t__ type; TYPE_1__ left; } ;


 scalar_t__ VAR_0 ;
 struct expr* FUNC_0 (struct expr const*) ;

__attribute__((used)) static inline struct expr *
FUNC_1(const struct expr *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 while (VAR_1->type != VAR_0)
  VAR_1 = VAR_1->left.expr;

 return FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {scalar_t__ type; int flags; } ;
struct TYPE_4__ {struct symbol* sym; } ;
struct TYPE_3__ {struct symbol* sym; struct expr* expr; } ;
struct expr {scalar_t__ type; TYPE_2__ right; TYPE_1__ left; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct expr* FUNC_0 (scalar_t__,struct symbol*,struct symbol*) ;
 struct expr* FUNC_1 (struct symbol*) ;
 struct expr* FUNC_2 (struct expr*) ;
 scalar_t__ FUNC_3 (struct expr*,struct expr*) ;
 int FUNC_4 (struct expr*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_8 ;
 struct symbol VAR_9 ;
 struct symbol VAR_10 ;
 struct symbol VAR_11 ;

__attribute__((used)) static struct expr *FUNC_6(struct expr *VAR_12, struct expr *VAR_13)
{
 struct expr *VAR_14;
 struct symbol *VAR_15, *VAR_16;

 if (FUNC_3(VAR_12, VAR_13))
  return FUNC_2(VAR_12);
 if (VAR_12->type != VAR_1 && VAR_12->type != VAR_4 && VAR_12->type != VAR_3 && VAR_12->type != VAR_2)
  return ((void*)0);
 if (VAR_13->type != VAR_1 && VAR_13->type != VAR_4 && VAR_13->type != VAR_3 && VAR_13->type != VAR_2)
  return ((void*)0);
 if (VAR_12->type == VAR_2) {
  VAR_14 = VAR_12->left.expr;
  if (VAR_14->type != VAR_1 && VAR_14->type != VAR_4 && VAR_14->type != VAR_3)
   return ((void*)0);
  VAR_15 = VAR_14->left.sym;
 } else
  VAR_15 = VAR_12->left.sym;
 if (VAR_13->type == VAR_2) {
  if (VAR_13->left.expr->type != VAR_3)
   return ((void*)0);
  VAR_16 = VAR_13->left.expr->left.sym;
 } else
  VAR_16 = VAR_13->left.sym;
 if (VAR_15 != VAR_16)
  return ((void*)0);
 if (VAR_15->type != VAR_6 && VAR_15->type != VAR_7)
  return ((void*)0);

 if ((VAR_12->type == VAR_3 && VAR_13->type == VAR_1 && VAR_13->right.sym == &VAR_11) ||
     (VAR_13->type == VAR_3 && VAR_12->type == VAR_1 && VAR_12->right.sym == &VAR_11))

  return FUNC_0(VAR_1, VAR_15, &VAR_11);

 if ((VAR_12->type == VAR_3 && VAR_13->type == VAR_4 && VAR_13->right.sym == &VAR_10) ||
     (VAR_13->type == VAR_3 && VAR_12->type == VAR_4 && VAR_12->right.sym == &VAR_10))

  return FUNC_1(VAR_15);

 if ((VAR_12->type == VAR_3 && VAR_13->type == VAR_4 && VAR_13->right.sym == &VAR_9) ||
     (VAR_13->type == VAR_3 && VAR_12->type == VAR_4 && VAR_12->right.sym == &VAR_9))

  return FUNC_0(VAR_1, VAR_15, &VAR_11);

 if (VAR_15->type == VAR_7) {
  if (VAR_12->type == VAR_1 && VAR_13->type == VAR_4) {

   VAR_16 = VAR_12->right.sym;
   if ((VAR_13->right.sym->flags & VAR_5) && (VAR_16->flags & VAR_5))
    return VAR_16 != VAR_13->right.sym ? FUNC_0(VAR_1, VAR_15, VAR_16)
            : FUNC_1(&VAR_10);
  }
  if (VAR_12->type == VAR_4 && VAR_13->type == VAR_1) {

   VAR_16 = VAR_13->right.sym;
   if ((VAR_12->right.sym->flags & VAR_5) && (VAR_16->flags & VAR_5))
    return VAR_16 != VAR_12->right.sym ? FUNC_0(VAR_1, VAR_15, VAR_16)
            : FUNC_1(&VAR_10);
  }
  if (VAR_12->type == VAR_4 && VAR_13->type == VAR_4 &&
      ((VAR_12->right.sym == &VAR_11 && VAR_13->right.sym == &VAR_10) ||
       (VAR_12->right.sym == &VAR_10 && VAR_13->right.sym == &VAR_11)))

   return FUNC_0(VAR_1, VAR_15, &VAR_9);

  if (VAR_12->type == VAR_4 && VAR_13->type == VAR_4 &&
      ((VAR_12->right.sym == &VAR_11 && VAR_13->right.sym == &VAR_9) ||
       (VAR_12->right.sym == &VAR_9 && VAR_13->right.sym == &VAR_11)))

   return FUNC_0(VAR_1, VAR_15, &VAR_10);

  if (VAR_12->type == VAR_4 && VAR_13->type == VAR_4 &&
      ((VAR_12->right.sym == &VAR_9 && VAR_13->right.sym == &VAR_10) ||
       (VAR_12->right.sym == &VAR_10 && VAR_13->right.sym == &VAR_9)))

   return FUNC_0(VAR_1, VAR_15, &VAR_11);

  if ((VAR_12->type == VAR_3 && VAR_13->type == VAR_1 && VAR_13->right.sym == &VAR_9) ||
      (VAR_13->type == VAR_3 && VAR_12->type == VAR_1 && VAR_12->right.sym == &VAR_9) ||
      (VAR_12->type == VAR_3 && VAR_13->type == VAR_4 && VAR_13->right.sym == &VAR_11) ||
      (VAR_13->type == VAR_3 && VAR_12->type == VAR_4 && VAR_12->right.sym == &VAR_11))
   return ((void*)0);
 }

 if (VAR_0) {
  FUNC_5("optimize (");
  FUNC_4(VAR_12, VAR_8);
  FUNC_5(") && (");
  FUNC_4(VAR_13, VAR_8);
  FUNC_5(")?\n");
 }
 return ((void*)0);
}

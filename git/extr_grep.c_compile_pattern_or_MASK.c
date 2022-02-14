
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct grep_pat {scalar_t__ token; int pattern; } ;
struct TYPE_3__ {struct grep_expr* right; struct grep_expr* left; } ;
struct TYPE_4__ {TYPE_1__ binary; } ;
struct grep_expr {TYPE_2__ u; int node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct grep_expr* FUNC_0 (struct grep_pat**) ;
 int FUNC_1 (char*,int ) ;
 struct grep_expr* FUNC_2 (int,int) ;

__attribute__((used)) static struct grep_expr *FUNC_3(struct grep_pat **VAR_2)
{
 struct grep_pat *VAR_3;
 struct grep_expr *VAR_4, *VAR_5, *VAR_6;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = *VAR_2;
 if (VAR_4 && VAR_3 && VAR_3->token != VAR_0) {
  VAR_5 = FUNC_3(VAR_2);
  if (!VAR_5)
   FUNC_1("not a pattern expression %s", VAR_3->pattern);
  VAR_6 = FUNC_2(1, sizeof (struct grep_expr));
  VAR_6->node = VAR_1;
  VAR_6->u.binary.left = VAR_4;
  VAR_6->u.binary.right = VAR_5;
  return VAR_6;
 }
 return VAR_4;
}

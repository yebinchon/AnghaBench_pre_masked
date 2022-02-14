
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grep_opt {int columnnum; } ;
struct TYPE_5__ {struct grep_expr* right; struct grep_expr* left; } ;
struct TYPE_6__ {TYPE_1__ binary; struct grep_expr* unary; int atom; } ;
struct grep_expr {int node; int hit; TYPE_2__ u; } ;
typedef int ssize_t ;
struct TYPE_7__ {int rm_so; } ;
typedef TYPE_3__ regmatch_t ;
typedef enum grep_context { ____Placeholder_grep_context } grep_context ;







 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,char*,int,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(struct grep_opt *VAR_0, struct grep_expr *VAR_1, char *VAR_2,
      char *VAR_3, enum grep_context VAR_4, ssize_t *VAR_5,
      ssize_t *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 if (!VAR_1)
  FUNC_0("Not a valid grep expression");
 switch (VAR_1->node) {
 case 128:
  VAR_8 = 1;
  break;
 case 131:
  {
   regmatch_t VAR_9;
   VAR_8 = FUNC_1(VAR_1->u.atom, VAR_2, VAR_3, VAR_4,
           &VAR_9, 0);
   if (VAR_8 && (*VAR_5 < 0 || VAR_9.rm_so < *VAR_5))
    *VAR_5 = VAR_9.rm_so;
  }
  break;
 case 130:



  VAR_8 = !FUNC_2(VAR_0, VAR_1->u.unary, VAR_2, VAR_3, VAR_4, VAR_6, VAR_5,
         0);
  break;
 case 132:
  VAR_8 = FUNC_2(VAR_0, VAR_1->u.binary.left, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, 0);
  if (VAR_8 || VAR_0->columnnum) {





   VAR_8 &= FUNC_2(VAR_0, VAR_1->u.binary.right, VAR_2, VAR_3,
          VAR_4, VAR_5, VAR_6, 0);
  }
  break;
 case 129:
  if (!(VAR_7 || VAR_0->columnnum)) {





   return (FUNC_2(VAR_0, VAR_1->u.binary.left, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6, 0) ||
    FUNC_2(VAR_0, VAR_1->u.binary.right, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6, 0));
  }
  VAR_8 = FUNC_2(VAR_0, VAR_1->u.binary.left, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, 0);
  if (VAR_7)
   VAR_1->u.binary.left->hit |= VAR_8;
  VAR_8 |= FUNC_2(VAR_0, VAR_1->u.binary.right, VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7);
  break;
 default:
  FUNC_0("Unexpected node type (internal error) %d", VAR_1->node);
 }
 if (VAR_7)
  VAR_1->hit |= VAR_8;
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* Tree ;
struct TYPE_9__ {int i; } ;
struct TYPE_10__ {scalar_t__ sym; TYPE_1__ v; } ;
struct TYPE_11__ {scalar_t__ op; TYPE_2__ u; struct TYPE_11__** kids; int type; } ;
typedef scalar_t__ Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (int,int ,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(Tree VAR_10, Tree VAR_11) {
 int VAR_12 = FUNC_0(VAR_11->op);
 Symbol VAR_13;

 if (VAR_10 == 0 || VAR_11 == 0)
  return 0;
 if (FUNC_0(VAR_10->op) == VAR_0 && FUNC_1(VAR_10->kids[0]->op)
 && FUNC_0(VAR_10->kids[1]->op) == VAR_1) {
  VAR_13 = VAR_10->kids[0]->u.sym;
  VAR_10 = VAR_10->kids[1];
 } else
  return 0;
 if ((VAR_12==VAR_7 || VAR_12==VAR_8 || VAR_12==VAR_2 || VAR_12==VAR_9 || VAR_12==VAR_4 || VAR_12==VAR_3)
 && FUNC_0(VAR_11->kids[0]->op) == VAR_6
 && VAR_11->kids[0]->kids[0]->u.sym == VAR_13
 && VAR_11->kids[1]->op == VAR_10->op) {
  VAR_10 = FUNC_2(VAR_12, VAR_11->type, VAR_10, VAR_11->kids[1]);
  if (VAR_10->op == VAR_1+VAR_5)
   return VAR_10->u.v.i;
 }
 return 0;
}

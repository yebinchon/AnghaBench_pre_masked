
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int op; int * syms; TYPE_2__** kids; } ;
struct dag {TYPE_1__ node; } ;
struct TYPE_6__ {int count; } ;
typedef int Symbol ;
typedef TYPE_2__* Node ;


 int VAR_0 ;
 int FUNC_0 (struct dag*,int ) ;

__attribute__((used)) static struct dag *FUNC_1(int VAR_1, Node VAR_2, Node VAR_3, Symbol VAR_4) {
 struct dag *VAR_5;

 FUNC_0(VAR_5, VAR_0);
 VAR_5->node.op = VAR_1;
 if ((VAR_5->node.kids[0] = VAR_2) != ((void*)0))
  ++VAR_2->count;
 if ((VAR_5->node.kids[1] = VAR_3) != ((void*)0))
  ++VAR_3->count;
 VAR_5->node.syms[0] = VAR_4;
 return VAR_5;
}

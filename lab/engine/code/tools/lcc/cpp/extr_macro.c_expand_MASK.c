
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int hideset; scalar_t__ type; struct TYPE_18__* bp; struct TYPE_18__* tp; struct TYPE_18__* lp; } ;
typedef TYPE_1__ Tokenrow ;
typedef TYPE_1__ Token ;
struct TYPE_19__ {TYPE_1__* ap; int vp; } ;
typedef TYPE_3__ Nlist ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__**,int*) ;
 int FUNC_5 (TYPE_1__*,int,TYPE_1__*) ;
 void* FUNC_6 (int,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_1__*,TYPE_1__**) ;
 int FUNC_9 (int,int) ;

void
FUNC_10(Tokenrow *VAR_3, Nlist *VAR_4)
{
 Tokenrow VAR_5;
 int VAR_6, VAR_7, VAR_8;
 Token *VAR_9;
 Tokenrow *VAR_10[VAR_2+1];
 int VAR_11;

 FUNC_0(&VAR_5, VAR_4->vp);
 if (VAR_4->ap==((void*)0))
  VAR_6 = 1;
 else {
  VAR_6 = FUNC_4(VAR_3, VAR_10, &VAR_7);
  if (VAR_7<0) {
   VAR_3->tp++;
   return;
  }
  if (VAR_7 != FUNC_7(VAR_4->ap)) {
   FUNC_3(VAR_0, "Disagreement in number of macro arguments");
   VAR_3->tp->hideset = FUNC_6(VAR_3->tp->hideset, VAR_4);
   VAR_3->tp += VAR_6;
   return;
  }
  FUNC_8(VAR_4, &VAR_5, VAR_10);
  for (VAR_8=0; VAR_8<VAR_7; VAR_8++) {
   FUNC_2(VAR_10[VAR_8]->bp);
   FUNC_2(VAR_10[VAR_8]);
  }
 }
 FUNC_1(&VAR_5);
 VAR_11 = FUNC_6(VAR_3->tp->hideset, VAR_4);
 for (VAR_9=VAR_5.bp; VAR_9<VAR_5.lp; VAR_9++) {
  if (VAR_9->type==VAR_1) {
   if (VAR_9->hideset==0)
    VAR_9->hideset = VAR_11;
   else
    VAR_9->hideset = FUNC_9(VAR_9->hideset, VAR_11);
  }
 }
 VAR_5.tp = VAR_5.bp;
 FUNC_5(VAR_3, VAR_6, &VAR_5);
 VAR_3->tp -= FUNC_7(&VAR_5);
 FUNC_2(VAR_5.bp);
}

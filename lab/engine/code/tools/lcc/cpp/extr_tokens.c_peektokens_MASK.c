
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* tp; TYPE_2__* bp; TYPE_2__* lp; } ;
typedef TYPE_1__ Tokenrow ;
struct TYPE_5__ {int* t; size_t len; int type; int hideset; } ;
typedef TYPE_2__ Token ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

void
FUNC_4(Tokenrow *VAR_3, char *VAR_4)
{
 Token *VAR_5;

 VAR_5 = VAR_3->tp;
 FUNC_1();
 if (VAR_4)
  FUNC_2(VAR_2, "%s ", VAR_4);
 if (VAR_5<VAR_3->bp || VAR_5>VAR_3->lp)
  FUNC_2(VAR_2, "(tp offset %ld) ", (long int) (VAR_5 - VAR_3->bp));
 for (VAR_5=VAR_3->bp; VAR_5<VAR_3->lp && VAR_5<VAR_3->bp+32; VAR_5++) {
  if (VAR_5->type!=VAR_1) {
   int VAR_6 = VAR_5->t[VAR_5->len];
   VAR_5->t[VAR_5->len] = 0;
   FUNC_2(VAR_2, "%s", VAR_5->t);
   VAR_5->t[VAR_5->len] = VAR_6;
  }
  if (VAR_5->type==VAR_0) {
   FUNC_2(VAR_2, VAR_5==VAR_3->tp?"{*":"{");
   FUNC_3(VAR_5->hideset);
   FUNC_2(VAR_2, "} ");
  } else
   FUNC_2(VAR_2, VAR_5==VAR_3->tp?"{%x*} ":"{%x} ", VAR_5->type);
 }
 FUNC_2(VAR_2, "\n");
 FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int digits; int emax; int emin; int clamp; int extended; int traps; void* round; scalar_t__ status; } ;
typedef TYPE_1__ decContext ;
typedef int Int ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;

decContext * FUNC_1(decContext *VAR_6, Int VAR_7) {

  VAR_6->digits=9;
  VAR_6->emax=VAR_2;
  VAR_6->emin=VAR_3;
  VAR_6->round=VAR_5;
  VAR_6->traps=VAR_0;
  VAR_6->status=0;
  VAR_6->clamp=0;



  switch (VAR_7) {
    case 131:

      break;
    case 129:
      VAR_6->digits=7;
      VAR_6->emax=96;
      VAR_6->emin=-95;
      VAR_6->round=VAR_4;
      VAR_6->traps=0;
      VAR_6->clamp=1;



      break;
    case 128:
      VAR_6->digits=16;
      VAR_6->emax=384;
      VAR_6->emin=-383;
      VAR_6->round=VAR_4;
      VAR_6->traps=0;
      VAR_6->clamp=1;



      break;
    case 130:
      VAR_6->digits=34;
      VAR_6->emax=6144;
      VAR_6->emin=-6143;
      VAR_6->round=VAR_4;
      VAR_6->traps=0;
      VAR_6->clamp=1;



      break;

    default:

      FUNC_0(VAR_6, VAR_1);
    }

  return VAR_6;}

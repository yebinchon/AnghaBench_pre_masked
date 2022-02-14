
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* items; } ;
struct TYPE_8__ {TYPE_3__* display; int lines; int inc; int * process; } ;
struct TYPE_7__ {int type; } ;
typedef int Process ;
typedef TYPE_2__ InfoScreen ;
typedef int FunctionBar ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_3 (int ,int,int ,int,int,int ,int *) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (int ,int,int ) ;

InfoScreen* FUNC_6(InfoScreen* VAR_6, Process* VAR_7, FunctionBar* VAR_8, int VAR_9, char* VAR_10) {
   VAR_6->process = VAR_7;
   if (!VAR_8) {
      VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_2);
   }
   VAR_6->display = FUNC_3(0, 1, VAR_0, VAR_9, 0, FUNC_0(VAR_5), VAR_8);
   VAR_6->inc = FUNC_2(VAR_8);
   VAR_6->lines = FUNC_5(VAR_6->display->items->type, 1, VAR_1);
   FUNC_4(VAR_6->display, VAR_10);
   return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int moving; } ;
struct TYPE_9__ {int currentBar; } ;
struct TYPE_11__ {int moving; TYPE_1__ super; } ;
struct TYPE_10__ {int currentBar; } ;
typedef TYPE_2__ Panel ;
typedef TYPE_3__ MetersPanel ;
typedef TYPE_4__ ListItem ;


 int * VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(MetersPanel* VAR_4, bool VAR_5) {
   Panel* VAR_6 = (Panel*) VAR_4;
   VAR_4->moving = VAR_5;
   ListItem* VAR_7 = (ListItem*)FUNC_1(VAR_6);
   if (VAR_7) {
      VAR_7->moving = VAR_5;
   }
   if (!VAR_5) {
      FUNC_3(VAR_6, VAR_0[VAR_2]);
      FUNC_2(VAR_6);
   } else {
      FUNC_3(VAR_6, VAR_0[VAR_3]);
      VAR_6->currentBar = VAR_1;
   }
   FUNC_0(VAR_4->super.currentBar, ((void*)0));
}

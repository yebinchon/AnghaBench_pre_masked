
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {scalar_t__ number; } ;
struct db9 {scalar_t__ parportno; size_t mode; int pd; int * dev; } ;
struct TYPE_2__ {int n_pads; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct db9** VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct db9*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct parport *VAR_4)
{
 int VAR_5;
 struct db9 *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5] && VAR_2[VAR_5]->parportno == VAR_4->number)
   break;
 }

 if (VAR_5 == VAR_1)
  return;

 VAR_6 = VAR_2[VAR_5];
 VAR_2[VAR_5] = ((void*)0);

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_3[VAR_6->mode].n_pads, VAR_0); VAR_5++)
  FUNC_0(VAR_6->dev[VAR_5]);
 FUNC_3(VAR_6->pd);
 FUNC_1(VAR_6);
}

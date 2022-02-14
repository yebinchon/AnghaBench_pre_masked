
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgfx {scalar_t__ parportno; int pd; scalar_t__* dev; } ;
struct parport {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tgfx*) ;
 int FUNC_2 (int ) ;
 struct tgfx** VAR_2 ;

__attribute__((used)) static void FUNC_3(struct parport *VAR_3)
{
 int VAR_4;
 struct tgfx *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4] && VAR_2[VAR_4]->parportno == VAR_3->number)
   break;
 }

 if (VAR_4 == VAR_1)
  return;

 VAR_5 = VAR_2[VAR_4];
 VAR_2[VAR_4] = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_5->dev[VAR_4])
   FUNC_0(VAR_5->dev[VAR_4]);
 FUNC_2(VAR_5->pd);
 FUNC_1(VAR_5);
}

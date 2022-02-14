
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icside_state {int type; int ioc_base; } ;
struct expansion_card {int dma; } ;




 int VAR_0 ;
 struct icside_state* FUNC_0 (struct expansion_card*) ;
 int FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (struct expansion_card*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct expansion_card*,int ) ;
 int FUNC_5 (struct expansion_card*,int ) ;
 int FUNC_6 (struct icside_state*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct expansion_card *VAR_1)
{
 struct icside_state *VAR_2 = FUNC_0(VAR_1);

 switch (VAR_2->type) {
 case 129:



  FUNC_4(VAR_1, 0);
  break;

 case 128:

  if (VAR_1->dma != VAR_0)
   FUNC_3(VAR_1->dma);


  FUNC_5(VAR_1, 0);


  FUNC_7(0, VAR_2->ioc_base);
  break;
 }

 FUNC_2(VAR_1, ((void*)0));

 FUNC_6(VAR_2);
 FUNC_1(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sibling_subcore_state {int dummy; } ;
struct TYPE_2__ {struct sibling_subcore_state* sibling_subcore_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 struct sibling_subcore_state* FUNC_2 (int,int ,int) ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_4, VAR_5;
 int VAR_6 = FUNC_0();
 struct sibling_subcore_state *VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  int VAR_8 = VAR_4 * VAR_3;
  int VAR_9 = FUNC_1(VAR_8);


  if (VAR_2[VAR_8]->sibling_subcore_state)
   continue;

  VAR_7 =
   FUNC_2(sizeof(struct sibling_subcore_state),
       VAR_1, VAR_9);
  if (!VAR_7)
   return -VAR_0;


  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
   int VAR_10 = VAR_8 + VAR_5;

   VAR_2[VAR_10]->sibling_subcore_state =
      VAR_7;
  }
 }
 return 0;
}

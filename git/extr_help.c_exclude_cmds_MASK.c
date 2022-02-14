
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdnames {int cnt; TYPE_1__** names; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct cmdnames *VAR_0, struct cmdnames *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 int VAR_5;

 VAR_2 = VAR_3 = VAR_4 = 0;
 while (VAR_2 < VAR_0->cnt && VAR_4 < VAR_1->cnt) {
  VAR_5 = FUNC_1(VAR_0->names[VAR_2]->name, VAR_1->names[VAR_4]->name);
  if (VAR_5 < 0)
   VAR_0->names[VAR_3++] = VAR_0->names[VAR_2++];
  else if (VAR_5 == 0) {
   VAR_4++;
   FUNC_0(VAR_0->names[VAR_2++]);
  } else if (VAR_5 > 0)
   VAR_4++;
 }

 while (VAR_2 < VAR_0->cnt)
  VAR_0->names[VAR_3++] = VAR_0->names[VAR_2++];

 VAR_0->cnt = VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdnames {int cnt; TYPE_1__** names; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cmdnames *VAR_0)
{
 int VAR_1, VAR_2;

 if (!VAR_0->cnt)
  return;

 for (VAR_1 = VAR_2 = 1; VAR_1 < VAR_0->cnt; VAR_1++) {
  if (!FUNC_1(VAR_0->names[VAR_1]->name, VAR_0->names[VAR_2-1]->name))
   FUNC_0(VAR_0->names[VAR_1]);
  else
   VAR_0->names[VAR_2++] = VAR_0->names[VAR_1];
 }

 VAR_0->cnt = VAR_2;
}

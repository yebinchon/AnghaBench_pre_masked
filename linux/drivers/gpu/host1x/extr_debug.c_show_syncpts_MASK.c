
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct output {int dummy; } ;
struct host1x {TYPE_1__* syncpt; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct output*,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (struct host1x*) ;
 unsigned int FUNC_4 (struct host1x*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct host1x *VAR_0, struct output *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_1, "---- syncpts ----\n");

 for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_0); VAR_2++) {
  u32 VAR_3 = FUNC_5(VAR_0->syncpt + VAR_2);
  u32 VAR_4 = FUNC_1(VAR_0->syncpt + VAR_2);

  if (!VAR_4 && !VAR_3)
   continue;

  FUNC_0(VAR_1, "id %u (%s) min %d max %d\n",
        VAR_2, VAR_0->syncpt[VAR_2].name, VAR_4, VAR_3);
 }

 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_0); VAR_2++) {
  u32 VAR_5;

  VAR_5 = FUNC_2(VAR_0->syncpt + VAR_2);
  if (VAR_5)
   FUNC_0(VAR_1, "waitbase id %u val %d\n", VAR_2,
         VAR_5);
 }

 FUNC_0(VAR_1, "\n");
}

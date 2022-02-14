
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct output {int dummy; } ;
struct host1x_channel {int dummy; } ;
struct host1x {TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int nb_channels; } ;


 struct host1x_channel* FUNC_0 (struct host1x*,unsigned int) ;
 int FUNC_1 (struct host1x_channel*) ;
 int FUNC_2 (struct output*,char*) ;
 int FUNC_3 (struct host1x*,struct output*) ;
 int FUNC_4 (struct host1x_channel*,struct output*,int) ;
 int FUNC_5 (struct host1x*,struct output*) ;

__attribute__((used)) static void FUNC_6(struct host1x *VAR_0, struct output *VAR_1, bool VAR_2)
{
 unsigned int VAR_3;

 FUNC_3(VAR_0, VAR_1);
 FUNC_5(VAR_0, VAR_1);
 FUNC_2(VAR_1, "---- channels ----\n");

 for (VAR_3 = 0; VAR_3 < VAR_0->info->nb_channels; ++VAR_3) {
  struct host1x_channel *VAR_4 = FUNC_0(VAR_0, VAR_3);

  if (VAR_4) {
   FUNC_4(VAR_4, VAR_1, VAR_2);
   FUNC_1(VAR_4);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x {TYPE_1__* info; } ;
struct TYPE_2__ {int nb_pts; } ;


 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct host1x*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct host1x *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->info->nb_pts, 32); ++VAR_1) {
  FUNC_3(VAR_0, 0xffffffffu,
   FUNC_2(VAR_1));
  FUNC_3(VAR_0, 0xffffffffu,
   FUNC_1(VAR_1));
 }
}

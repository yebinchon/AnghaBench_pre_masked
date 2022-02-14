
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int position; int channel; int phys; } ;
struct tegra_ivc {TYPE_1__ rx; int frame_size; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct tegra_ivc*) ;
 void* FUNC_4 (struct tegra_ivc*,int ,int ) ;
 int FUNC_5 (struct tegra_ivc*,int ,int ,int ,int ) ;

void *FUNC_6(struct tegra_ivc *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_1 == ((void*)0)))
  return FUNC_0(-VAR_0);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  return FUNC_0(VAR_2);





 FUNC_2();

 FUNC_5(VAR_1, VAR_1->rx.phys, VAR_1->rx.position, 0,
       VAR_1->frame_size);

 return FUNC_4(VAR_1, VAR_1->rx.channel, VAR_1->rx.position);
}

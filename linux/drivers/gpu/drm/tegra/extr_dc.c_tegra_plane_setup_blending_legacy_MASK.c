
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int normalized_zpos; } ;
struct tegra_plane_state {TYPE_3__* blending; TYPE_2__ base; scalar_t__ opaque; } ;
struct TYPE_4__ {int state; } ;
struct tegra_plane {TYPE_1__ base; } ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct tegra_plane*,int,int ) ;
 struct tegra_plane_state* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tegra_plane *VAR_8)
{
 u32 VAR_9[3] = {
  FUNC_1(0) | FUNC_0(0) | VAR_0,
  FUNC_1(0) | FUNC_0(0) | VAR_0,
  FUNC_1(0) | FUNC_0(0) | VAR_0,
 };
 u32 VAR_10 = FUNC_1(255) | FUNC_0(255) |
    VAR_0;
 u32 VAR_11 = FUNC_1(255) | FUNC_0(255);
 struct tegra_plane_state *VAR_12;
 u32 VAR_13[2];
 unsigned int VAR_14;


 FUNC_2(VAR_8, VAR_11, VAR_7);
 FUNC_2(VAR_8, VAR_10, VAR_3);

 VAR_12 = FUNC_3(VAR_8->base.state);

 if (VAR_12->opaque) {
  VAR_9[0] |= VAR_2;
  VAR_9[1] |= VAR_2;







  switch (VAR_12->base.normalized_zpos) {
  case 0:
   if (VAR_12->blending[0].alpha &&
       VAR_12->blending[1].alpha)
    VAR_9[2] |= VAR_2;
   break;

  case 1:
   VAR_9[2] |= VAR_2;
   break;
  }
 } else {




  VAR_10 |= VAR_1;







  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   if (VAR_12->blending[VAR_14].alpha &&
       VAR_12->blending[VAR_14].top)
    VAR_9[VAR_14] |= VAR_2;
  }

  switch (VAR_12->base.normalized_zpos) {
  case 0:
   if (VAR_12->blending[0].alpha &&
       VAR_12->blending[1].alpha)
    VAR_9[2] |= VAR_2;
   break;

  case 1:





   if (VAR_12->blending[0].alpha &&
       VAR_12->blending[0].top)
    VAR_9[2] |= VAR_1;

   if (VAR_12->blending[1].alpha &&
       VAR_12->blending[1].top)
    VAR_9[2] |= VAR_1;
   break;
  }
 }

 switch (VAR_12->base.normalized_zpos) {
 case 0:
  FUNC_2(VAR_8, VAR_9[0], VAR_4);
  FUNC_2(VAR_8, VAR_9[1], VAR_5);
  FUNC_2(VAR_8, VAR_9[2], VAR_6);
  break;

 case 1:





  if (!VAR_12->blending[0].top && VAR_12->blending[1].top) {
   VAR_13[0] = VAR_10;
   VAR_13[1] = VAR_9[1];
  } else {
   VAR_13[0] = VAR_9[0];
   VAR_13[1] = VAR_10;
  }

  FUNC_2(VAR_8, VAR_13[0], VAR_4);
  FUNC_2(VAR_8, VAR_13[1], VAR_5);
  FUNC_2(VAR_8, VAR_9[2], VAR_6);
  break;

 case 2:
  FUNC_2(VAR_8, VAR_10, VAR_4);
  FUNC_2(VAR_8, VAR_10, VAR_5);
  FUNC_2(VAR_8, VAR_10, VAR_6);
  break;
 }
}

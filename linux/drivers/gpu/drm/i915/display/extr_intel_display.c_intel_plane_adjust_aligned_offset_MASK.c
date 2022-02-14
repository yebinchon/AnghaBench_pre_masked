
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rotation; int fb; } ;
struct intel_plane_state {TYPE_2__* color_plane; TYPE_1__ base; } ;
struct TYPE_4__ {int stride; } ;


 int FUNC_0 (int*,int*,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(int *VAR_0, int *VAR_1,
          const struct intel_plane_state *VAR_2,
          int VAR_3,
          u32 VAR_4, u32 VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->base.fb, VAR_3,
        VAR_2->base.rotation,
        VAR_2->color_plane[VAR_3].stride,
        VAR_4, VAR_5);
}
